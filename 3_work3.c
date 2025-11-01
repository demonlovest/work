//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int main() {
    printf("100到999之间的水仙花数有:\n");
    int num=100;
    while (num<=999) {
    int unit = num % 10;
    int ten = (num / 10 ) % 10;
    int hundred = num / 100;
    int sum = unit*unit*unit+ten*ten*ten+hundred*hundred*hundred;
    if ( sum == num ) {
        printf("%d ", num);
    }
    num++;    
    }
    return 0;
}
