/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void view(int* X) {
 for (int i=0; i<3; i++) {
 cout << X[i] << ".";
 }
 cout << endl << endl;
}
int* randomDateOfBirth(){
    int *a = new int[3];
    a[0]=rand()%29+1;
    a[1] = rand()%12+1;
    a[2] = rand()%45+1975;
    return a;
}

int main()
{
    int *random = randomDateOfBirth();
    int *birth = new int[3];
    cout<<"Enter day, month and year: " << endl;
    for(int i = 0; i<3; i++){
        cin >> birth[i];
    }
    cout<<endl;
    view(random);
    view(birth);
    if(random[0]==birth[0]&random[1]==birth[1]&random[2]==birth[2]){
        cout << "You're lucky!";
    }
    else{
        cout<<"Don't match";
    }
    
}
