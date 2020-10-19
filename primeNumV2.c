//This program determines whether a number is first or not, before calculating this, check if the input is correct.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

double input, int_part;
int number, div, flag;

  do{
    do{
    printf("This program determines whether a number is first or not\n");
    printf("Enter an integer >=2 (-1 to finish)\n");
    scanf("%lf",&input);
    
    if(input==-1)
    exit(0); //the program ends if -1 is entered
    
    if(input>=2)
    if(!modf(input,int_part))
    break;
    }while(1); //end input control
  
  number = (int)input; //the input value is passed to number 
  
  if(number==2) //number 2 is prime
  flag = 1;
  else if(!(number%div)) //even numbers are not prime
  flag = 0;
  
  else for(div=3,flag=1; div<=sqrt(number);div=div+2)
        if(!(number%div)){
        flag = 0;
        break;
        }
        
  if(flag)
  printf("The number %d is prime\n", number);
  else 
  printf("The number %d is not prime\n", number);
  
  }while(1);


return 0;
}
