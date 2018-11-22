/*
 * Solver.c
 *
 *  Created on: Nov 15, 2018
 *      Author: jemushatt
 */
#include "Solver.h"

int solver(int n);

int main() {
	//solver(40000000);
	solver2(4000000);
	//printf("Example result: %d",sum);
}

/**
* 1st solver uses recursion
*/
int solver(int n) {

	int f[n+2] ;
	int i;
	f[0] = 0;
	f[1]=1;

	for(i = 2; i <=n;i++) {
		f[i] = f[i-1] + f[i-2];
		if(f[i]%2==0) {
			sum+=f[i];
		}
	}
	printf("Sum: %d",sum);

	return f[n];

}

/**
* 2nd solver uses for loop
*/
int solver2(int n) {
	int fibOne = 1;
	int fibTwo = 1;
	int fibN =0;
	int sum = 0;
	while(fibN <n) {
		if(fibN%2==0) {
			sum+=fibN;
		}
		printf("N: %d\n",fibN);
		fibN=fibOne + fibTwo;

		fibOne=fibTwo;
		fibTwo=fibN;
	}
	printf("Sum: %d",sum);
	return sum;
}
