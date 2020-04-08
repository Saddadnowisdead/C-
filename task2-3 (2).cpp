/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <time.h>
using namespace std;
void view(const int*, int);
void createVect(int*&, int); 
void view(const int* X, int size) {
 cout << "Масив " << endl;
 for (int i=0; i<size; i++) {
 cout << X[i] << '\t';
 }
 cout << endl << endl;
}

void createVect(int*&X, int size) {
 srand((time(NULL)));
 for(int i=0; i<size; i++)
 X[i] = rand()%20-10;
}
//Варіант 26+8(10) (заміняє парні нулями, а непарні залишає без змін)
int* selNum(int* x, int size){
    for(int i = 0; i<size; i++){
        if(x[i]%2!=0){
           continue;
        }
        else{
            x[i] = 0;
        }
    }
    return x;
}

int main() {
 int n;
 int *pA, *pB, *pC;
 cout << "Задайте кiлькiсть елементiв ->";
 cin >> n;
 pA = new int[n];
 createVect(pA, n); 
 view(pA, n); 
 cout<<endl;
 pA = selNum(pA, n);
 view(pA, n); 
 cout << "Задайте кiлькiсть елементiв ->";
 cin >> n;
 pB = new int[n];
 createVect(pB, n);
 view(pB, n);
 pB = selNum(pB, n);
 view(pB, n);
 cout<<endl;
 cout << "Задайте кiлькiсть елементiв ->";
 cin >> n;
 pC = new int[n];
 createVect(pC, n);
 view(pC, n);
 cout<<endl;
 pC = selNum(pC, n);
 view(pC, n);
 delete []pA; 
 delete []pB;
 delete []pC;
 return 0;
}

