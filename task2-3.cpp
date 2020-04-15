/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void frame(int a, int b, int c){
    for(int i = 0; i<b; i++){
        for(int j = 0; j<a; j++){
            cout<<"*";
            for(int z = 0; z<c; z++){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    frame(2, 3, 3);
}
