#include <iostream>
using namespace std;
int main() 
{
int liczba =10;    //Deklaracja i inicjalizacja zmiennej
int *wskaznik=&liczba;  //Przypisanie adresu zmiennej liczba do wskaznika

//Wyswietlanie informacji o zmiennej i wskazniku
cout<<"Wartosc zmiennej liczba:" <<liczba <<endl;
cout<<"Adres zmiennej liczba:" <<&liczba <<endl;
cout<<"Wartosc przechowywana w wskazniku: " <<wskaznik<<endl;
cout<<"Wartosc wskazywana przez wskaznik: "<< *wskaznik<<endl;

//Zmiana wartosci zmiennej przez wskaznik
*wskaznik =20;
cout<<"Nowa wartosc zmiennej liczba (po zmianie przez wskaznik): " <<liczba<<endl;
	
	
	
	
	
	
	
	
}