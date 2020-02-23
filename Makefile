decode:
	g++-9 decode.cpp -o decode
	echo && ./decode && echo
	rm decode

encode:
	g++-9 encode.cpp -o encode
	echo && ./encode && echo
	rm encode