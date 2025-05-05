#include <stdio.h>

// object-like macro (used to define constants)
#define HALLOWEEN "10/31"

// chain macros
# define NUMBER ZERO
# define ZERO 0

#define EVEN ODD + 1
#define ODD 1

// multi-line macros
#define LIST 1, \
	     2, \
	     3, \

// function-like macro
#define add(a, b) (a + b)

int main() {
	printf("object-like macro:\n%s\n", HALLOWEEN);
	printf("chained macros:\n%d\n", NUMBER);
	printf("chained macros (pt2):\nODD: %d, EVEN: %d\n", ODD, EVEN);
	printf("function-like macro: \n%d\n", add(1, 1));
	return 0;
}
