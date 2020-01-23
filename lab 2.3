#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Lopatin Gleb, 9005" << endl;

    double x;
    cout << "Enter X: " << endl;
    cin >> x;

    double eps;
    cout << "Enter Epsilon: " << endl;
    cin >> eps;

    int MAX;
    double a = 1;
    for (MAX = 2; MAX < 1000; MAX++)
    {
        double k = x*(MAX-1);

        a *= k;

        if (fabs(a) <= eps)
        {
            break;
        }
    }

    double* sequence = new double[MAX];
    double* sums     = new double[MAX];

    *(sequence + 2) = x;
    *(sums + 2) = x;

    printf("a[2] = %lf; s = %lf\n", x, x);

    for (int i = 2; i < MAX; i++)
    {
        double q = x * (i - 1); 

        auto a = *(sequence + i) * q;

        *(sequence + i + 1) = a;
        *(sums + i + 1) += *(sums + i) + a;

        if (fabs(a) < eps)
        {
            cout << "\nN = " << i + 1 << endl;
            break;
        }
    }

    for (int j = 2; j < MAX; j++)
    {
        auto a = *(sequence + j);
        auto s = *(sums + j);

        cout << setprecision(20) << "a[" << j << "] = " << sequence[j] << " " << "summa = " << sums[j] << endl;
    }

    
    return 0;
}
