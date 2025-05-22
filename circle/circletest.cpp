#include <bits/stdc++.h>
#include <thread>
#include "circlelist.hpp"
using namespace std;

int main()
{
    OwnCircle* noder = new OwnCircle(1, 10);
    
    for (int i = 2; i < 10; i++)
        noder->addCircle(i);

    int a = 20;
    while(a--)
    {
        cout << noder->front() << '\n';
        noder->next();
        //std::this_thread::sleep_for (std::chrono::seconds(1)); 
    }

    while(noder->sized())
    {
        cout << noder->front() << " ";
        noder->pop();
        cout << noder->sized() << '\n';
    }
        
}