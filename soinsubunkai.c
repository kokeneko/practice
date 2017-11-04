#include <stdio.h>

int main(void){
    int a, i;
    int nanjo[1000];
    int count;
    int sosu[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    
    printf("正の整数を入力してください:");  scanf("%d", &a);

    for(i = 0;a != 1;i++){
        nanjo[i] = 0;
        
        while(a % sosu[i] == 0){
            a = a / sosu[i];
            nanjo[i]++;
        }
        
        count++;
    }

    if(nanjo[0] > 1){
        printf("%d^%d", sosu[0], nanjo[0]);
    }
    else if(nanjo[0] == 1){
        printf("%d", sosu[0]);
    }

    for(i = 1;i < count;i++){
        if(nanjo[i] > 1){
            printf(" × %d^%d", sosu[i], nanjo[i]);
        }
        else if(nanjo[i] == 1){
            printf(" × %d", sosu[i]);
        }
    }
    
    printf("\n");

    return 0;
}
