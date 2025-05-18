#include <bits/stdc++.h>
#include "queue.hpp"

using namespace std;

int main()
{
    Queued::Node* queue = new Queued::Node();
    queue->next = nullptr;
    queue->data = -1;
    for (int i = 0; i < 10; i++)
        queue = Queued::add(queue, i);

    cout << "check 1" << '\n';

    while (queue != nullptr)
    {
        cout << queue->data << '\n';
    }
}