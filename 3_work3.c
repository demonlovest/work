//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int power (int a,int b) {
    int result=1;
    for (int i=0;i<b;i++) { 
        result *= a;
    }
    return result;
}
int main () {
    int sum = 0;
    for (int i=0;i<=5;i++) {
        sum += power(i,2);
    }
    printf("1² + 2² + 3² + 4² + 5² = %d\n", sum);
    return 0;
}
