//esercizio 32

#include<iostream>
using namespace std;

void calcola_area(int l);
void calcola_perimetro(int l);

int main()
{
    int l;

    cout<<"inserisci misura lato: ";
    cin>>l;

    calcola_area(l);
    calcola_perimetro(l);

}


void calcola_area(int l)
{
    int area;
    area=l*l;
    cout<<area<<endl;
}

void calcola_perimetro(int l)
{
    int perimetro;
    perimetro=4*l;
    cout<<perimetro<<endl;
}
