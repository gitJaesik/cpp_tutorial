#include <iostream>

using namespace std;

int main ()
{
   long int  var = 20;   // actual variable declaration.
   long int  *ip;        // pointer variable 

   ip = &var;       // store address of var in pointer variable

   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip+1 << endl;	// It become + 4 ( When it was int // if it was long int, it plus 4 automatically )

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   cout << "Value of *ip variable: ";
   cout << *ip+1 << endl;

   cout << "Value of *ip variable: ";
   cout << *(ip+1) << endl; 	// It's null.. why?

   return 0;
}
