#include "types.h"
#include "matching.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct foo { int a; } foo;

int main() {
	int a = 5;
	int b = 12;
	float c = 10.5;
	
	match(a, b, c) {
		pattern(lessthan(10), greaterthan(2), notequal(10.5)) printf("Hello");
		pattern(between(5, 6), _, _) printf("number is between 5 and 6");
		pattern(5, 12, 10.5) printf("exact match");
		pattern(_, _, _) printf("default");
	}	
}
