
#include <stdio.h>

int main(){

  //which says what opperation 
  int which; 
  scanf("%d", &which);

  //the number of students 
  int stu;
  scanf("%d", &stu);

  float grade;

  //grades are stored here
  float classAvg [stu];

  for(int i = 0; i<stu; i++){
    //the first student begins
    int s1a, s2a, s3a, s4a;
    scanf("%d", &s1a);
    scanf("%d", &s2a);
    scanf("%d", &s3a);
    scanf("%d", &s4a);
   
    if(s2a<0){
      s2a=0;
    }

    else{
    //calculating students grade 
    grade = (s1a+s2a+s3a+s4a)/4.;
    }
      //adding to array of class averages
      classAvg[i] = grade;
  }
  //now go through array find max, min, and store it to show the user. 

  float low=0;
  //lowest 
  if(which ==1){ 
    for(int i = 0; i<sizeof(classAvg); i++) {
      if(low < classAvg[i]){
	  low = classAvg[i];
	}
    }
      printf("%.2lf\n", low);
  }

    //highest
    float high=0;
                                                                               
    if(which ==2){
      for(int i = 0; i<sizeof(classAvg); i++) {
	if(high > classAvg[i]){
	    high = classAvg[i];
	  }
       }
      printf("%.2lf\n", high);
     }

     //Average 
    float total =0; 
    if(which==3){
      for(int i = 0; i<sizeof(classAvg); i++){
	  total+=classAvg[i];
	}
      total = total/sizeof(classAvg);
      printf("%.2lf\n", total);
    }

  
}
  
  

  
