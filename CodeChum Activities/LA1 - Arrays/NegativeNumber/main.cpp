#include <iostream>
using namespace std;

int main(){
    int arr[8];

    bool ifNegative = false;

    cout << "Enter 8 integers:" << endl;

    for(int i=0;i<8;i++){
        cin >> arr[i];
    }

    for(int i=0;i<8;i++){
        if(arr[i] < 0){
            ifNegative = true;
            break;
        }
    }

    if(ifNegative){
        cout << "Negative number found" << endl;
    }
    else{
        cout<< "No negative numbers" << endl;
    }

    return 0;
}