#include <stdio.h>
#include <math.h>

//declare sub-function
void bai1();

int main()
{
    bai1();
    return 0;
}
//Nhập vào diện tích S của một mặt cầu. Tính thể tích V của hình cầu này.
void bai1()
{
    float s=0;
    printf("input square = ");
    scanf("%f",&s);
    float r=sqrt(s/(4*3.14));
    float v= 4*3.14*r*r*r/3;
    printf("v = %.2f",v);
}