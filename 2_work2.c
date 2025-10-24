//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int main()
{
    int score;
    printf("请输入学生成绩： ");
    scanf("%d",&score);
    if(score<0||score>100) {
        printf("输入成绩无效\n");
    }else if (score>=90) {
        printf("A\n"); 
    }else if (score>=80) {
        printf("B\n");
    }else if (score>=70) {
        printf("C\n");
    }else if (score>=60) {
        printf("D\n");
    }else {
        printf("E\n");
    }
    return 0;
} 