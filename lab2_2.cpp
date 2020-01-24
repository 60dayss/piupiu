#include <iostream>
#include <math.h>
#include <iomanip> 

using namespace std;

const int MAX = 1000;



int main()
{
    cout << "Lopatin GLeb 9005" << endl;

    double x;
    cout << "Enter X < 1: " << endl;
    cin >> x;

    double eps;
    cout << "Enter Epsilon: " << endl;
    cin >> eps;

    double sequence[MAX];
    double sums[MAX];

    sequence[2] = 1;
    sums[2] = 1;

    printf("a[2] = %lf; s = %lf\n", 1, 1);

    int i;
    for (i = 2; i < MAX; i++)
    {
        double q = (x*(i-1));

        sequence[i + 1] = sequence[i] * q;
        sums[i + 1] += sums[i] + sequence[i + 1];

        if (fabs(sequence[i + 1]) < eps)
        {
            cout << "\nN = " << i + 1 << endl;
            break;
        }
    }

    for (int j = 2; j < i; j++)
    {
        auto a = sequence[j];
        auto s = sums[j];
        
        cout << setprecision(20) << "a[" << j << "] = " << sequence[j] << " " << "summa = " << sums[j] << endl;
    }

    
}
