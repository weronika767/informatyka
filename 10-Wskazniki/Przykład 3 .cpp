#include <iostream>
using namespace std;
 

//Funkcja zwiekszajaca wartosci elementow liczby o 1
void ZwiekszElementy(int *tablica, int rozmiar ) {
for (int i=0; i<rozmiar; i++) {

tablica[i] +=1;   //Modyfikacja elementow tablicy
//*(tablica +i) +=1; //Alternatywnie,dostep do elementu za pomoca wskaznika
     }
}

int main() {
int rozmiar;

//Pobranie rozmiaru tablicy od uzytkownika
cout<<"Podaj rozmiar tablicy: ";
cin>>rozmiar;

//Dynamiczna alokacja pamieci dla tablicy
int *liczby =new int[rozmiar];

//Wypelnianie tablicy wartosciami poczatkowymi
cout<<"Podaj" <<rozmiar<<"elementow tablicy:"<<endl;
for (int i=0; i <rozmiar; i++){
	cin>>liczby[i];
}
cout<< "Tablica przed wywolaniem funkcji:" <<endl;
for (int i=0; i <rozmiar; i++) {
	cout <<liczby[i]<<" ";
}	
cout <<endl;

ZwiekszElementy(liczby,rozmiar); //Przekazanie dynamicznej tablicy do funkcji

cout <<"Tablica po wywolaniu funkcji:" <<endl;
for (int i=0; i <rozmiar; i++) {
	cout<<liczby[i] <<" ";
}	
cout<<endl;

//Zwolnienie pamieci
delete[] liczby;

return 0;	
}
	
	
	
	
	
	
	





	

	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
