#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void compute(int limit,int d){
    int count=0;
    float h=2.5;
    	srand(time(NULL));
int	i=0,j;
	while(i<limit){
	i++;
int head=0;
int tail=0;
	for(j=0;j<10;j++){
	float y=(float)((rand()/(float)RAND_MAX)*5);
		printf("%f\n",y);
		if(y<h)
		    head=head+1;
		else
		tail=tail+1;
	}
	if((head==3)||(head==6)||(head==9)){
	     count=count+1;
	}
	}
float answer=(float)count/limit;
printf("\nWhen a coin is tossed 10 times the probability of getting head 3,6 or 9 times is %f ",answer);

    
}

int main(){
	int limit,d;
	
	printf("How many times you want to iterate? ");
	scanf("%d",&limit);
	printf("\nHow many times you want to toss a coin?  ");
	scanf("%d",&d);
	compute(limit,d);
	
}
