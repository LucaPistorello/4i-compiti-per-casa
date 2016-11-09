//esercizio 38 pag 127 libro

#include<iostream>

using namespace std;

float calcola_prezzo(float prezzo_vendita, int sconto);
	
int main()
{
	float prezzo_vendita, prezzo_scontato;
	int sconto;
	
	cout << "inserisci prezzo di vendita: ";
	cin >> prezzo_vendita;
	cout << "inserisci sconto percentuale: ";
	cin >> sconto;
	
	cout << "il prezzo scontato e': " << calcola_prezzo(prezzo_vendita, sconto);

	
	return 0;
}



float calcola_prezzo(float prezzo_vendita, int sconto)
{
	return prezzo_vendita-(prezzo_vendita*static_cast<float>(sconto)/100);
}
