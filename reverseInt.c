//This program reverses a user-entered integer and prints the result.
/* An example of flow execution:
   
  val:    invert:
  5479    0
  547     9
  54      97
  4       974
  0       9745       
  
 */
 
  #include <stdio.h>
  int main(void){
  int val;
  int invert = 0;
  
  printf("Enter an integer: ");
  scanf("%d",val);
  
  while(val!=0){
  invert = invert*10 + val%10;
  val = val/10;
  }
  
  printf("Inverted integer: %d"\n, invert);
 
  return 0;
  }
  
  
  

  
  
  
