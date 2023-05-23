#include <stdio.h>
#include "mylib.h"

int main(void){
	int a, b;
	printf("input the integer a and b\n");
	scanf("%d %d", &a, &b);

	printf("(intial) a=%d, b=%d\n", a, b);

	swap(&a,&b);
	printf("(swapped) a=%d, b=%d\n", a, b);

	printf("(multiplied) a x b = %d x %d = %d\n", a, b, mult(a, b));
	
        printf("(divided) a / b = %d / %d = %d\n", a, b, div(a, b));
	return 0;
}
