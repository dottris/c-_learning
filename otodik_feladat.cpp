#include <iostream>
using namespace std;
char honap1[20];
int main () {
cout << "Melyik honapra kivancsi?\n (januar, februar, marcius, aprilis, majus, junius, julius, augusztus, szeptember, oktober, november, december)\n";

cin >> honap1;
int l=10;
string k[12]= {"januar", "februar", "marcius", "aprilis", "majus", "junius", "julius", "augusztus", "szeptember", "oktober", "november", "december"};

    for (int i=0; i<=11; i++)
    {
        if (honap1==k[i] and (0<i and i<4))
            {
              cout<<"A keresett honap tavasszal van.";
              l=0;
            }
else
{
  if (honap1==k[i] and 3<i and i<7)
  {
  cout<<"A keresett honap nyaron van.";
  l=0;
  }else
  {
    if (honap1==k[i] and 6<i and i<10)
    {
    cout<<"A keresett honap osszel van.";
    l=0;
    }
    else
    {if (honap1==k[i] and (i==0 or i>9))
    {
    
    
      cout<<"A keresett honap telen van.";
      l=0;}
    }
    
  }
  
  
}}

    if (l==10)
    {
       cout<<"A keresett honap nem talalhato, kerem, gepelje be ujra.";
           }
    
  
    return 0;
}