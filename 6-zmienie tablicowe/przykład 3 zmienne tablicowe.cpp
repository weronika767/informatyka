  #include <iostream>
  using namespace std;
  int main (){
  
 
 
  // Deklaracja tablicy o rozmiarze 5
 int tablica[5];
 
 //Pobieranie wartosci od użytkownika
 cout <<"Podaj 5 liczb calkowitych:\n";
 for (int i=0; i < 5; i++) {
 	cout <<"Podaj liczbe nr"<<i+1 << ":";
 	cin >>tablica[i];
 	
 	
 }
 //Ustawienie zmieniej maksymalnej wartosci  na pierwszy element tablicy
 int max =tablica[0];
 
 //Przegladanie tablicy w poszukiwaniu najwiekszej wartosci
 for (int i=1; i < 5; i++) {
 	if (tablica[i] > max){
 		max=tablica[i];
	 }
 	
 	
 }
  //Wyswietlenie najwiekszej wartosci
  cout<< "\nNajwieksza wartosc w tablicy to: " <<max <<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}