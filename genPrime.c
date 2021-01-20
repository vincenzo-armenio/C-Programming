//This program generates prime numbers up to the number entered by the user.

#include <stdio.h>
#include <math.h>
int main(void){

int number, count, div, flag;

  printf("This program generates prime numbers up to the number entered by the user.\n");
  printf("Enter an integer >1);
  scanf("%d",number);

  if(number==1)
  return 0;

  printf("2 ");

  for(count=3; count<=number; count = count + 2){

    for(count=3,flag=0; count<=sqrt(number); count = count + 2){
      if(!(number%div)){
      flag=1;
      break;
      }
  }

  if(!flag)
  printf("%5d", count);

  }
  printf("\n");

return 0;
}
