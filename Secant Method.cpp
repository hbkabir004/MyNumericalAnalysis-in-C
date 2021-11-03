#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x-2*x+4;
}
int main()
{
    int iter=1,maxSteps;
    double x1,x2,x3,eps;
    cout<<"Enter the accuracy desired: "<<endl;
    cin>>eps;
    cout<<"Enter the initial guesses: "<<endl<<"x1 = ";
    cin>>x1;
    cout<<"x2 = ";
    cin>>x2;
    cout<<"Enter the max number of iterations to be performed: ";
    cin>>maxSteps;
    cout<<"iter\tx1\tx2\tx3\tf(x3)"<<endl;
    cout<<"___________________________________________________________________"<<endl;
    do
    {
        x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        cout<<fixed<<setprecision(2)<<iter<<"\t"<<x1<<"\t"<<x2<<"\t"<<x3<<"\t"<<f(x3)<<endl;
        x1=x2;
        x2=x3;
        iter++;
    }
    while(fabs(f(x3))>eps && iter<=maxSteps);
    cout<<endl<<"One of the roots is: "<<x3<<endl;

    return 0;
}
