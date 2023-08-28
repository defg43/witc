#include "../src/matching.h"
#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    int a, b, c;

    clock_t start_time, end_time;

    for (int i = 0; i < 1000000; i++) {
        a = rand() % 100;
        b = rand() % 100;
        c = rand() % 100;
        
        start_time = clock();
        
        match(a, b, c) { wildcard (_)
            pattern(1, 2, 3)
                printf("1");

            pattern(4, 5, 6)
                printf("2");

            pattern(7, 8, 9)
                printf("3");

            pattern(_, _, _ when a % 2 == 0 && b % 3 == 0)
                printf("e");
            
            pattern(_, 10, _ when c % 4 == 0)
                printf("f");
            else 
                printf("d");
        }
        
        end_time = clock();
        
        double time_taken = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
        printf("Time taken: %f seconds\n", time_taken);
    }
}
