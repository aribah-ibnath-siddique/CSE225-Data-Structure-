#include <iostream>
#include "StackType.cpp"
using namespace std;

int main()
{
    StackType<int> myStack;

    if(myStack.IsEmpty()) cout << "Stack is empty!"<< endl;
    else cout << "Stack is not empty!" << endl;

    myStack.Push(5);
    myStack.Push(7);
    myStack.Push(4);
    myStack.Push(2);

     if(myStack.IsEmpty()) cout << "Stack is empty!"<< endl;
    else cout << "Stack is not empty!" << endl;

     if(myStack.IsFull()) cout << "Stack is full!"<< endl;
    else cout << "Stack is not full!" << endl;

    StackType<int> tempStack;

    while(!myStack.IsEmpty())
    {
        tempStack.Push(myStack.Top());
        myStack.Pop();
    }

    while(!tempStack.IsEmpty())
    {

        cout << tempStack.Top() << " ";
        myStack.Push(tempStack.Top());
        tempStack.Pop();
    }

    cout << endl;

     myStack.Push(3);

      while(!myStack.IsEmpty())
    {
        tempStack.Push(myStack.Top());
        myStack.Pop();
    }

    while(!tempStack.IsEmpty())
    {

        cout << tempStack.Top() << " ";
        myStack.Push(tempStack.Top());
        tempStack.Pop();
    }

    cout << endl;
     if(myStack.IsFull()) cout << "Stack is full!"<< endl;
     else cout << "Stack is not full!" << endl;

     myStack.Pop();
     myStack.Pop();

     cout << myStack.Top() << endl;
    return 0;
}
