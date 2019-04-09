#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main()
{
    // initialization
    init1(&n1);
    init2(&n2);
    add(&n1,&n2,&r);
    disp(&r);
    printf("Hello world!\n");
    return 0;
}


