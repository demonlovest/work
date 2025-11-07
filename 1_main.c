//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
    int main () { 
    int mat[3] [3];
    int i,j;
    printf("请输入矩阵：\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("输出矩阵：\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
