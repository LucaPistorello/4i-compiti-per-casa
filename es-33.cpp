#include<iostream>
using namespace std;

float Xvertice(float a, float b, float c, float xv);
float Yvertice(float a, float b, float c, float yv);

int main()
{
    float a, b, c, xv, yv, xf, xv;
    cout<<"inserisci a: ";
    cin>>a;
    cout<<"inserisci b: ";
    cin>>b;
    cout<<"inserisci c: ";
    cin>>c;

    cout<<"la parabola e': y = "<<a<<"x^2 + "<<b<<"x+ "<<c<<endl;

    cout<<"Il vertice e': ("<<Xvertice(a, b, c, xv)<<";"<<Yvertice(a, b, c, yv)<<")"<<endl;
}

float Xvertice(float a, float b, float c, float xv)
{
    return xv=b/(2*a);
}

float Yvertice(float a, float b, float c, float yv)
{
    return yv=((4*a*c)-(b*b))/(4*a);
}

float Xfuoco(float a, float b, float c, float xf)
{
    return xf=;
}

float Yfuoco(float a, float b, float c, float yf)
{
    return yf=;
}
