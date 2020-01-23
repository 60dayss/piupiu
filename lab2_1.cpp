#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;
 
int main() {
    cout << " Enter the epsilon \n";
    double eps;
    cin >> eps;
    
    cout << " Enter the X < 1 \n";
    double x;
    cin >> x;
    
    double a = 1;

    for (int i = 2; i < 1000; i++)
    {
        double k = x*(i-1);

        a *= k;
        cout << a << endl;

        if (fabs(a) <= eps)
        {
            cout << "Number i = " << i+1 << endl;
            break;

        }
        else {
            cout << "Try other x";
        }
      
      }






}
