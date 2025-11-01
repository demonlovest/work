//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int main() {
    int arr[5];
    int sum=0;
    printf("请输入四个整数：");
    for (int i=0;i<4;i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    arr[4]=sum;
    for (int i=0;i<5;i++) {
        if ( i==4 ) {
        printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}