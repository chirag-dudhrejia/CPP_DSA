#include <iostream>
#include "header.h"
using namespace std;

template <class T>
class Stack
{
    int topp;
    T* stack;
public:
    Stack(int size = 50): topp(-1), stack(new T[size]) {}
    void push(T element);
    void pop();
    T top();
    bool empty();
    int size();
};

template <class T>
void Stack<T>::push(T element)
{
    stack[++topp] = element;
}

template <class T>
void Stack<T>::pop()
{
    topp--;
}

template <class T>
T Stack<T>::top()
{
    return stack[topp];
}

template <class T>
bool Stack<T>::empty()
{
    return topp == -1;
}

template <class T>
int Stack<T>::size()
{
    return topp+1;
}

// int main()
// {
//     Stack<string> s1;
//     cout<<s1.empty()<<"\n";
//     s1.push("Dudhrejia");
//     s1.push("Chirag ");
//     s1.push("! ");
//     s1.push("Hello");
//     cout<<s1.top()<<"\n";
//     cout<<s1.size()<<"\n";
//     cout<<s1.top();
//     s1.pop();
//     cout<<s1.top();
//     s1.pop();
//     cout<<s1.top();
//     s1.pop();
//     cout<<s1.top()<<"\n";
//     s1.pop();
//     cout<<s1.size()<<"\n";
//     return 0;
// }