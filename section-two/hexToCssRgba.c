#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main() {
	const int BUFFER_SIZE = 16;
	char line[BUFFER_SIZE];
	
	while (fgets(line, BUFFER_SIZE, stdin) != NULL) {
		if (line[7] == '\n') {
			line[7] = 'F';
			line[8] = 'F';
			line[9] = '\n';
			line[10] = '\0';
		}
		
		int r, g, b, a;
		int* rgba[] = {&r, &g, &b, &a};
		
		for (int i = 0; i < 4; i++) {
			char byte[] = {
				line[2 * i + 1],
				line[2 * i + 2],
				'\0'
			};
			
			*rgba[i] = strtol(byte, NULL, 16);
		}
		
		printf("rgba(%d, %d, %d, %.2f)\n", r, g, b, (float) a / (0xFF));
	}
	
	return 0;
}
