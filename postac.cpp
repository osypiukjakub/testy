
#include <iostream>
#include "postac.h"
#include <vector>
#include <algorithm>

using namespace std;


void Postac::podnoszenie_przedmiotu(Przedmiot *p)
{
if(waga_ekwipunku_getter()+p->waga_getter()>udzwig)
{cout<<"Ten przedmiot jest za ciezki"<<endl;}

else
{
ekwipunek.push_back(*p);
cout<<"Wzięto "<<p->nazwa_getter()<<endl;
}

}

float Postac::waga_ekwipunku_getter()

{
float waga_ekwipunku=0;
for(int i=0;i<ekwipunek.size();i++)
{

waga_ekwipunku=waga_ekwipunku+ekwipunek[i].waga_getter();


}

return waga_ekwipunku;


}

void Postac::wyswietlanie_ekwipunku()
{
for(int i=0;i<ekwipunek.size();i++)
{
cout<<i+1<<"."<<ekwipunek[i].nazwa_getter()<<endl;

}


}