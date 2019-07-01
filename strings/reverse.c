#include <stdio.h>

int main() {

	char *str = "HelloWorld!";
	int i;

	for (i=0; str[i+1]!='\0'; i++);

	for (;i!=-1; i--) {
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}
