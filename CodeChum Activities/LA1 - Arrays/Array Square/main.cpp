#include <iostream>
using namespace std;


void inputArr(int arr[]);


int main(){

    cout << "Enter 5 integers: "<<endl;
    int arr[5];

    inputArr(arr);


    cout<<"Square of all elements:"<<endl;

    for(int i=0;i<5;i++){
        int temp = arr[i]*arr[i];
        cout<< temp << " ";
    }

    return 0;
}


void inputArr(int arr[]){
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
}