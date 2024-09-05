#include <stdio.h>

int main(void){
    int L,M,S;
    int coke, cider;
    int bs, ds;
    scanf("%d\n %d\n %d\n %d\n %d", &L, &M, &S, &coke, &cider);
    if(L>=M){
        bs=M;
        if(bs>=S){
            bs=S;
        }
    }
    else if(L<M){
        bs=L;
        if(bs>=S){
            bs=S;
        }
    }
    if(coke<cider){
        ds=coke;
    }
    else if(coke>=cider){
        ds=cider;
    }
    printf("%d", bs+ds-50);
}
