//esercizio 41

#include<iostream>
#include<string>
using namespace std;

void acquisizione_somma(float& somma_incassi, int& num_reparti);
float media(int num_reparti, float somma_incassi);

int main()
{
    int num_reparti = 0;
    float somma_incassi = 0;
    acquisizione_somma(somma_incassi, num_reparti);
    cout<< "l'incasso medio e' stato: " << media(num_reparti, somma_incassi) << endl;
    return 0;
}

void acquisizione_somma(float& somma_incassi, int& num_reparti)
{
    char scelta;
    float incasso;
    int i = 1;
    string x;
    do
    {
        cout << "inserisci il nome del " << i << "° reparto: " << endl;
        cin >>  x;
        num_reparti++;
        cout << "inserisci l'incasso del " << i << "° reparto: " << endl;
        cin >> incasso;
        somma_incassi += incasso;

        cout << "vuoi continuare? (s/n) ";
        cin >> scelta;
        i++;

    }while(scelta == 's');
}

float media(int num_reparti, float somma_incassi)
{
    return somma_incassi/num_reparti;
}
