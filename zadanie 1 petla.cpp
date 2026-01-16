#include <iostream>
using  namespace std;
int main(){
for(int i=0; i< 5; i++)
{
	//wpisz liczby
	cout<<"i wynosi:" <<endl;
}
	
for(int i=0; i<=8; i+= 2)
{
	//wpisz liczby parzyste
	cout<<"liczba parzysta:"<<i<<endl;
	}	
	 for (int i=5; i > 0; i--)
	 {
	 	// wpisz liczby w odwrotnej kolejnoœci
	 	cout <<"i wynosi:" <<i<<endl;
	 }
	 for (int i=0; i < 3; i++) {
	 	for(int j=0; j<3; j++){
		 // Cia³o wewnêtrznej pêtli
		 cout << "i ="<< i << ", j=" <<j<< endl;}
		 
	 }
	 int wysokosc,szerokosc;
	 
	 // Poproœ u¿ytkownika o podanie wymiarów prostok¹ta
	 cout<<"Podaj wysokosc prostokata:";
	 cin>>wysokosc;
	 cout<<"Podaj szerokosc prostokata:";
	 cin>> szerokosc;
	 
	 // Zewnêtrzna petla iteruje przez wiersze
	 for (int j =0; j< szerokosc; j++){
	 	// Wypisz znak *
	 	cout<<"* ";
	 }
	   //Przejd¿ do nowej linii po ka¿dym wierszu
	   cout <<endl;
	   int N;
	   
	   //Popros uzytkownika o padanie liczby N
	   cout<<"Podaj liczbe N:";
	   cin>>N;
	   
	   //Zewnetrzna petla iteruje przez liczby od 1 do N
	   for (int i=1; i <=N; i++) {
	   	//Wewnetrzna petla iteruje przez liczby od 1 do N
	   	for (int j=1; j<=N; j++){
	   		//Wypisz iloczyn i*j
	   		cout << i*j <<"\t"; // \t to znak tabulacji, aby wyrownac kolumby
	   	}
	   	//Przejdz do nnowej linii po kazdym wierszu
	   	cout <<endl;
	   }
		   }
	   
	
	
	
	return 0;}


