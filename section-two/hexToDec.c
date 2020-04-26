#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main() {
	const int BUFFER_SIZE = 16;
	char line[BUFFER_SIZE];
	
	while (fgets(line, BUFFER_SIZE, stdin) != NULL) {
		int a = strtol(line, NULL, 16);
		printf("%d\n", a);
	}
	
	return 0;
}
