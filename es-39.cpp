#include<iostream>
using namespace std;

bool rette_perpendicolari (float m1, float m2);

int main()
{
	float m1, m2, q1, q2;
	
	cout<<"RETTA 1"<<endl<<"inserisci coefficiente angolare: ";
	cin>>m1;
	cout<<"inserisci termine noto: ";
	cin>>q1;
	cout<<"y="<<m1<<"x+"<<q1<<endl;
	
	cout<<"RETTA 2"<<endl<<"inserisci coefficiente angolare: ";
	cin>>m2;
	cout<<"inserisci termine noto: ";
	cin>>q2;
	cout<<"y="<<m2<<"x+"<<q2<<endl;
	
	cout<<"le rette sono perpendicolari? "<< rette_perpendicolari (m1, m2);
	
	return 0;
}

bool rette_perpendicolari (float m1, float m2)
{
	bool r;
	if(m1==(1/m2))
	{
		r=true;
	}
	else
	{
		r=false;
	}
	
	return r;
}
