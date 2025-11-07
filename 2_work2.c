//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int main () {
    int arr[10];
    int i,j,temp;
    printf("请输入十个整数：");
    for (i=0;i<10;i++) {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<9;i++) {
        for (j=0;j<9-i;j++) {
            if (arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("排序后的数列为：");
    for (i=0;i<10;i++) {
         printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
