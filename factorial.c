#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char *argv[]){
	if(argc < 2){
		printf("LACK OF ARGUMENTS");
		exit(1);

	}
	char *fac = argv[1];
	
/*	if((isdigit(fac))){
		printf("NOT A NUMBER");
		exit(2);
	}*/

	int toFac = atoi(fac), n = 0;
	int done = toFac;

	while(toFac > 1){
		
		printf("%s! = ", fac);
		n = toFac - 1;
		toFac = n;
		done *= toFac;

		char *tmp = (char*)malloc(sizeof(char));
		sprintf(tmp, "*%d", toFac);
		strcat(fac, tmp);

	}
	printf("%d\n", done);




	return 0;

}
