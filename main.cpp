#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

int main() {
    setlocale(0, "");

    
    cout << " ������� ���� ������ ����� 9005\n";
    cout << "***\n";
    cout << "f1(x)=-89,42x^8-543,76x^2+32,76x \n";
    cout << "***\n";
    cout << "f1_1(x)=x(x(-89,42x^6-543,76)+32,76)\n";
    cout << "***\n";
    cout << "f2(x)=-8980,032x^6-186,34x^4-649,32x^2 \n ";
    cout << "***\n";
    cout << "f2_2(x)=x^2(x^2(?8980,032x^2-186,34)-649,32)\n";
    cout << "***\n";

    cout<<"Enter x:  ";
    double x;
    cin >> x;
    //��������� ������ �������

    double upr1_1 = -89.42*pow(x, 6)-543.76;
    cout << "��������� ������� ��������� = " << setw(4)<< upr1_1 << endl;

    double upr1_2 = x*upr1_1;
    cout <<"��������� ������� ��������� = " << setw(4)<< upr1_2 << endl;

    double upr1_3 = upr1_2 + 32.76;
    cout << "��������� �������� ��������� = "<< setw(4) << upr1_3 <<endl;
    
    double finalrez1 = upr1_3 * x;
    cout << "������ ������� �����: "<< setw(4) << finalrez1;
    //��������� ������ �������

    double upr2_1 = -8980.032*(x*x)-186.34;
    cout << "\n��������� ������� ��������� = " << setw(4)<< upr2_1 << endl;
    double upr2_2 =(x*x)*upr2_1;
    cout << "��������� ������� ��������� = " << setw(4)<< upr2_2 << endl;
    double upr2_3 =upr2_2-649.32;
    cout << "��������� �������� ��������� = "<< setw(4) << upr2_3 <<endl;

    double finalrez2 = (x*x)*upr2_3;
    cout << "������ ������� �����: "<< setw(4) << finalrez2;
    //��������� ������� ��������� ���� �� �����

    cout <<"\n����������� ������� ��������� ���� �� ����� ��������: "<< setw(4) << finalrez1/finalrez2 ;





     
    
   
    
}