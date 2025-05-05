#include <stdio.h>
#include <string.h>

#define MAX_SIZE 50

struct Person {
	char name[MAX_SIZE];
	int age;
};

int main() {
	struct Person p;
	printf("Please enter your full name:\n");
	// fgets(p.name, MAX_SIZE, stdin);
	scanf("%[^\n]s", p.name);
	printf("Please enter your age:\n");
	scanf("%d", &p.age);

	printf("name: %s, age: %d\n", p.name, p.age);
	return 0;
}
