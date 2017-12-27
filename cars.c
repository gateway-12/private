#include <cstdlib>
#include <iostream>
#include <string>
int price;

using namespace std; 
    

   void carchoice (char choice, int price)
{
      using namespace std; 
cout<< "\t\t\t\t" << " CAR RENTAL " << "\n" <<endl;
cout<< "\n\n\n" << "There are 4 cars to choose from" << "\n" << endl;
cout<< "A.. Vauxhall Meriva at 30.00/day" <<  "\n" << endl;
cout<< "B.. Vauxhall Astra at 40.00/day" << "\n" << endl;
cout<< "C.. Vauxhall Vectra at 50.00/day" << "\n" << endl;
cout<< "D.. Vauxhall Zafira at 60.00/day" << "\n" << endl;

  
   switch (choice)
{
  case 'A':
    price = 30;
    break;
  case 'B':
    price = 40;
    break;
  case 'C':
    price = 50;
    break;
  case 'D':
    price = 60;
    break;
} 
}

int main ()
{ 
  char choice;
  int days;
  int price;
  
cout << " Which car would you like to rent (A,B, C or D)" << "\n" << endl;
cin >> choice;
cout << " How many days would you like to hire the car for" << "\n" << endl;
cin >> days;
  
  
cout<< " you have chosen car.." << choice << "\n" << "and the price per day is.." << "\n" << price << endl;
cout << " This will cost.. " << endl;

system ("PAUSE");
return 0;
}
