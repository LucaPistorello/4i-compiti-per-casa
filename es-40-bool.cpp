//esercizio 40

#include<iostream>
using namespace std;

struct punto
{
    float x;
    float y;
};

struct retta
{
    float m;
    float q;
};

bool controllo_puntoretta (retta R, punto P);
bool controllo_retteincidenti(retta R,retta S);


int main()
{
	retta R, S;
	punto P;


	cout<<"inserisci coefficiente angolare retta R: ";
	cin>>R.m;
	cout<<"inserisci termine noto retta R: ";
	cin>>R.q;
	cout<<"y="<<R.m<<"x+"<<R.q<<endl<<endl;


	cout<<"inserisci coordinate punto: "<<endl;
	cin>>P.x>>P.y;
	cout<<"punto("<<P.x<<";"<<P.y<<")"<<endl;

	bool appartiene=controllo_puntoretta(R,P);
	if (appartiene)
        cout<<"Il punto appartiene alla retta"<<endl<<endl;
    else
        cout<<"il punto non appartiene alla retta"<<endl<<endl;



    cout<<"inserisci coefficiente angolare retta R: ";
	cin>>S.m;
	cout<<"inserisci termine noto retta R: ";
	cin>>S.q;
	cout<<"y="<<S.m<<"x+"<<S.q<<endl;

	bool incidenti=controllo_retteincidenti(R,S);
	if (incidenti)
        cout<<"Le rette sono incidenti"<<endl;
    else
        cout<<"Le rette sono parallele"<<endl;

}


bool controllo_puntoretta (retta R, punto P)
{
	return (P.y==R.m*P.x+R.q);
}

bool controllo_retteincidenti(retta R,retta S)
{
    return (R.m!=S.m);
}
