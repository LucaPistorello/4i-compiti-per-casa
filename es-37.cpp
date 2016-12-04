//esercizio 37

#include<iostream>
using namespace std;

#define ANNO_ATTUALE 2016

int calcola_eta(int anno_nascita);

int main()
{
	int anno_nascita;
	
	cout<<"Inserisci l'anno di nascita: ";
	cin>>anno_nascita;
	
	cout<<"L'eta' e': "<<calcola_eta(anno_nascita);

}

int calcola_eta(int anno_nascita)
{
	return ANNO_ATTUALE-anno_nascita;
}
