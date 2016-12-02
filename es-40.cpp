//esercizio 40

#include<iostream>
using namespace std;


void controllo_puntoretta (float m, float n, float x, float y);


int main()
{
	float m, q, x, y;
	
	cout<<"inserisci coefficiente angolare: ";
	cin>>m;
	cout<<"inserisci termine noto: ";
	cin>>q;
	cout<<"y="<<m<<"x+"<<q<<endl;
	
	cout<<"inserisci coordinate punto: "<<endl;
	cin>>x>>y;
	cout<<"punto("<<x<<";"<<y<<")"<<endl;
	
	controllo_puntoretta(m, q, x, y);

}


void controllo_puntoretta (float m, float q, float x, float y)
{
	if(y==((m*x)+q))
	{
		cout<<"Il punto appartiene alla retta";
	}
	else
	{
		cout<<"il punto non appartiene alla retta";
	}
}
