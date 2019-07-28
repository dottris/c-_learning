#include <iostream>
#include <string>
#include<string.h>
using namespace std;
char kartya[20];
int main () {
cout << "Melyik kartyat keresi?\n (also, felso, kiraly, hetes, nyolcas, kilences, tizes, asz)\n";

cin >> kartya;
int n[8]=  { 2, 3, 4, 7, 8, 9, 10, 11};
string k[8]= {"also", "felso", "kiraly", "hetes", "nyolcas", "kilences", "tizes", "asz"};

    for (int i=0; i<=7; i++)
    {
        if (kartya==k[i])
            {
            cout<< "A " << k[i] << " erteke "<<n[i]<<" pont.";
            }
    }
    return 0;
}