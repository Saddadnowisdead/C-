/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
 
 void prime(int a[], int b){
    for (int i=0; i <b ; i++)
    {
        for (int j=2; j <= a[i]/2; j++)
        {
            if (a[i]%j == 0 && a[i] != j)
            {
                a[i] = 0;
                break;
            }
        }
        if (a[i] != 0)
        {
            cout << a[i] << " ";
        }
}
}
 int main(int argc, char * argv [])
{
    int d = 8;
    int *g = new int[d];
    
    for(int i = 0; i<d; i++){
        g[i] = rand()%20;
    }
    for(int i = 0; i<d; i++){
        cout<<g[i]<<" ";
    }
    cout<<endl;
    
    prime(g, d);
}



