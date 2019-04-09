

#include "struct.h"

// initialization
// number 1
void init1(struct calculator *n1){
n1->member1=1;
n1->member2=2;
n1->member3=3;
n1->member4=4;
n1->member5=5;
n1->member6=6;
n1->member7=7;
n1->member8=8;
n1->member9=9;
n1->member10=10;
}
// number 1
void init2(struct calculator *n2){

n2->member1=11;
n2->member2=12;
n2->member3=13;
n2->member4=14;
n2->member5=15;
n2->member6=16;
n2->member7=17;
n2->member8=18;
n2->member9=19;
n2->member10=20;
}

void add(struct calculator *n1 , struct calculator *n2 , struct calculator *r)
{
r->member1=n1->member1+n2->member1;
r->member2=n1->member2+n2->member2;
r->member3=n1->member3+n2->member3;
r->member4=n1->member4+n2->member4;
r->member5=n1->member5+n2->member5;
r->member6=n1->member6+n2->member6;
r->member7=n1->member7+n2->member7;
r->member8=n1->member8+n2->member8;
r->member9=n1->member9+n2->member9;
r->member10=n1->member10+n2->member10;
}

void disp(struct calculator *r)
{
   printf("(1)=%i \n",r->member1);
   printf("(1)=%i \n",r->member2);
   printf("(1)=%i \n",r->member3);
   printf("(1)=%i \n",r->member4);
   printf("(1)=%i \n",r->member5);
   printf("(1)=%i \n",r->member6);
   printf("(1)=%i \n",r->member7);
   printf("(1)=%i \n",r->member8);
   printf("(1)=%i \n",r->member9);
   printf("(1)=%i \n",r->member10);
}
