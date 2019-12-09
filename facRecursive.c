#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int prev;

int main(int argc, char *argv[]){

	char *fac = argv[1];

	int factorial = atoi(fac);
	
	prev = factorial;

	factorial = rec(factorial);
	
	printf("\n%d\n", factorial);
	return 0;

}


int rec(int toFac){
	printf("Factorializing..%d!\n", toFac);


	toFac -= 1; 
	
	prev *= toFac;	
	

	if(toFac != 1){
		rec(toFac);
	}

	return prev;
}
