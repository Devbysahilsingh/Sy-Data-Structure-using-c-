// wap to create an array of all odd numbers between 1 to 50;
#include <iostream>
using namespace std;
int main(){
    int arr[25];
    int index=0;
    for (int i=0;i<=50;i++){
        if(i%2!=0){
            arr[index++]=i ;

        }
    }
    for (int j=0;j<25;j++){
        cout<<arr[j]<<" ";

    }
    return 0;
}