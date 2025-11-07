//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
void rever(int arr [], int length) {
    for (int i=0,j=length-1;i<j;i++,j--) {
        int temp = arr[i];
        arr [i] = arr[j];
        arr [j] = temp;
    }
}
int main () {
    int arr [5]= {1,2,3,4,5};
    int len = 5;
    printf("反转前：");
    for (int i=0;i<len;i++) {
        printf("%d ", arr[i]);
    }
    rever(arr,len);
    printf("\n反转后：");
    for (int i=0;i<len;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
