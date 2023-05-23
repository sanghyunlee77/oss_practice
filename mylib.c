#include "mylib.h"

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int mult(int a, int b){
	int tmp = a * b;
	return tmp;
}

int div(int a, int b){
	int tmp = a / b;
	return tmp;
}

