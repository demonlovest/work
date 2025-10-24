//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int main() {
    int a, b;
    char op;
    double result;
    printf("请输入第一个数：");
    scanf("%d",&a);
    printf("请输入第二个数：");
    scanf("%d",&b);
    printf("请输入运算符：");
    scanf(" %c",&op);
    switch(op){
        case'+':
        result=a+b;
        break;
        case'-':
        result=a-b;
        break;
        case'*':
        result=a*b;
        break;
        case'/':
        if(b !=0) {
            result=(double)a/b;
        }else {
                printf("除数不能为0!\n");
                return 1;  
            }
            break;
        default:
            printf("无效的运算符！\n");
            return 1; 
    }
    
    printf("%d %c %d = %g\n",a,op,b,result);
    return 0;
} 