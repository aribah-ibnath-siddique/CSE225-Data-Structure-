#include <iostream>
#include "stacktype.cpp"
using namespace std;

template <class T>
void replaceTarget(StackType<T> &myStack, T target, T newVal)
{
    StackType<T> tempStack;
    T x;


    while(!myStack.IsEmpty())
    {
        x = myStack.Top();
        if(x == target)
        {
            x = newVal;
        }
        tempStack.Push(x);
        myStack.Pop();
    }

    while(!tempStack.IsEmpty())
    {
        myStack.Push(tempStack.Top());
        tempStack.Pop();
    }
}

int main()
{
     StackType<char> myStack;
     int n;
     cout << "Enter value of n: ";
     cin >> n;

     char x;

     for(int i = 0;i<n;i++)
     {
         cout<< "Enter element "<< i+1 << ": ";
         cin >> x;
         myStack.Push(x);
     }

     char target;
     cout << "Enter target value: ";
     cin >> target;

     char newVal;
     cout << "Enter new value: ";
     cin >> newVal;

     replaceTarget(myStack, target, newVal);

     StackType<char> tempStack;

     cout << "Elements of the stack: " << endl;
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
    return 0;
}
