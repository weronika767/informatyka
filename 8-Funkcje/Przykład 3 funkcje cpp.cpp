#include <iostream>
using namespace std;

//Definicja funkcji WyswietlTablice
void WyswietlTablice(int tablica[], int rozmiar) {
cout<<"Zawartosc tablicy: ";
for (int i=0; i < rozmiar; i++)	{
	cout<< tablica[i] <<" ";
}
cout <<endl;
}

int main() {
int liczby[] ={ 1,2,3,4,5};

//Obliczenie liczby elementów w tablicy liczby
int rozmiar=sizeof(liczby) / sizeof(liczby[0]);// sizeof(liczby) zwraca rozmiar całej tablicy w bajtach, 
  //a sizeof(liczby[0]) zwraca rozmiar jeddnego elementu.
  //Dzielenie tych wartosci daje liczbę elementów w tablicy.
  
  //Wywolanie funkcji WyswietlTablice z argumentami liczby i rozm,iar
  WyswietlTablice(liczby,rozmiar);
  
  return 0;
}






































	
	
	
	

