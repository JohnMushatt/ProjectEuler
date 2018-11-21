/*
 * solver.c
 *
 *  Created on: Nov 15, 2018
 *      Author: jemushatt
 */


#include "solver.h"


int main() {
	int example = solver(20);
	printf("Example result: %d",example);
}


int solver(int n) {
	int test[n];
	 *test = malloc(n * (sizeof(int *)));

	for(int i =1; i <= n;i++) {
		test[i-1]=i;
	}

	int solved = 0;
	int correctNum=1;
	int currentNumber =1;
	int sum= 0;
	while(solved==0) {
		printf("Number: %d\n",currentNumber);
		for(int c = 0; c<n;c++ ){
			if(currentNumber%test[c]!=0) {
				correctNum=0;
			}
		}
		if(correctNum==1) {
			solved=1;
		}
		currentNumber++;
		correctNum=1;

	}
	return currentNumber;
}
