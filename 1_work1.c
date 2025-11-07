//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int main () {
    int mat[3] [3],trans[3] [3];
    int i,j;
    printf("请输入矩阵：");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            scanf("%d", &mat[i] [j]);
        }
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            trans[j] [i] = mat[i] [j];
        }
    }
    printf("转置后的矩阵为：");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d ", trans[i] [j]);
        }
        printf("\n");
    }
    return 0;
}
