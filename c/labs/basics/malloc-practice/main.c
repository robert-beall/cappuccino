#include <stdio.h>
#include <stdlib.h>

void array_malloc() {
	int *i4 = malloc(sizeof(int) * 4);

	int i;

	for (i = 0; i < 4; i++) {
		i4[i] = i; 
	}	

	printf("i4[2] = %d\n", i4[2]);

	free(i4);
}

void basic_malloc() {
	int *i1 = malloc(sizeof(int));

	*i1 = 2;

	printf("%d\n", *i1);
	free(i1);
}

int main() {
	basic_malloc();
	array_malloc();
	return 0;
}
