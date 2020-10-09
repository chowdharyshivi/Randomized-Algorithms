#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

 
int main(void){
    
    unsigned i, j, k,n, choice, winsbyswitch=0, door[3];
 printf("Enter the no. of trials: ");
 scanf("%d",&n);
    srand(time(NULL));                                                         
    for(i=0; i<n; i++){
        door[0]=rand()%2;
        if(door[0]==1){
            door[1]=0;
            door[2]=0;
        }
        else {
            door[1]=rand()%2;
                if(door[1]==1){
                	
                    door[2]=0;
                }
                else if(door[1]==0){
                    door[2]=1;
                }
        }
        
        
        choice=rand()%3;
   if(door[(choice+1)%3]==0&&door[(choice+2)%3]==1||door[(choice+2)%3]==0&&door[(choice+1)%3]==1){
   
      winsbyswitch++;
    }
}
         float probability=(float)winsbyswitch*100.0/(float)i;
        printf("After %u trials , won = %u , the Probability of winning the game by switching is %f. ",n,winsbyswitch,probability);
        
}
