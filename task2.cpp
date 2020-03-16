#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 int *arr = new int[10];
 for (int i = 0; i < 10; i++){
 arr[i] = rand() % 10 + 1;
 }
 for (int i = 0; i < 10; i++){
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 
    for(int i = 1; i < 10; ++i){
		for(int r = 0; r < 9; r++){
			if(arr[r] < arr[r+1]){
				int temp = arr[r];
				arr[r] = arr[r+1];
				arr[r+1] = temp;
			}
		}
	}
    
    for (int i = 0; i < 10; i++){
 cout<<arr[i]<<" ";
 }
    delete []arr;
}
