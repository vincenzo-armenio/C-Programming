/* A simple C program for calculating the factorial */

#include <stdio.h>
int main(void){
  int fact = 1;
  int n;
  
  printf("Enter an integer: ");
  scanf("%d", &n);
  
   // the factorial of 0 is 1
   if (n == 0){
	 printf("Factorial is %d\n", fact);
	 }

   // shows error if the user enters a negative integer
    if (n < 0){
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }
     else {
	     
       while(n!=1){
         fact = n * fact;
         n--;
       }
       
       printf("Factorial is: %d\n", fact);
     }
         
}
