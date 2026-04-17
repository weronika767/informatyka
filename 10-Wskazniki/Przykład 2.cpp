#include <iostream>
using namespace std;

//Funkcja modyfukujaca wartosc zmiennej za pomoca wskaznika
 void ZmienWartosc(int *wskaznik) {
	*wskaznik= *wskaznik *2; // Podwojenie wartosci wskazywanej przez wskaznik
}

int main() {
int liczba=15;     //Deklaracja zmiennej
cout <<"Wartosc przed wywolaniem fukcji: "	<<liczba<<endl;

ZmienWartosc(&liczba):   //Przekazanie adresu zmiennej do funkcji
cout<<"Wartosc po wywolaniu funkcji:" <<liczba <<endl;

return 0;
}
	
	
	
	
	
	
