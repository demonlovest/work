//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int main () {
    int arr[5];
    int count=0;
    while (count<5) {
        int num;
        printf("请输入一个整数：");
        scanf("%d", &num);
        if (num%2==0) {
            arr[count]=num;
            count++;
        }
    }
    for (int i=0;i<5;i++) {
        if (i==4) {
            printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
