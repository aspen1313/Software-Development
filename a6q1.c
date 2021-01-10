#include <stdio.h>

/*Amy Steels, steels, B00739016
This Programs purpose is to perform a convex hull using jarvis march
*/


//1 is clockwise -1 is counterclockwise                                                                                    
double clock(int x0, int y0, int x1, int y1, int x2, int y2){
  /*
  int first = (x1-x0);
  int second =(y2-y0);
  int third=(x2-x0);
  int fourth=(y1-y0);
  int result1 = first*second;
  int result2 = third*fourth;
  int result3 = result1 - result2;
  */

  double  result = (x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);
  if(result <0) return 1;
  return 0;
}

void main(){


  //number of points
  int num;
  scanf("%d",&num);

  int x[num];
  int y [num];
  int i, x1, y1;
 
  //points being read in
 for(i=0; i<num; i++){
   scanf("%d",&x1);
   x[i] = x1;
     scanf("%d",&y1);
     y[i] = y1;    
  }

int  point [num][2];
 //creating points
 for(i=0; i <num; i++){
   point[i][0] = x[i];
   point[i][1] = y[i];

 }

 //where final results can be stored
 //int  convHall[num][2];
 int pushing = 0;
 int convHall[num][2]; 
//we need 3 points
 if(num >= 3) {
  
    int k = 0;
    int j=0;
 
  //topmost
  int t = k;
  for(i = 0; i<num; i++){
   
    if(point[i][0]> point[t][1]);
       t = i;
      
  }

  
  
  while(k!=t){
 
    convHall[pushing][0] =point[k][0];
    convHall[pushing][1] = point[k][1];
    pushing++;
       
      //calling the method with the formula;
  for(i = 0; i<num; i++){    
   if((clock(point[k][0],point[k][1], point[i][0],point[i][1],point[j][0], point[j][1]))==1){ 
       j=i;
       
              
    }
  }
  k=j;
  j = (k+1);

  //pushing is only incremented when a new one is added
  // if(convHall[pushing][0]!=point[k][0]&&convHall[pushing][1]!= point[k][1]){
  //  pushing++;
  // }
  
  
}
 }

 printf("%d\n", pushing);

      //printing to the user
 for(i = 1; i<pushing; i++)
    printf("%d,%d\n", convHall[i][0], convHall[i][1] ) ;
   
 
}

 
