#include <bits/stdc++.h>
#include "maps.hpp"
using namespace std;

int main()
{
    
    OwnMap::OwnMap map = new OwnMap::OwnMap();

    cout << "check 1" << '\n';

    map.addMap("test", 3);
    map.addMap("man", 7);
    map.addMap("august", 11);
    map.addMap("whytest", 2);

    cout << "check 2" << '\n';

    cout << map.lookUp(map, "test") << '\n';
    cout << map.lookUp(map, "whytest") << '\n';
    cout << map.lookUp(map, "august") << '\n';
}