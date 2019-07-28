#include <fstream>
#include <iostream>
using namespace std;

int main ()
{ifstream infile; 
char data1[100];
int kor1;
char data2[100];
int kor2;
char data3[100];
int kor3;
char data4[100];
int kor4;
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data1, kor1, data2, kor2, data3, kor3, data4, kor4; 

   // write the data at the screen.
   cout << data1 << kor1 << endl << data2 << kor2 << endl << data3 << kor3 << endl << data4 << kor4<< endl; 

   // close the opened file.
   infile.close();

   return 0;
}