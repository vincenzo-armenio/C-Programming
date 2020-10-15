//implementation to find sum 
//of first n even numbers 

#inlcude <stdio.h>
int main(void){

  int i;
  int sum = 0;
  int value;

  printf("How many even numbers do you want to add?: \n");
  scanf("%d",&value);
  
  for(i=0; i<value; i++)
    sum = sum + (i * 2); 

  printf("Sum of first %d numbers is: %d\n" , value, sum);

return 0;
}
