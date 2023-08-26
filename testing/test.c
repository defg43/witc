#include "../src/matching.h"
#include <stdio.h>

int main() {
	int a, b, c;

	for(int i = 0; i < 10000; i++) {
		a = rand(); b = rand(); c = rand();
		match(a, b, c) { wildcard (_)
			pattern(1 , 2, 3)
				printf("test123\n");

			pattern(1, 2, 4)
				printf("test124\n");
				
			pattern(1, 2, 5)
				printf("test125\n");

			pattern(_, _, _ when a % 2 == 0 && b % 5 == 0)
				printf("e\n");
			else 
				printf("default case\n");
		}
	}
}
