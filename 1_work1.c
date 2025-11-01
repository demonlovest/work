//202510306114
//Lixn070514@126.com
//李鑫
#include <stdio.h>

int main()
{
    float celsius,fahrenheit;
    printf("请输入摄氏温度：");
    scanf("%f",&celsius);
    fahrenheit= celsius*9/5+32;
    printf("华氏温度为:%.1f\n",fahrenheit);
    return 0;
}
