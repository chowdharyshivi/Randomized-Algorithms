#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
  int i,n;
    double x,y;
scanf("%d",&n);
    srand(time(NULL));
    printf("%d\n",RAND_MAX);
   
   for(i=0;i<n;i++){
        x=(double)rand()/RAND_MAX;
           y=(double)rand()/RAND_MAX;
           printf("%lf  %lf\n",x,y);
         
   }
       
}

 

