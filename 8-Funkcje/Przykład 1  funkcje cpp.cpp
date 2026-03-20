#include <iostream>
using namespace std;


//Definicja funkcji dodaj
int  Dodaj(int a, int b) {
	return a+b;
}

int main() {
	int liczba1,liczba2,suma;
	
	//Pobieranie wartosci od uzytkownika
	cout<<"Podaj pierwsza liczbe calkowita: ";
	cin>> liczba1;
	cout<<"Podaj pierwsza liczbe calkowita: ";
	cin>>liczba2;
	
	//Wywolanie funkcji dodaj i przypisanie wyniku do zmiennej suma
	suma=Dodaj(liczba1,liczba2);
	
	//Wyswietlenie wyniku
	cout <<"Suma: " <<suma<< endl;
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
