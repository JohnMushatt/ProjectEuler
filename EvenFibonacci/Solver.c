/*
 * Solver.c
 *
 *  Created on: Nov 15, 2018
 *      Author: jemushatt
 */
#include "Solver.h"

int solver(int n);

int main() {
	solver(40000000);
	printf("Example result: %d",sum);
}


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
	return f[n];

}
