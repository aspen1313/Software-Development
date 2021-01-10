#include <stdio.h>

int main(){

  int x = 10, y = 11;
  //num is the total sum
  int num;

  //reading value in
  scanf("%d", &x);

  //the loop runs while the value is greater then 0
  //and continues to add the contents of the number together
  while(y>=10){
    y = 0;

    while (x >0) {
      num = x % 10;
      y += num;
      x /=10;
    }
   
    //when y is greater then 10 the numbers totals are added again
    if(y>=10){
      x = y;
    }
  
  }

  //the final number is printed
  printf("%d\n", y);

}
