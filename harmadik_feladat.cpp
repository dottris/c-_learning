#include <iostream>
#include <string>
#include<string.h>
using namespace std;
char kartya1[20];
int k1, k2=10;
int main () {
cout << "Melyik napon kezdodott a tabor?\n (hetfo, kedd, szerda, csutortok, pentek, szombat, vasarnap)\n";

cin >> kartya1;
cout<<"Hany napos a tabor?\n";
cin>>k1;
int n[7]=  { 0, 1, 2, 3, 4, 5, 6};
string k[7]= {"hetfo", "kedd", "szerda", "csutortok", "pentek", "szombat", "vasarnap"};

    for (int i=0; i<7; i++)
    {
        if (kartya1==k[i])
            {k2=n[i];
            cout<<"A tabor "<<k[(k1+k2-1)%7] << "-i napon fejezodott be.";}
      }
      
    if (k2==10)
    {
      cout<<"Hiba: a alighanem elgepelte a napot.";
    }
     
    return 0;
}