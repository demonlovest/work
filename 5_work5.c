//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int add(int arr[],int len) {
    int sum=0;
    for (int i=0;i<len;i++) {
        sum +=arr[i];
    }
    return sum;
}
int ass(int arr[],int len) {
    int product=1;
    for (int i=0;i<len;i++) {
        product*=arr[i];
    }
    return product;
}
int main () {
    int arr[5];
    int length=5;
    printf("请输入五个整数：");
    for (int i=0;i<length;i++) {
        scanf("%d", &arr[i]);
    }
    int sum = add(arr, length);
    int product = ass(arr, length);
    printf("%d\n", sum);
    printf("%d\n", product);
    return 0;
}
