#include <stdio.h>
#include <math.h>
#include <iomanip>


using  namespace std;
int main() {
    setlocale(0, "");

    
    printf(" ������� ���� ������ ����� 9005\n");
    printf("***\n");
    printf("f1(x)=-89,42x^8-543,76x^2+32,76x \n");
    printf("***\n");
    printf("f1_1(x)=x(x(-89,42x^6-543,76)+32,76)\n");
    printf("***\n");
    printf("f2(x)=-8980,032x^6-186,34x^4-649,32x^2 \n") ;
    printf("***\n");
    printf("f2_2(x)=x^2(x^2(8980,032x^2-186,34)-649,32)\n");
    printf("***\n");

    printf("������� x:  ");
    double x;
    scanf  ("%lf", &x);
    //��������� ������ �������

    double upr1_1 = -89.42*x*x*x*x*x*x-543.76;
    printf("\n��������� ������� ��������� = %lf", upr1_1 );

    double upr1_2 = x*upr1_1;
    printf("\n��������� ������� ��������� = %lf", upr1_2 );

    double upr1_3 = upr1_2 + 32.76;
    printf("\n��������� �������� ��������� = %lf",  upr1_3);
    
    double finalrez1 = upr1_3 * x;
    printf("\n������ ������� �����:%lf ",  finalrez1) ;
    //��������� ������ �������

    double upr2_1 = -8980.032*(x*x)-186.34;
    printf("\n��������� ������� ��������� = %lf", upr2_1 );
    double upr2_2 =(x*x)*upr2_1;
    printf(  "\n��������� ������� ��������� = %lf", upr2_2 );
    double upr2_3 =upr2_2-649.32;
    printf(  "\n��������� �������� ��������� = %lf",  upr2_3);

    double finalrez2 = (x*x)*upr2_3;
    printf("\n������ ������� �����: %lf",  finalrez2);
    //��������� ������� ��������� ���� �� �����

    printf("\n����������� ������� ��������� ���� �� ����� ��������:  %lf", finalrez1/finalrez2) ;





     
    
   
    
}
