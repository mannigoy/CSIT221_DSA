#include <iostream>
#include "linkedlist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    DoublyLL* list = new DoublyLL();
    //	DoublyLL* list = (DoublyLL*) calloc(1, sizeof(DoublyLL));
    char op;
    int num, pos;
    do {
        cout << "Op: ";
        cin >> op;
        switch (op) {
            case 'f':
                cin >> num;
            list->addFirst(num);
            break;
            case 'l':
                cin >> num;
            list->addLast(num);
            break;
            case 'F':
                list->removeFirst();
            break;
            case 'L':
                list->removeLast();
            break;
            case 'p':
                list->print();
            break;
            case 'g':
                cin >> num;
            cout << "Pos " << num << " is " << list->get(num) << endl;
            break;
            case 'x':
                cout << "Exiting";
            break;
        }
    } while (op != 'x');
    return 0;
}