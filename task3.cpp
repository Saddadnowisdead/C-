#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float k = 0;
    float srednee = 0;
 float **mas = new float* [2]; 
    for (int i = 0; i < 2; i++){
        mas[i] = new float [5]; 
    }
    
    for(int i = 0; i<2; i++){
        for(int j = 0; j<5; j++){
            k =  (rand()%201-100);
            mas[i][j] = k/100;
            srednee+=mas[i][j];
        }
    }
    srednee = srednee/10;

 for (int i = 0; i < 2; i++){
     for(int j = 0; j<5; j++){
         cout<<mas[i][j]<<" ";
     }
     cout<<endl;
 }
 
 for (int i = 0; i < 2; i++){
     for(int j = 0; j<5; j++){
         if(mas[i][j]<(-0.5)){
             mas[i][j] = srednee;
         }
     }
 }
 
 cout<<endl;
 cout<<"Середнє арифметичне усіх значень масиву: "<<srednee<<endl;
 
 for (int i = 0; i < 2; i++){
     for(int j = 0; j<5; j++){
         cout<<mas[i][j]<<" ";
     }
     cout<<endl;
 }
 for(int i = 0; i<2;i++){
     delete []mas[i];
 }
 
}
