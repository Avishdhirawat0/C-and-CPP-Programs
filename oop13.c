/*WAP to Implement a Friend Function Using C++ */
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class x
{
    int a,b;
public:
    void getdata()
    {
        cout<<"\nEnter the Data :";
        cin>>a>>b;
    }
    void putdata()
    {

        cout<<"a = "<<a<<"\n";
        cout<<"b = "<<b<<"\n";
        friend float avg(x);
    }
};
float avg(x,x1)
{
    return(x1.a+x1.b);
}
void main()
{

    x a1,float t;
    a1.getdata();
    a1.putdata();
    t = avg(a1);
    cout<<t;
    getch();
}
