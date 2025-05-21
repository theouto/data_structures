#include <bits/stdc++.h>
#include "queue.hpp"

using namespace std;

int main()
{
    
    Queued* queued = new Queued();
    
    for (int i = 0; i < 10000000; i++)
        queued->add(i);

    auto start = chrono::system_clock::now();
    while(!(queued->isEmpty()))
    {
        queued->front();
        queued->sized()-1;
        queued->pop();
    }
    auto end = chrono::system_clock::now();
    chrono::duration<float, milli> duration = end - start;
    cout << "my queue: " << duration.count() << ".ms" << '\n';

    queue<int> queueue;
    for (int i = 0; i < 10000000; i++)
        queueue.push(i);

    start = chrono::system_clock::now();
    while(!queueue.empty())
    {
        queueue.front();
        queueue.size();
        queueue.pop();
    }
    end = chrono::system_clock::now();
    duration = end - start;
    cout << "std queue: " << duration.count() << ".ms" << '\n';

}