#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   struct Books {
   char  data[100];
   int   kor;
};
struct Books Book1, Book2, Book3, Book4, Book5;        // Declare Book1 of type Book
   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(Book1.data, 100);
   cin.getline(Book2.data, 100);
   cin.getline(Book3.data, 100);
   cin.getline(Book4.data, 100);
   cin.getline(Book5.data, 100);

   // write inputted data into the file.

   cout << "Enter your age: "; 
   cin >> Book1.kor;
   cin >> Book2.kor;
   cin >> Book3.kor;
   cin >> Book4.kor;
   cin >> Book5.kor;
   cin.ignore();


   outfile << Book1.data << endl;
   outfile << Book1.kor << endl;
   outfile << Book2.data << endl;
   outfile << Book2.kor << endl;
   outfile << Book3.data << endl;
   outfile << Book3.kor << endl;
   outfile << Book4.data <<endl;
   outfile << Book4.kor << endl;
   outfile << Book5.data <<endl;
   
   // again write inputted data into the file.
   
      
         
  outfile << Book5.kor << endl;

   // close the opened file.
   outfile.close();

    return 0;
}