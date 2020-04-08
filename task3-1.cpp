/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void view(int* X, int size) {
 for (int i=0; i<size; i++) {
 cout << X[i] << " ";
 }
 cout << endl << endl;
}
void createFirst(int size){
    int *a = new int[size];
    for(int i = 0; i<size; i++){
        a[i] = rand()%29+1;
    }
    view(a, size);
}
void createSecond(int size){
    int *b = new int[size];
    for(int i = 0; i<size; i++){
       b[i] = rand()%11+1;
    }
    view(b, size);
}
void createThird(int size){
    int *c = new int[size];
    for(int i = 0; i<size; i++){
        c[i] = rand()%4+1999;
    }
    view(c, size);
}


int main()
{
    int size1 = 10;
    int size2 = 10;
    int size3 = 10;
    createFirst(size1);
    createSecond(size2);
    createThird(size3);
}
