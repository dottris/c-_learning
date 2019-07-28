#include <iostream>
#include <string>
#include<string.h>
using namespace std;
char kartya1[20], kartya2[20];
int main () {
cout << "Melyik ket kartyat huzta?\n (also, felso, kiraly, hetes, nyolcas, kilences, tizes, asz)\n";

cin >> kartya1;
cin>>kartya2;
int k1, k2;
int n[8]=  { 2, 3, 4, 7, 8, 9, 10, 11};
string k[8]= {"also", "felso", "kiraly", "hetes", "nyolcas", "kilences", "tizes", "asz"};

    for (int i=0; i<=7; i++)
    {
        if (kartya1==k[i])
            {k1=n[i];}
      if (kartya2==k[i])
      {
        k2=n[i];
      }
      
    }
    if (k1==0 or k2==0)
    {
      cout<<"Hiba: legalabb az egyik kartya el lett gepelve.";
    }
    else{
    
    cout << "A ket kartya erteke: " << k1+k2<<" pont.";}
  
    return 0;
}