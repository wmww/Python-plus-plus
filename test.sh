
printf "testing '$1'\n"

printf "testing python... "

ppp_file=$1

py_output=$(python3 $ppp_file 2>&1)
py_exit_code=$?

if [ "$py_exit_code" -eq "0" ]; then
	printf "succeeded\n"
else
	printf "FAILED!\n"
fi

printf "testing C++... "

cpp_comp_output=$(g++ -x c++ -std=c++14 $ppp_file -o tmp_bin 2>&1)
cpp_comp_exit_code=$?

cpp_run_output=""
cpp_run_exit_code=1

if [ "$cpp_comp_exit_code" -eq "0" ]; then
	cpp_run_output=$(./tmp_bin 2>&1)
	cpp_run_exit_code=$?
	
	if [ "$cpp_run_exit_code" -eq "0" ]; then
		printf "succeeded\n"
	else
		printf "CRASHED!\n"
	fi
	
	rm tmp_bin
else
	printf "FAILED TO COMPILE!\n"
fi

if [ "$py_exit_code" -eq "0" ] && [ "$cpp_run_exit_code" -eq "0" ] && [ "$py_output" = "$cpp_run_output" ]; then
	
	printf "Python and C++ outputs match\n"
	printf "________\n"
	printf " output \__________________________________________\n\n"
	printf "$py_output\n"
	printf "___________________________________________________\n"
else
	
	if [ "$py_output" != "$cpp_run_output" ]; then
		printf "Python and C++ outputs DO NOT MATCH!\n"
	fi
	
	printf "_______________\n"
	printf " Python output \___________________________________\n\n"
	printf "$py_output\n"
	printf "___________________________________________________\n"
	
	if [ "$cpp_comp_exit_code" -ne "0" ]; then
		printf "_____________________\n"
		printf " C++ compiler output \_____________________________\n\n"
		printf "$cpp_comp_output\n"
		printf "___________________________________________________\n"
	else
		printf "____________\n"
		printf " C++ output \______________________________________\n\n"
		printf "$cpp_run_output\n"
		printf "___________________________________________________\n"
	fi
fi

printf "\n"



