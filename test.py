#! /usr/bin/python3
# this is a python script to test one or more Python++ source files

from subprocess import Popen, PIPE

python_path = '/usr/bin/python3'

class CmdResult:
	def __init__(self, arg_list, stdin_text):
		p = Popen(arg_list, stdout=PIPE, stderr=PIPE)
		stdout, stderr = p.communicate(stdin_text)
		self.stdout = stdout.decode("utf-8") if stdout != None else ""
		self.stderr = stderr.decode("utf-8") if stderr != None else ""
		self.exit_code = p.returncode

def run_in_python(path, arguments, stdin_text):
	if arguments == None:
		arguments = []
	arguments = [python_path, path] + arguments
	return CmdResult(arguments, stdin_text)
	
if __name__ == '__main__':
	result = run_in_python('tests/hello_world.ppp', None, None)
	print('' + result.stdout + '======\n' + result.stderr + '=======\n> ' + str(result.exit_code))


