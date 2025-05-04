#include "simple.h"
#include <iostream>

Simple::Simple(int x) {
	this->x = x;
}

int Simple::times_2() {
	return x * 2;      
}
