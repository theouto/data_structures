#include <bits/stdc++.h>
#include "queue.hpp"

using namespace std;

int main()
{
    Queued* queue = new Queued();
    
    for (int i = 0; i < 10; i++)
        queue->add(i);

    cout << "check 1" << '\n';
    while(!(queue->isEmpty()))
    {
        cout << queue->front() << " " << queue->sized()-1 << '\n';
        queue->pop();
    }
}