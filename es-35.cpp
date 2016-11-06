//es 35 pag 127

#include<iostream>
using namespace std;

void media(int n, int s);

int main()
{
	int n_valori, valore, somma;
	cout<<"inserisci il numero dei valori: ";
	cin>>n_valori;
	
	for(int i=0 ; i<n_valori; i++)
	{
		cout<<"inserisci valore: ";
		cin>>valore;
		somma=somma+valore;
	}
	
	media(n_valori, somma);
}

void media(int n, int s)
{
	float media;
	media=s/n;
	cout<<"la media è: "<<media;
}
