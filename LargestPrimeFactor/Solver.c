/*
 * Solver.c
 *
 *  Created on: Nov 26, 2018
 *      Author: jemushatt
 */

#include "Solver.h"
#include "stdlib.h"
int main() {
	solve(600851475143);
	return 0;
}

int solve(int n) {
	int size = 1;
	int largestFactor=0;
	int *factors = malloc(size * sizeof(int *));
	for(int i =0; i < n;i++) {
		//Find all factors
		if(n%i==0) {
			//Add them to collection
			*factors=i;
			//Increase collection size
			size++;
			//Reallocate memory for collection
			if(factors!=NULL) {
			*factors = realloc(*factors,size*sizeof(int *));
			}
		}
	}
	for(int i =0; i < size; i++) {

	}
	printf("Largest prime factor: %d\n",largestFactor)
	return 0;
}
