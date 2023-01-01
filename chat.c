#include <stdio.h>
#include <string.h>

int main() {
	char inp[100];
	char* q = "quit\n";

	printf("> ");
	while (strcmp(fgets(inp, 100, stdin), q) != 0) {
		printf("\n  I'm not quite sure how to answer that\n\n> ");
	}
	printf("\n  Now that i can do!\n");
}
