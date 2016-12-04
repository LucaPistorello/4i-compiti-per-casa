//esercizio 37

#include<iostream>
using namespace std;

void ordina_eta(int a, int b, int c);

int main()
{
	int a, b , c;
	
	cout<<"Inserisci l'eta' della prima persona: ";
	cin>>a;
	cout<<"Inserisci l'eta' della seconda persona: ";
	cin>>b;
	cout<<"Inserisci l'eta' della terza persona: ";
	cin>>c;
	cout<<endl;
	
	cout<<"Eta' in ordine: ";
	ordina_eta(a, b, c);
}

void ordina_eta(int a, int b, int c)
{
	if(a>b)
	{	
		if(a>c)
		{
			if(b>c)
			{
				cout<<a<<" ; "<<b<<" ; "<<c;
			}
			else
			{
				cout<<a<<" ; "<<c<<" ; "<<b;
			}
			
		}
		else
			if(a>b)
			{
				cout<<c<<" ; "<<a<<" ; "<<b;
			}
			else
			{
				cout<<c<<" ; "<<b<<" ; "<<a;
			}
	}
	
	else
	{	
		if(b>c)
		{
			if(a>c)
			{
				cout<<b<<" ; "<<a<<" ; "<<c;
			}
			else
			{
				cout<<b<<" ; "<<c<<" ; "<<a;
			}
		}
		else
			if(a>b)
			{
				cout<<c<<" ; "<<a<<" ; "<<b;
			}
			else
			{
				cout<<c<<" ; "<<b<<" ; "<<a;
			}
	}	
}
