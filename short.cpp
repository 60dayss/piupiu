#include <iostream>
#include <iomanip>



using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");


    cout << " Лопатин Глеб группа номер 9005\n";
    cout << "***\n";
    cout << "f1(x)=-89,42x^8-543,76x^2+32,76x \n";
    cout << "***\n";
    cout << "f1_1(x)=x(x(-89,42x^6-543,76)+32,76)\n";
    cout << "***\n";
    cout << "f2(x)=-8980,032x^6-186,34x^4-649,32x^2 \n ";
    cout << "***\n";
    cout << "f2_2(x)=x^2(x^2(−8980,032x^2-186,34)-649,32)\n";
    cout << "***\n";

    cout << "Enter x:  ";
    double x;
    cin >> x;
    //Вычисляем первый полином
    double polinom1 = x * (x * (-89.42 * x * x * x * x * x * x - 543.76) + 32.76);
    //Вычисляем второй полином
    double prost;
    prost = -8980.032;
    double polinom2 = (x * x) * ((x * x) * (prost * x * x - 186.34) - 649.32);
    //Частное от деления двух полиномов 
    cout << "\nРезультатом деления полиномов друг на друга является: " << setw(4) << polinom1 / polinom2;
}
