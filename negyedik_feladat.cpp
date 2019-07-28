#include <iostream>
#include <string>
#include<string.h>
using namespace std;
char honap1[20];
int main () {
cout << "Melyik honapra kivancsi?\n (januar, februar, marcius, aprilis, majus, junius, julius, augusztus, szeptember, oktober, november, december)\n";

cin >> honap1;
int l=10;
int n[12]=  { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
string k[12]= {"januar", "februar", "marcius", "aprilis", "majus", "junius", "julius", "augusztus", "szeptember", "oktober", "november", "december"};

    for (int i=0; i<=7; i++)
    {
        if (honap1==k[i])
            {
      cout<<"Ez a(z) "<<n[i]<<"-ik honap.";
      l=0;
    }}
    if (l=10)
    {
       cout<<"A keresett honap nem talalhato, kerem, gepelje be ujra.";
           }
    
  
    return 0;
}