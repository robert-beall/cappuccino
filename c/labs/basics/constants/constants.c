#include <stdio.h>

int main() {
	/* Integer Constants. */
	
	// decimal (base 10) 
	printf("%d\n\n", 20);

	// hexadecimal (base 16)
	printf("%x\n\n", 0x2f);

	// octal (base 8)
	printf("%o\n\n", 056);

	// unsigned decimal integer
	printf("%d\n\n", 45U);

	// long decimal integer
	printf("%d\n\n", 5000000000L);

	/* Character Constants. */
	char s = '\\';
	printf("%c", s);

	return 0;
}
