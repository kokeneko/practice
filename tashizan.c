#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Randam(int min, int max){
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

int main(void){
    srand((unsigned int)time(NULL));

    int ans, kai, i, j;
    int koh[i];

    printf("回数:");   scanf("%d", &j);

    do{
        kai = 0;

        for(i = 0;i < j;i++){
            koh[i] = Randam(1,9);
            kai = kai + koh[i];
    
            if(i != j - 1){
                printf("%d + ", koh[i]);
            }
            else{
                printf("%d =", koh[i]);    scanf("%d", &ans);
            }
        }

        if(kai == ans){
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

