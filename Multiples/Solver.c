/*
 * Solver.c
 *
<<<<<<< HEAD
 *  Created on: Nov 14, 2018
=======
 *  Created on: Nov 15, 2018
>>>>>>> 29aa906e6f6dce67c1c2661d808b963e9303efdd
 *      Author: jemushatt
 */

#include "Solver.h"
<<<<<<< HEAD
=======
int solver(int n);


int main() {
	int example = solver(10);
	int example_two = solver(1000);
	printf("test 1: %d\ttest 2: %d",example,example_two);
}



int solver(int n) {
	int sum = 0;

	for(int i = 0; i<n; i++) {
		if((i % 3 ==0) || (i % 5 == 0)) {
			sum += i;
		}
	}
	return sum;
}
>>>>>>> 29aa906e6f6dce67c1c2661d808b963e9303efdd
