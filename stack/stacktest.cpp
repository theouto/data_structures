#include <bits/stdc++.h>
#include "stack.hpp"

int main()
{
    OwnStack::Node* nod = nullptr;

    for (int i = 0; i < 10; i++)
    {
        OwnStack::addStack(&nod, i);   
    }

    while (nod != nullptr)
        std::cout << OwnStack::pop(&nod) << '\n';
}