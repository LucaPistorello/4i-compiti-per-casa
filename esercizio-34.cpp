//esercizio  pagina 127
#include<iostream>
using namespace std;

void visualizza_numeri_successivi(int m);

int main()
{
    int n=0;

    while(n<1)
    {
        cout<<"inserisci numero positivo : ";
        cin>>n;
    }

    visualizza_numeri_successivi(n);
}

void visualizza_numeri_successivi(int m)
{
    int i;
    for(i=0;i<5;i++)
    {
        m++;
        cout<<m<<endl;;
    }

}
