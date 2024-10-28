#include <iostream>
using namespace std;


int getNum();
void inputArr(int arr[], int size);


int main(){

    int num,x,y;
    num = getNum();


    cout << "Enter the elements of the array separated by space: ";
    int arr[num];

    inputArr(arr,num);

    int major = num/2 ;
    // cout << major;
    int occurence=1;
    int max_occurence=0;
    int max_val;




    for(int i=0;i<num;i++){
        for(int j=i+1;j<num-1;j++){
            if(arr[j]==arr[i]){
                occurence++;
            }
        }
        if(occurence>max_occurence){
            max_occurence=occurence;
            max_val=arr[i];

        }




    }
    if(occurence>major){
        cout << "The majority element is ";
        cout << max_val;
    }
    else{
        cout << "No majority element found";
    }








    return 0;
}

int getNum(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    return n;
}

void inputArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
}