#include <bits/stdc++.h>
#include "stack.hpp"
using namespace std;

int main()
{
    
    OwnMap::Map* map = new OwnMap::Map();
    OwnMap::Map* start = new OwnMap::Map();  
    map->identifier = "null";
    map->data = 0;
    map->next = start;
    start->identifier = "null";
    start->data = 0;
    start->next = map;                

    cout << "check 1" << '\n';

    OwnMap::addMap(&map, "test", 3);
    OwnMap::addMap(&map, "man", 7);
    OwnMap::addMap(&map, "august", 11);
    OwnMap::addMap(&map, "whytest", 2);

    cout << "check 2" << '\n';
    
    cout << OwnMap::lookUp(map, "test") << '\n';
    cout << OwnMap::lookUp(map, "whytest") << '\n';
    cout << OwnMap::lookUp(map, "august") << '\n';

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