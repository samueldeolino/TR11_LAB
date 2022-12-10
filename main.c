#include <stdio.h>
#include <stdlib.h>
#include "ordvetor.h"


int comparacao(void* x, void* y){
    if(*(int*)x == *(int*)y){
        return 0;
    }else if(*(int*)x > *(int*)y){
        return -1;
    }else{
        return 1;
    }
}

int main(){
    COMP* comp = comparacao;
    int t = 0;
    printf("Tamanho vetor: ");
    scanf("%d", &t);
    VETORORD* veto = VETORD_create(t, comp);
    int in[90] = {};
    int i = 0;
    while(in[i] >= 0){
        printf("NUM: ");
        scanf("%d", &in[i]);
        if(in[i] >= 0){
            VETORD_add(veto, &in[i]);
            i++;
        }
    }
    
    
    printf("%d removido\n", *(int*)VETORD_remove(veto));
    for(int i = 0;i<veto->P;i++){
        printf("%d ", *(int*)veto->elems[i]);
    }
    return 0;
}
