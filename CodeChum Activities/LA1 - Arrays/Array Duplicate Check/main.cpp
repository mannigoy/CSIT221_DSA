#include <iostream>
using namespace std;



void inputArr(int arr[]);


int main(){

    cout << "Enter 10 integers: "<<endl;
    int arr[10];

    inputArr(arr);


    bool hasDuplicate = false;

    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(arr[j]==arr[i]){
                hasDuplicate = true;

            }
        }

    }
    if(!hasDuplicate){
        cout << "No duplicates";
    }
    if(hasDuplicate){
        cout <<"Duplicate found";
    }


    return 0;
}

void inputArr(int arr[]){
    for(int i=0; i<10; i++){
        cin >> arr[i];
    }
}