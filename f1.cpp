#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Teglalap kerulete es terulete" << endl;
    float a,b,k,t;

    //Beolvasas
    cout<<"Teglalap \"a\" oldala:"; cin>>a;
    if (a<=0){
        cout<<"Csak pozitiv lehet!"<<endl;
        exit(1);
    }
    cout<<"Teglalap \"b\" oldala:"; cin>>b;
    if (b<=0){
        cout<<"Csak pozitiv lehet!"<<endl;
        exit(1);
    }

   //Feldolgozas
    k=2*a+2*b;
    t=a*b;

    //Kiiras
    cout<<"A teglalap kerulete:"<<k<<endl;
    cout<<"A teglalap terulete:"<<t<<endl;

    return 0;
}
