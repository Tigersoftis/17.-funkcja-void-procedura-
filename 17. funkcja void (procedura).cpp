#include <cstdlib>
#include <iostream>
using namespace std;
 
void kopiowanie(char znak) // Funkcja typu void - odpowiednik procedury, nie zwraca danych ktore mozna poddac obrobce
{
  for(int i=0; i<30; i++)
    cout<<znak << " ";
}
 
int main()
{
 
  char znak;
 
  cout<<"Podaj litere lub liczbe, ktora chcesz powielic  30 razy: ";
  cin>>znak;
 
  cout << endl << endl;
 
  kopiowanie(znak);   //wywo�anie funkcji kopiowanie(char znak)
  
  cout << endl << endl;
 
  system("pause");
  return 0;
}

/*
funcje tego typu wywo�ujemy wypisuj�c tylko jej nazw� z ewentualnymi argumentami 
gdy tych argument�w nie ma, podajemy nazw� wywo�ywanej funkcji z pustym nawiasem np. powiel().
*/
