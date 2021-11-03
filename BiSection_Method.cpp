#include<bits/stdc++.h>
#define f(x) (x*x)-(4*x)-10
#define E 0.000001
using namespace std;
int main()
{
    float x1, x2, f0, f1, f2, x0, root;
    int i=1;
    cout<<"Enter two limits: "<<endl;
    cin>>x1>>x2;
    f1=f(x1);
    f2=f(x2);
    if(f1*f2>0)
    {
        cout<<"x1 & x2 do not bracket any root "<<endl;
        goto stop;
    }
    while(i<100)
    {
        x0=(x1+x2)/2;
        f0=f(x0);
        if(f1*f0<0)
            x2=x0;
        else
        {
            x1=x0;
            f1=f0;
        }
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        cout<<"Iteration "<<i<<": "<<x1<<"  "<<x2<<endl;
        if(fabs((x2-x1)/x2)<E)
        {
            root=(x1+x2)/2;
            cout<<"\nFinal iteration=  "<<i+1<<endl<<"\nRoot = "<<root<<endl;
            goto stop;
        }
        else
            i++;
    }
stop:
    return 0;
}
