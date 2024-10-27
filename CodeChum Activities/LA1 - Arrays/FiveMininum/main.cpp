#include <iostream>
using namespace std;

int main(){
    int arr[5];


    cout << "Enter 5 integers:" << endl;

    for(int i=0;i<5;i++){
        cin >> arr[i];
    }

    int least = arr[0];
    for(int i=0;i<5;i++){


        if(least>arr[i]){
            least = arr[i];
        }

    }

    /*if(ifNegative){
        cout << "Negative number found" << endl;
    }
    else{

    }*/

    cout<< "The minimum value is: ";
    cout<< least;

    return 0;
}