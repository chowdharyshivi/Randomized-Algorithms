#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
 void compute(int limit,char name[4][9],char number[13][6]);
typedef struct{
    char *value;
    char *type;
}card;

void compute(int limit,char name[4][9],char number[13][6]){
    int i,j=0,count=0;
    
	float answer;
    card c[52];
    card temp;
for(i=0;i<52;i++){
    c[i].type=name[i%4];
    c[i].value=number[i%13];
}
 
	srand(time(NULL));
	while(j<limit){
	    j++;
for(i=0;i<52;i++){
int r=(rand() % 52);
    temp= c[i];
	c[i]=c[r];
	c[r]=temp;

	printf("%s %s\n",c[i].type,c[i].value);
}

for(i=0;i<52;i++){
    if((c[i].value==number[12])&&(c[i+1].value==number[12])){
        count=count+1;
    }
}
 
 
printf("\n\n\n\n");
}
answer=(float)count/limit;
printf("the probability is: %f",answer);
}
 
int main(){
	
	int limit;

    printf("enter the iterations: \n");
    scanf("%d",&limit);
	char name[4][9]={{"diamonds"},{"clubs"},{"hearts"},{"spades"}};
	char number[13][6]={{"ace"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"},{"ten"},{"Jack"},{"Queen"},{"King"}};
   compute(limit,name,number);
return 0;
}
