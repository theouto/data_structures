#include <bits/stdc++.h>
#include "stack.hpp"
using namespace std;

int main()
{

    OwnCircle::Node* started = new OwnCircle::Node();
    OwnCircle::Node* forever = new OwnCircle::Node();
    started->next = forever;
    started->data = 0;
    forever->next = started;
    forever->data = 0;

    for (int i = 0; i < 10; i++)
    {
        OwnCircle::addCircle(&started, &forever, i);
    }

    while (started != nullptr)
    {
        cout << started->data << '\n';
        started = started->next;
    }
}