#include <bits/stdc++.h>
#include "stack.hpp"

using namespace std;

int main()
{
    OwnStack::Node* nod = nullptr;

    for (int i = 0; i < 10000000; i++)
    {
        OwnStack::addStack(&nod, i);   
    }

    auto start = chrono::system_clock::now();

    while (nod != nullptr)
        OwnStack::pop(&nod);

    auto end = chrono::system_clock::now();
    chrono::duration<float, milli> duration = end - start;
    cout << "my stack: " << duration.count() << ".ms" << '\n';
    
    std::stack<int> stacked;

    for (int i = 0; i < 10000000; i++)
        stacked.push(i);
    
    start = chrono::system_clock::now();
    while(!stacked.empty())
    {
        stacked.top();
        stacked.pop();
    }
    end = chrono::system_clock::now();
    duration = end - start;
    cout << "std stack: " << duration.count() << ".ms" << '\n';
}