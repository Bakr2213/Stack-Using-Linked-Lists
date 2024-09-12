#include <iostream>
#include "Node.h"
#include "Stack.h"
using namespace std;

int main()
{
    int item;
    Stack s;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter item to push : \n";
        cin >> item;
        s.push(item);
        s.display();
    }
   
    cout << s.pop() << " was deleted from stack \n";
    s.display();
    

    cout << "enter item to search for \n";
    cin >> item;
    if (s.isfound(item))
        cout << "item is found \n";
    else 
        cout << "item not found \n";

    cout <<"the stack have : " << s.count() << " item \n";
}

