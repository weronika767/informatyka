#include <iostream>
using namespace std;

//Definicja funkcji obliczajacej pole prostokata
int ObliczPole(int dlugosc,int szerokosc) {
int pole= dlugosc * szerokosc; // Wykoanie obliczen
return pole; //Zwrot wynku	
	
}

int main() {
	int dlugosc, szerokosc,pole;
	
	//Pobieranie wartosci od uzytkownika
	cout<<"Podaj dlugosc prostoakta: ";
	cin>> dlugosc;
	cout<<"Podaj szerokosc prostokata: " ;
	cin>> szerokosc;
	
	//Wywolanie funkcji ObliczPole i przypisane wyniku do zmiennej pole
	pole=ObliczPole(dlugosc,szerokosc);
	
	//Wyswietlenie wyniku
	cout<<"Pole prostokata: " <<pole<<endl;
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
