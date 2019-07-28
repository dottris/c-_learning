#include <iostream>
#include <string>
#include<string.h>
using namespace std;
int k;
int main () {
cout << "Melyik evre kivancsi?\n";

cin >> k;
 if (k>=1984 and k<=2043 and ((k-1983)%10==1 or (k-1983)%10==2))
     {
      cout<<"Ez az ev a zold evek koze tartozik.";
          }
if (k>=1984 and k<=2043 and ((k-1983)%10==3 or (k-1983)%10==4))
     {
      cout<<"Ez az ev a piros evek koze tartozik.";
          }
if (k>=1984 and k<=2043 and ((k-1983)%10==5 or (k-1983)%10==6))
     {
      cout<<"Ez az ev a sarga evek koze tartozik.";
          }
 if (k>=1984 and k<=2043 and ((k-1983)%10==7 or (k-1983)%10==8))
     {
      cout<<"Ez az ev a feher evek koze tartozik.";
          } 
 if (k>=1984 and k<=2043 and ((k-1983)%10==0 or (k-1983)%10==9))
     {
      cout<<"Ez az ev a fekete evek koze tartozik.";
          } 
if (!(k>=1984 and k<=2043))
{cout<< "A keresett evnek 1984 es 2043 koze kell esnie!";}                
return 0;}