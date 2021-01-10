#include <stdio.h>

int main(){

  //creating variables 
  int option, right1, right2, left1, left2;
  int result1, result2, result3;
  
  //for option -->1 addition, 2 subtraction, 3 multipication
  //each variable is part of a polynomial
  scanf("%d", &option);
  scanf("%d", &left1);
  scanf("%d", &left2);
  scanf("%d", &right1);
  scanf("%d", &right2);

  //addition
  if(option==1){
    result2 = left1 + right1;
    result3 = left2 + left1;
    result1 = 0;
 }

  //subtraction
  else if(option==2){
    result1 = 0;
    right1 = right1*(-1);
    right2 = right2*(-1);
    result2 = left1+right1;
    result3 = left2+right2;
  }

  //multiplication
  else if(option==3){
    result1 = right1*left1;
    result2 =(left1*right2)+(left2*right1);
    result3 = left2*right2;
  }
 
 //if option is invalid
  else{
    printf("%s","error, invalid option inputted\n");
}

  if(option ==1 |option==2| option==3){
    printf("%d%s", result1," ");
    printf("%d%s", result2, " ");
    printf("%d%s", result3, "\n");
  }

}
