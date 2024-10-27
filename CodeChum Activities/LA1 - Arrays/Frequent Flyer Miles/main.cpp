#include <iostream>
using namespace std;


int getNum();
void inputArr(int arr[], int size);


int main(){

    int num,x,y;
    num = getNum();


    cout << "Enter " <<num<<" elements: ";
    int arr[num];
    //    cout<<num;
    inputArr(arr,num);




    cout << "Lucky Winner = ";

    int max_val=0;
    int occurence=0;
    int max_occurence=0;
    bool foundOccurence =false;
    bool flagEven = false;

    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num-2;j++){
            if(arr[j]==arr[i]){
                occurence++;
                foundOccurence =true;
                flagEven =false;
            }
        }

        if(occurence>max_occurence){
            max_occurence=occurence;
            max_val=arr[i];
            flagEven =false;
        }
        if(occurence==max_occurence){
            flagEven=true;
        }



    }


    if(foundOccurence ){
        cout << max_val;
    }


    if(!foundOccurence){
        cout << "(none)";
    }
    if(flagEven){
        cout << "(none)";
    }
    /* if(occurence==max_occurence){
     cout << "(none)";
     }*/




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