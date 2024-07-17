# witc
wait is this C?

This is a funny header only library that provides some cursed macros.
The code isn't that good, even by cursed macro standards.
Don't use this code, it's (mostly) meant as a joke.

matching:
```c
#include "matching.h"
#include <stdio.h>

extern int timeOfDay(void);

int a = 1;
int b = 22;
int c = 101;
int main() {
	match(a, b, c) {
		pattern(1, 2, 3) { // precise match
			printf("first case\n");
		}
		pattern(anyof(1, 2, 3), 22, 102) { // first number can multiple values
			printf("second case\n");
		}
		pattern(lessthan(12), notequal(5), between('a', 55)) { // relational matching
			printf("third case\n");
		}
		pattern(_, _, 101 when timeOfDay() == 1245) { // match guard
			printf("last case\n");
		}
	}	
}
```
foreach:
```c
#include "foreach.h"
#include <stdio.h>

int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int main() {
	// we use javascript inspired of and in semantics
	foreach(int element in array) {
		printf("the element is %d\n", element);
	}

	foreach(size_t index of array) {
		printf("the index is %ld\n", index);
	}
	
	foo(length, array);
	
	// implied index and element
	foreach(array) {
		printf("element %d at index %ld\n", iter.element, iter.index);
	}
}
                        // hate how this needlessly decays to a pointer btw
                        // v
void foo(size_t length, int array[static length]) {

	// in case the array decays to a pointer, the size can be specified explictly
	foreach(int element in length sized array) {
		printf("the element is %d\n", element);
	}

	// works with of too
	foreach(size_t index of length sized array) {
		printf("the index is %ld\n", index);
	}
		
}
```
loops and misc:
```c
#include "loop"
#include <stdio.h>

int main() {
	int a = 0;
	loop { // same as while true 
		a++;
		unless(a < 5) // inverted if
			break;
	}

	repeat(5) {
		printf("e");
	}

	defer(int *p = malloc(sizeof(int)), free(p)) {
		*p = 43;
	}

	maybe(0.5) {
		printf("heads\n");
	} else {
		printf("tails\n")
	}
}
```





