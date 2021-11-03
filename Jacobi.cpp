#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;

#define f1(x,y,z)  (5-y-z)/2
#define f2(x,y,z)  (15-3*x-2*z)/5
#define f3(x,y,z)  (8-2*x-y)/4

/* Main function */
int main()
{
    float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
    int count=1;
    cout<<"Enter tolerable error:"<<endl;
    cin>>e;

    cout<<endl<<"Count\tx\ty\tz"<<endl;
    do
    {
        /* Calculation */
        x1 = f1(x0,y0,z0);
        y1 = f2(x0,y0,z0);
        z1 = f3(x0,y0,z0);
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        cout<<count<<"\t"<<x1<<"\t"<<y1<<"\t"<<z1<<endl;

        /* Error */
        e1 = fabs(x0-x1);
        e2 = fabs(y0-y1);
        e3 = fabs(z0-z1);

        count++;

        /* Set value for next iteration */
        x0 = x1;
        y0 = y1;
        z0 = z1;

    }
    while(e1>e && e2>e && e3>e);

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    cout<<endl<<"Solution:\n"<<endl<<"x = "<<x1<<endl<<"y = "<<y1<<endl<<"z = "<<z1<<endl;

    return 0;
}





