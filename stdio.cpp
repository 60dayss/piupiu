#include <stdio.h>
#include <math.h>
#include <iomanip>


using  namespace std;
int main() {
    setlocale(0, "");

    
    printf(" Лопатин Глеб группа номер 9005\n");
    printf("***\n");
    printf("Формат вывода: +-ddd.ddd или +-ddd.dde+-dd \n");
    printf("***\n");
    printf("f1(x)=-89,42x^8-543,76x^2+32,76x \n");
    printf("***\n");
    printf("f1_1(x)=x(x(-89,42x^6-543,76)+32,76)\n");
    printf("***\n");
    printf("f2(x)=-8980,032x^6-186,34x^4-649,32x^2 \n") ;
    printf("***\n");
    printf("f2_2(x)=x^2(x^2(8980,032x^2-186,34)-649,32)\n");
    printf("***\n");
    printf ("X должен быть от -100 до -100\n");

    printf("Введите x:  ");
    double x;
    scanf  ("%lf", &x);
    //Вычисляем первый полином

    double upr1_1 = -89.42*x*x*x*x*x*x-543.76;
    printf("\nРезультат первого упрощения = %lf", upr1_1 );

    double upr1_2 = x*upr1_1;
    printf("\nРезультат второго упрощения = %lf", upr1_2 );

    double upr1_3 = upr1_2 + 32.76;
    printf("\nРезультат третьего упрощения = %lf",  upr1_3);
    
    double finalrez1 = upr1_3 * x;
    printf("\nПервый полином равен:%lf ",  finalrez1) ;
    //Вычисляем второй полином

    double upr2_1 = -8980.032*(x*x)-186.34;
    printf("\nРезультат первого упрощения = %lf", upr2_1 );
    double upr2_2 =(x*x)*upr2_1;
    printf(  "\nРезультат второго упрощения = %lf", upr2_2 );
    double upr2_3 =upr2_2-649.32;
    printf(  "\nРезультат третьего упрощения = %lf",  upr2_3);

    double finalrez2 = (x*x)*upr2_3;
    printf("\nВторой полином равен: %lf",  finalrez2);
    //Результат деления полиномов друг на друга

    printf("\nРезультатом деления полиномов друг на друга является:  %lf", finalrez1/finalrez2) ;





     
    
   
    
}
