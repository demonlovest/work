//202510306114
//Lixin070514@126.com
//李鑫
#include <stdio.h>
int main() {
    int n,i;
    int is_prime=1;
    printf("请输入小于50的正整数作为密钥:");
    scanf("%d",&n);
    if (n<=0||n>=50) {
    printf("输入无效，请重新输入小于50的正整数\n");
    return 0;
    }
    if (n==1) {
        is_prime = 0;
    }
    else if (n==2) {
        is_prime=1;
    }
    else if (n%2==0) {
        is_prime = 0;
    }
    else {
        for (i=3;i*i<=n;i += 2) {
            if (n % i == 0) {
            is_prime = 0;
            break;    
            }
        }
    }
    if (is_prime) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }
    return 0;
}
