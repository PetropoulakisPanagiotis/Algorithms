#include <stdio.h>
#include "Tail.h"

int main(void){
    s_tail x;
    type l;

    tail_create(&x);
    printf("%d\n",tail_empty(x));
    scanf("%d",&(l.x));
    tail_add(&x,l);
    tail_take(&x,&l);
    printf("%d\n",l.x);


    return 0;

}
