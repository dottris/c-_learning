#include <iostream>
using namespace std;
int main () {
    int t[10]={5, 8, 9, 1, 2, 3, 0, 7, 6, 4};
    for ( int j = 0; j < 10; j++)
    
    for (int i = 0; i < 10; i++)
    {
    if (t[i]>t[i+1])
    {
        int temp;
        temp=t[i];
        t[i]=t[i+1];
        t[i+1]=temp;
    }
    
    }
    for (int k = 0; k < 10; k++)
    {
    cout <<t[k];
    }
    }
