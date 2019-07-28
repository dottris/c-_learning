#include<iostream>
using namespace std;
double atlag(double, double);
int main() {
    double a, b;
    cout << "Irja be a ket atlagolni kivant szamot:\n";
    cin >> a >> b;
    cout <<atlag(a,b);
    return 0;
}
double atlag(double a,double b)
{
double m;
 m=double(a+b)/double(2);
 return m;
 }