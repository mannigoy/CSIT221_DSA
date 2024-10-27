#include <iostream>
using namespace std;


int getNum();
void inputArr(int arr[], int size);


int main(){

    int num,x,y;
    num = getNum();


    cout << "Enter " <<num<<" elements: ";
    int arr[num];

    inputArr(arr,num);

    cout << "Values of x and y: ";
    cin>>x>>y;

    cout << "Numbers in between = ";
    bool hasBetween = false;
    for(int i=0;i<num;i++){
        if(arr[i]>=x && arr[i]<=y){
            cout << arr[i] << " ";
            hasBetween=true;
        }

    }
    if(!hasBetween){
        cout<<"(none) ";
    }






    return 0;
}

int getNum(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    return n;
}

void inputArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
}