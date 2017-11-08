#include <stdio.h>

int main(void){
    int a, i, j;
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

    for(j = 0;j < count;j++){
        if(nanjo[j] > 1){
            printf("%d^%d", sosu[j], nanjo[j]);
            if(j != i - 1){
                printf(" * ");
            }
        }
        else if(nanjo[j] == 1){
            printf("%d", sosu[j]);
            if(j != i - 1){
                printf(" * ");
            }
        }
    }
    
    printf("\n");

    return 0;
}
