#include <stdio.h>
/* Standard does NOT always impose a specific behavior for a source code.
   This is not an error or weakness, but infeasible.
   such non-portable constructs are generally grouped into three categories:
   a) portable 
   b) non-portable
    b1. implementation-defined
    b2. unspecified
    b3. undefined behavior
*/
/* undefined */ 
/* Undefined Behavior is the result of executing computer code written */
/* for which the spec does not prescribe how that code should be handled */
/* https://en.wikipedia.org/wiki/Undefined_behavior */


int main(void){
	int i = 0;
	i = i++;
	printf("i=%d\n", i);
}
