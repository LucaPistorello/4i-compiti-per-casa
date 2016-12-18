//es 42 pag 128

#include<iostream>
#include<string>
using namespace std;

float calcola_percentualevoto(int voti, int totale);
void scrivi_ballotaggio(string a, string b, int voti_a, int voti_b);

int main()
{
	string a, b;
	int voti_a, voti_b;
	
	cout<<"Inserisci nome primo canditato: ";
	cin>>a;
	cout<<"Inserisci voti ottenuti: ";
	cin>>voti_a;
	
	cout<<endl;
	
	cout<<"Inserisci nome secondo canditato: ";
	cin>>b;
	cout<<"Inserisci voti ottenuti: ";
	cin>>voti_b;
	
	scrivi_ballotaggio(a, b, voti_a, voti_b);
	
}

void scrivi_ballotaggio(string a, string b, int voti_a, int voti_b)
{
	float percentuale_a, percentuale_b;
	
	percentuale_a=voti_a/(voti_a+voti_b)*100;
	percentuale_b=voti_b/(voti_a+voti_b)*100;
	
	cout<<endl<<"Ballotaggio: "<<endl;
	
	if(percentuale_a>percentuale_b) {cout<<a<<": "<<percentuale_a<<"%"<<endl<<b<<": "<<percentuale_b<<"%";}
	else 							{cout<<b<<": "<<percentuale_b<<"%"<<endl<<a<<": "<<percentuale_a<<"%";}
}
