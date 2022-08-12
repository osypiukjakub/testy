#pragma once

#include <iostream>
#include "postac.h"

using namespace std;

class Przedmiot
{
friend class Postac;
string nazwa;
float waga;
float wartosc;



public:

Przedmiot(string n="Przedmiot",float w=0.5,float wa=1)
:nazwa{n},waga{w},wartosc{wa}{};

string nazwa_getter(){return nazwa;};
float waga_getter(){return waga;};
float wartosc_getter(){return wartosc;};



~Przedmiot(){};
};
