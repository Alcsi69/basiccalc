#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* end = NULL;
	char buf[255];
	long n = 0;
	printf("Enter an integer:\n");
	while (fgets(buf, sizeof(buf), stdin)) {
		n = strtol(buf, &end, 10);
		if (end == buf || *end !='\n') {
			printf("Not recognised as an integer. Please enter an integer:\n");
		} else break;
	}
	printf("You entered %ld\n", n);
	return 0;
}