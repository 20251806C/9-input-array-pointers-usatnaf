#include <stdio.h>

int main(void) {
	char ch;
	printf("enter chars to read (@ to stop)>>>");

	while ((ch = getc(stdin)) != '@') {
		putchar(ch);
	}
	printf("\nEnd of input.\n");
	return 0;
}