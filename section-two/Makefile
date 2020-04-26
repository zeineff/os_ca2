run-task-1:
	grep "^#\([[:alnum:]]\{2\}\{3,4\}\)" colours.txt

compileHexToDec: hexToDec.c
	gcc hexToDec.c -Wall -Wextra -Wpedantic -o hexToDec

compileHexToCssRgba: hexToCssRgba.c
	gcc hexToCssRgba.c -Wall -Wextra -Wpedantic -o hexToCssRgba

run-task-2: compileHexToDec
	grep "^#\([[:alnum:]]\{2\}\{3,4\}\)" colours.txt | cut -c 4-5 | ./hexToDec | paste -s -d ','

run-task-3: compileHexToCssRgba
	grep "^#\([[:alnum:]]\{2\}\{3,4\}\)$" colours.txt | ./hexToCssRgba | sort -g -k4,4 > rgba-colors.txt
