#include <stdio.h>

int main(){

  //creating variables
  int a1, a2, a3, b1, b2, b3, c1, c2, c3;

  //scanning in the binary number
  scanf("%d", &a1);
  scanf("%d", &a2);
  scanf("%d", &a3);

  scanf("%d", &b1);
  scanf("%d", &b2);
  scanf("%d", &b3);

  scanf("%d", &c1);
  scanf("%d", &c2);
  scanf("%d", &c3);

  printf("\n");

  //assigning the values to the variables based off of formula
  int A = ( a1*4)+(a2*2) +a3;
  int B = ( b1*4)+(b2*2) +b3;
  int C = ( c1*4)+(c2*2) +c3;

  //printing the octal number
  printf("%d %d %d",A,B,C);
  printf("\n\n");
  
}

  
