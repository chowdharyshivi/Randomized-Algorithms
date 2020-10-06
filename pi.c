#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
 
int main(int argc,char* argv)
{
   int niter;
   double x,y;
   int i,count=0;
   double z;
   double pi;
   
   printf("Enter the no. of iterations:");
   scanf("%d",&niter);
   srand(time(NULL));
   for(i=0;i<niter;i++){
    x=(double)rand()/RAND_MAX;
    y=(double)rand()/RAND_MAX;
       z=x*x+y*y;
       if(z<=1){
           count++;
       }
   }
   pi=((double)count/niter)*4   ;
   printf("# of trials= %d , estimate of pi is %g \n",niter,pi);
    return 0;
}

