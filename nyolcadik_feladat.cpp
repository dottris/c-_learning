#include <iostream>
#include <string>
using namespace std;
char szam[20];
string szavak[100]{};
bool l=false;
int main () {
cout << "Melyik szamra kivancsi?\n";

cin >> szam;
for (size_t i = 1; i < 100; i++)
{
string k[10]= {"egy", "ketto", "harom", "negy", "ot", "hat", "het", "nyolc",
 "kilenc", "tiz"}; 
 string f[10]{"husz","tizen", "huszon", "harminc","negyven", "otven", "hatvan", "hetven", "nyolcvan", "kilencven"};
 
if (i<=10)
            
      {szavak[i]=k[i-1];}
    if (i==20)
    {szavak[i]=f[0];           }
    if (i>10 and i%10!=0)
    {
      szavak[i]=f[i/10]+k[(i-1)%10];
    }
    if (i%10==0 and i>20)
    {
       szavak[i]=f[i/10];
    }}
    for (int k = 0; k < 100; k++)
    {if (szam==szavak[k])
    {
      cout<<"A keresett szam a: "<<k<<".";
      l=true;}}
if (!l)
{
cout <<"A keresett szam nem talalhato, kérem, gepelje be ujra.";
}

      
  
    return 0;
}