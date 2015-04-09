#include <iostream>
#include<cmath>
using namespace std;


void t(int a)
{

}

void PrintSin ()
{
    double const Pi = 3.14;
    for(int i=0; i<11; i++)
    {
        double b = sin(Pi)+i;
        cout << b << endl;
    }
    cout << "\n";
}

void cos(float* const a, int b)
{
    for (int j=0; j < b; j++)
    {
        a[j] = cos(j);
    }
}

void printTab(const float* const a, int b)
{
    for (int j=0; j < b; j++)
    {
        cout<< a[j] <<endl;
    }
    cout<<"\n";
}

void MMM(float *r, int f)
{
    if(f > 0)
    {
        float mini = r[0];
        float maxi = r[0];
        float moy = r[0];
        for(int i=1; i<f; i++)
        {
            if(mini > r[i])
            {
                mini = r[i];
            }
            if(maxi < r[i])
            {
                maxi = r[i];
            }
            moy += r[i];
        }
        moy /= f;
        cout<< "mini " <<mini<<endl;
        cout<< "maxi " <<maxi<<endl;
        cout<< "moye " <<moy<<endl;
    }
}

int main()
{
    cout << "Hello c++" << "\n\n";
    int c = 2;
    t(c);
    cout << t << "\n\n";

    double const Pi = 3.14;
    cout << Pi << "\n\n";

    PrintSin();

    const int z = 60;
    float y[z];
    cos(y,z);
    printTab(y,z);

    MMM(y,z);
}







