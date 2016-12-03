//esercizio 31

#include<iostream>
#include<string>
using namespace std;


void scrivi_stringa(string stringa);

int main()
{
    string stringa;

    cout<<"inserisci stringa: ";
    cin>>stringa;

    scrivi_stringa(stringa);
}


void scrivi_stringa(string stringa)
{
    for(int i=0;i<3;i++)
    {
        cout<<stringa<<endl;
    }
}
