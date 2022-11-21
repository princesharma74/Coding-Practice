#include<stdio.h>
#include<conio.h>


#define F(start, end) for(int i = (start); i < (end); i++) printf("%d ", i);
#define CA(r) PI*r*r // macro

void main(){
    /*
    4 students - [A, B, C]
    */
   int marks[4][3]; // 4 x 3
   char SUB[3] = {'A', 'B', 'C'};
   for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &marks[i][j]);
        }
   }

   for(int j = 0; j < 3; j++){
    int max = 0; 
    for(int i = 0; i < 4; i++){
        if(max < marks[i][j]){
            max = marks[i][j];
        }
    }
   printf("Max of %c = %d\n", SUB[j], max);
   }
}