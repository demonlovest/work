//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int assd(int a1,int an,int step) {
    int count =((an-a1)/ step)+1;
    return count*(a1+an)/2;
}
int main () {
    int sum=assd(1,100,1);
    printf("%d\n",sum);
    return 0;
}
