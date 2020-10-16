//A number is prime when it is not divisible by any prime number between 2 and the square root of the number itself. (Sieve of Eratosthenes)

#include <stdio.h>
#include <math.h>
int main(void){

int number, i, flag;

  printf("This program determines whether a number is prime\n");
  printf("Enter an integer >=2\n");
  scanf("%d",&number);
  
  if(number==2){
  printf("The number is prime\n");
  return 0; //the program ends
  }
  
  for(flag=0,i=2; i<=sqrt(number); i++){
    if(!(number%i)){
      printf("The number %d is not prime\n",number);
      flag=1;
      break;
    }
  }
  
  if(!flag)
  printf("The number %d is prime\n",number);
  
return 0;
}
