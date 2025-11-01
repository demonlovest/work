//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int main () {
    int record[5];
    int i;
    printf("请输入当前记录的前4位学生学号：");
    for (i=0;i<4;i++) {
        scanf ("%d", &record[i]);
    }
    for (i=4;i>0;i--) {
        record[i]=record[i-1];
    }
    record[0]=0;
    for (i=0;i<5;i++) {
        if (i==4) {
            printf("%d", record[i]);
        } else {
            printf("%d ", record[i]);
        }
    }
    return 0;
}