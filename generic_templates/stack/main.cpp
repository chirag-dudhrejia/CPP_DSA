#include <iostream>
#include "header.h"

int main()
{
    Stack<string> s1;

    s1.push("chirag");
    s1.push("Hello! ");
    cout<<s1.top();
    s1.pop();
    cout<<s1.top();
    s1.pop();
    return 0;
}