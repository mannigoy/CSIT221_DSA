#include<iostream>
#include<string>
#include "arraystack.h"
using namespace std;

// TODO implement this method.
// Use the ArrayStack to perform the stack operations needed.
int is_balanced_parentheses(string str){
    Stack* stack = new ArrayStack(); //
    bool balance;
    for(char ch:  str){

        if(ch=='(' || ch=='{' || ch=='['){
            stack->push(ch);
        }else if( ch==')' || ch=='}' || ch==']'){
            if(stack->isEmpty()){
                return 3;
            }
            else{
                char a=stack->pop();

                if(a=='(' && ch == ')' || a=='{' && ch == '}' || a=='[' && ch == ']'){
                    balance=1;
                }else{
                    balance=0;
                    return 1;
                }

            }

        }



    }
    /*if(!balance){
                   return 1;
               }*/
    if(!stack->isEmpty()){
        return 2;
    }
    return 0;
}
bool isMatch(char a, char b){
    return a=='(' && b == ')' || a=='{' && b == '}' || a=='[' && b == ']';

}


int main(){
    string str;
    cout << "Enter a string with parentheses: ";
    cin >> str;
    int res = is_balanced_parentheses(str);
    switch(res) {
        case 0:
            cout << "The parentheses are balanced!" << endl;
        break;
        case 1:
            cout << "The parentheses are not balanced due to mismatch!" << endl;
        break;
        case 2:
            cout << "The parentheses are not balanced due to missing closing parentheses!" << endl;
        break;
        case 3:
            cout << "The parentheses are not balanced due to missing opening parentheses!" << endl;
        break;
    }
    return 0;
}