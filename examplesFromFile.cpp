/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
//Приклад 1: знайдіть факторіал числа
void faktorial (int numb) 
{
 int rezult = 1; 
 for (int i = 1; i <= numb; i ++) 
 rezult *= i; 
 cout << numb << "! =" << rezult << endl; 
}
//Приклад 2: факторіал іншим способом
int faktorial1 (int numb) 
{
 int rezult = 1; 
 for (int i = 1; i <= numb; i) 
 rezult *= i; 
 return rezult; 
}
//Приклад 3: знайти, чи є чісло паліндромом
bool palindrom5 (int number) {
int balance1, balance2, balance4, balance5; 
balance1 = number% 10; 
number = number / 10; 
balance2 = number% 10;
number = number / 100;
balance4 = number% 10; 
number = number / 10; 
balance5 = number% 10; 
if ((balance1 == balance5) && (balance2 == balance4))
return true; 
else
return false; 
}
 

int main (int argc, char * argv [])
{
 int digit; 
 cout << "Enter number:";
 cin >> digit;
 faktorial (digit); 
  cout << "Enter 5zn-e chislo:"; 
int in_number, out_number; 
cin >> in_number;
out_number = in_number; 
if (palindrom5 (in_number)) 
cout << "Number" << out_number << "- palendrom" << endl;
else
cout << "This is not palendrom" << endl;
}
