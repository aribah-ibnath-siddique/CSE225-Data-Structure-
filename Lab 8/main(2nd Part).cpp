#include <iostream>
#include "StackType.cpp"
#include <string>
using namespace std;

bool isBalanced(string expression)
{
    StackType<char> myStack;

    for(int i = 0;i<expression.length();i++)
    {
        if(expression[i]=='(')
            myStack.Push(expression[i]);
           else if(expression[i]==')')
           {
               if(myStack.IsEmpty() || myStack.Top() != '(')
               {
                   return false;
               }
                  myStack.Pop();
           }
                               }
          return myStack.IsEmpty();
}


int main()
{
    string expression;

    for(int i = 0;i < 4;i++)
    {
        cout << "Enter expression: ";
        cin >> expression;

    if(isBalanced(expression)) cout << "Balanced!" << endl;
    else cout << "Not balanced!" << endl;
    }


    return 0;
}
