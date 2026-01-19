// wap a program to create an array containing square of elements of the given array
#include <iostream>
using namespace std;
int main(){
    int arr1[5]={5,7,3,11,15};
    int arr2[5];
    for(int i=0;i<5;i++){
        arr2[i]=arr1[i]*arr1[i];
    }
    for (int i=0;i<5;i++){
        cout<<arr2[i]<<" "<<endl;
    }

    return 0;

}