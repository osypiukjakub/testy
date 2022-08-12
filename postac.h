#pragma once

#include <iostream>
#include "przedmiot.h"
#include "przedmiot.cpp"
#include <vector>

using namespace std;

class Postac
{

string nazwa;
float hp;
int atk;
int obr;
int zr;
int intel;
float udzwig=100;
vector <Przedmiot> ekwipunek;

public:
Postac(string n="Postac",float h=100,int a=5,int o=5,int z=5,int i=5)
:nazwa{n},hp{h},atk{a},obr{o},zr{z},intel{i}{};

//settery i gettery

string nazwa_getter(){return nazwa;}
int hp_getter(){return hp;}
void hp_setter(int h){hp=h;}

float waga_ekwipunku_getter();
float udzwig_getter(){return udzwig;}

//ekwipunek


void wyswietlanie_ekwipunku();

//przedmioty

void podnoszenie_przedmiotu(Przedmiot *p);



~Postac(){};
};

