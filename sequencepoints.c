#include <stdio.h>
#include <stdlib.h>
/* http://publications.gbdirect.co.uk/c_book/chapter8/sequence_points.html */
/* At each sequence point, the side effects of all previous expressions 
   will be completed. */
int i_var;
void func(void);

int main(void){


	while ( i_var != 10000){
	func();
	i_var++;
	}
	exit(EXIT_SUCCESS);
}

void
func(void){
printf("in func, i_var is %d\n", i_var);
}
