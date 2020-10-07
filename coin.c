#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int j,count=0,limit,i=0,head,tail;
 float y,answer,h=2.5;
 printf("enter the limit amount");
 scanf("%d",&limit);
 
    
    srand(time(NULL));
   while(i<=limit){
   
   i++;
   head=0;
   tail=0;
for(j=0;j<10;j++){

 y=(float)((rand()/(float)RAND_MAX)*5);
    printf("%f\n",y);
    if(y<h){
    	head=head+1;
	}
	else
	{
		tail=tail+1;
	}
}
if((head==3) || (head==6)||(head==9)){
	count=count+1;
}
}
printf("count: %d\n",count);
answer=(float)count/limit;
printf("the limit is %d \n and the probability is %f",limit,answer);

}

