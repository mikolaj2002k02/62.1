#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    ifstream in("liczby1.txt");
    ofstream out("wynik.txt");
    int tablica[1000];
int MIN;
int MAX;
    for (int i = 0; i < 1000; i++) in >> tablica[i];
	int liczby;
 for( int i = 0; i <1000; i++)
    {
    if(tablica[i] < MIN) MIN = tablica[i];
    if(tablica[i] > MAX ) MAX = tablica[i];
}
  out << "Najmniejsza: " << MIN << endl;
  out << "Najwieksza: " << MAX << endl;
return 0;
}
