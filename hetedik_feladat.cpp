#include <iostream>
#include <string>
using namespace std;
int n;
int main () {
cout << "Melyik szamra kivancsi?\n";

cin >> n;
if (!(n>0 and n<100))
{
  cout <<"A keresett szamnak 1 es 99 koze kell esnie!";
  exit(EXIT_FAILURE);
}

int l=10;
string k[10]= {"egy", "ketto", "harom", "negy", "ot", "hat", "het", "nyolc",
 "kilenc", "tiz"}; 
 string f[10]{"husz","tizen", "huszon", "harminc","negyven", "otven", "hatvan", "hetven", "nyolcvan", "kilencven"};

     if (n<=10)
            {
      cout<<"A keresett szam a(z) "<<k[n-1]<<".";
    }
    if (n==20)
    {cout<<"A keresett szam a " <<f[0]<<".";
           }
    if (n>10 and n%10!=0)
    {
      cout << "A keresett szam a(z) "<<f[n/10]<<k[(n-1)%10]<<".";
    }
    if (n%10==0 and n>20)
    {
       cout << "A keresett szam a(z) "<<f[n/10]<<".";
    }
    
  
    return 0;
}