#include<bits/stdc++.h>

using namespace std;

int falsepos()
{
float temp=0,x=0,x0=0,x1=0,x2=0,fx0=0,fx1=0;
int i=0,a=0,b=0,c=0,fx=0;
cout<<"\n              Find root of a given polynomial by REGULA FALSI METHOD";
cout<<"\n\nEnter the polynomial which is in the form ax^2+bx+c=0 :";
cout<<"\n\na=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
/* First do-while loop to find : x0 */
do
{
x=i;
fx=((a*pow(x,2))+(b*x)+c);
if (fx<0)
{
x0=i;
}
i++;
}while(fx>0);
i=0;
/* Second do-while loop to find : x1 */
do
{
x=i;
fx=((a*pow(x,2))+(b*x)+c);
if (fx>0)
{
x1=i;
}
i++;
}while(fx<0);
cout<<"\nRoot of the given polynomial lies between "<<x0<<" and "<<x1;
/* Third do-while loop to find : x2 */
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
}}while(fx!=0);
cout<<"\n\nThe root of the given polynomial is : "<< x2;
}
/* Main Function */
int main()
{

falsepos();

return 0;
}
