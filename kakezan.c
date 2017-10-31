#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Randam(int min, int max){ //ググった
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

int Josu(int x, int y){
    int a = 1;
    int i;

    for(i = 0;y > i;i++){
        a = a * x;
    }

    return a;
}

int main(void){
    srand((unsigned int)time(NULL)); //ググった
        
    int a, b;
    int ans;
    int countC;
    int i = 1;

    printf("0入れたら終了\n");

    do{
        a = Randam(1,9);
        b = Randam(Josu(10,i - 1),Josu(10,i) - 1);
        printf("%d * %d = ",a ,b);  scanf("%d", &ans);
            
        if(ans == a * b){
            printf("正解\n");
            countC++;
        }
        else if(ans == 0){
            printf("終了\n");
        }
        else{ 
            printf("不正解\n");
            if(i != 1){
                i--;
            }
        }
        
        if(countC == 5){
            i++;
            countC = 0;
        }
    }while(ans);
    
    return 0;
}
