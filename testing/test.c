#include "../src/matching.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, c;

    clock_t start_time, end_time;
	start_time = clock();
	
    for (int i = 0; i < 5000; i++) {
        a = rand() % 100;
        b = rand() % 100;
        c = rand() % 100;
        
       	match(a, b, c) { wildcard(_)
 			pattern(_, _, _ when a % 2 == 0)
 			   printf("1\n");
			pattern(_, _, _ when b % 2 == 1)
			  	printf("2\n");
			pattern(_, _, _ when c % 2 == 1)
			  	printf("3\n");
			else 
                printf("d\n");
        }        
    }
    	end_time = clock();
        double time_taken = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
		FILE *fp = fopen("result2.txt", "a");
		if(fp != 0) {
			fprintf(fp, "%.8f\n", time_taken);
			printf("successfully written to file\n");
			fclose(fp);
		} else
		printf("file could not be opened\n");
        	
}
