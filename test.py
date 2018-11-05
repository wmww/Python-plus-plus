#! /usr/bin/python3
# this is a python script to test one or more Python++ source files

from subprocess import Popen, PIPE

python_path = '/usr/bin/python3'

class CmdResult:
	def __init__(self, arg_list, stdin_text = None):
		p = Popen(arg_list, stdout=PIPE, stderr=PIPE)
		stdout, stderr = p.communicate(stdin_text)
		self.stdout = stdout.decode('utf-8') if stdout != None else ''
		self.stderr = stderr.decode('utf-8') if stderr != None else ''
		self.exit_code = p.returncode

def run_in_python(path, arguments, stdin_text):
	arguments = [python_path, path] + arguments
	return CmdResult(arguments, stdin_text)

def run_in_cpp(path, arguments, stdin_text):
	tmp_bin_path = path + '.bin.tmp'
	compile_args = ['g++', '-x', 'c++', '-std=c++14', path, '-o', tmp_bin_path];
	compile_result = CmdResult(compile_args);
	if compile_result.exit_code == 0:
		run_args = ['./' + tmp_bin_path] + arguments
		run_result = CmdResult(run_args, stdin_text)
		if run_result.stderr != '':
			run_result.stderr = 'RUNTIME:\n' + run_result.stderr
		CmdResult(['rm', tmp_bin_path]);
		return run_result;
	else:
		if compile_result.stderr != '':
			compile_result.stderr = 'COMPILER:\n' + compile_result.stderr
		CmdResult(['rm', tmp_bin_path]);
		return compile_result;

def parse_file(path):
	code = open(path)
	while line = code.readline():
		line = code.readline()
		print('parsing line ' + line)
		#if line.startswith('#define comment // $'):
		#	pass

def test_file(path, arguments = None):
	pass

if __name__ == '__main__':
	result = run_in_python('tests/hello_world.ppp', [], None)
	print('' + result.stdout + '======\n' + result.stderr + '=======\n> ' + str(result.exit_code))
