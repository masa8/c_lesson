#include <stdio.h>


int
main(void){

/* Postfix > Unary > Arihmetic */
/* Bitwise > Logical */
/* conditional, assignment, comma opeerator */


 char a[] = "12";
 char *p = &a[0];
 
 /* Postfix > Unary */
 printf("%d@%d\n", *p,p);
 *p++; 				/* == *(p++); */
 printf("%d@%d\n", *p,p);

 /* unary > arithmetic */
 char b = 1;
 char c = (int)~a[2]+b; 		/*  (~a) + b */
 printf("c=%x\n", c);

 /* bitwise > logical */
  int x = 2, y = 1, z= 1;
  int ret = x | y && z;
 printf("ret=%d\n", ret);  /* ret = 1 not 3 */


 
}
