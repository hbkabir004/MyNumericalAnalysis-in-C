#include<bits/stdc++.h>

using namespace std;

void falsepos()
{
    float temp=0,x=0,x0=0,x1=0,x2=0,fx0=0,fx1=0,P;
    int i=0,a=0,b=0,c=0,fx=0;
    cout<<"\n              Find root of a given polynomial by FALSE POSITION METHOD";
    cout<<"\n\n---Enter the Polynomial which is in the form ax^P+bx+c=0--- ";

    cout<<"\n\nEnter the power of this Polynomial: "<<endl;
    cin>>P;
    cout<<"\n\na=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;

    if(fx0*fx1>=0)
    {
        cout<<"You haven't assumed right inputs"<<endl;
    }

    do
    {
        x=i;
        fx=((a*pow(x,P))+(b*x)+c);
        if (fx<0)
        {
            x0=i;
        }
        i++;
    }
    while(fx>0);
    i=0;

    do
    {
        x=i;
        fx=((a*pow(x,P))+(b*x)+c);
        if (fx>0)
        {
            x1=i;
        }
        i++;
    }
    while(fx<0);
    cout<<"\nRoot of the given polynomial lies between "<<x0<<" and "<<x1;

    do
    {
        if(x1<x0)
        {
            temp=x0;
            x0=x1;
            x1=temp;
        }
        fx0=((a*pow(x0,2))+(b*x0)+c);
        fx1=((a*pow(x1,2))+(b*x1)+c);
        x2=(x0-(((fx0)*(x1-x0))/((fx1)-(fx0))));
        x=x2;
        fx=((a*pow(x,2))+(b*x)+c);
        if (fx<0)
        {
            x0=x2;
        }
        if (fx>0)
        {
            x1=x2;
        }
    }
    while(fx!=0);
    cout<<"\n\nThe root of the given Polynomial is : "<< x2;
}

int main()
{

    falsepos();

    return 0;
}
