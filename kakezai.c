#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Randam(int min, int max){ //ググった
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

int main(void){
    srand((unsigned int)time(NULL)); //ググった
        
    int a, b;
    int ans;

    printf("0入れたら終了\n");

    do{
        a = Randam(1,9);
        b = Randam(1,9);
        printf("%d * %d = ",a ,b);  scanf("%d", &ans);
            
        if(ans == a * b){
            printf("正解\n");
        }
        else if(ans == 0){
            printf("終了\n");
        }
        else{ 
            printf("不正解\n");
        }
    }while(ans);
    
    return 0;
}
