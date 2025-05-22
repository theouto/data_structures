#include <bits/stdc++.h>
#include "stack.hpp"

using namespace std;

int main()
{
    
    auto start = chrono::system_clock::now();
    
    OwnStack::Node* nod = nullptr;

    for (int i = 0; i < 1000000; i++)
    {
        OwnStack::addStack(&nod, i);   
    }

    while (nod != nullptr)
        OwnStack::pop(&nod);

    auto end = chrono::system_clock::now();
    chrono::duration<float, milli> duration = end - start;
    cout << "my stack: " << duration.count() << ".ms" << '\n';

    start = chrono::system_clock::now();
    
    std::stack<int> stacked;

    for (int i = 0; i < 1000000; i++)
        stacked.push(i);
    
    while(!stacked.empty())
    {
        stacked.top();
        stacked.pop();
    }
    end = chrono::system_clock::now();
    duration = end - start;
    cout << "std stack: " << duration.count() << ".ms" << '\n';
}