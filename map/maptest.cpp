#include "maps.hpp"
using namespace std;

int main()
{

    auto start = chrono::system_clock::now();
    
    OwnMap::Mapii* mappi = nullptr;
    //Map* start = new Map();
    
    //mappi->identifier = "null";
    //mappi->data = 0;
    //mappi->next = start;

    //start->identifier = "null";
    //start->data = 0;
    //start->next = map;

    //cout << "check 1" << '\n';

    for (int i = 0; i < 1000; i++)
        OwnMap::addMap(&mappi,i, i);

    //cout << "check 2" << '\n';

    for (int i = 0; i < 1000; i++)
        OwnMap::lookUp(mappi, i);
        
    auto end = chrono::system_clock::now();
    chrono::duration<float, milli> duration = end - start;
    cout << "my map: " << duration.count() << ".ms" << '\n';

    
    start = chrono::system_clock::now();

    unordered_map<int, int> mapped;

    for(int i = 0; i < 1000; i++)
        mapped[i] = i;

    for (int i = 0; i < 1000; i++)
        mapped[i];
    
    end = chrono::system_clock::now();
    duration = end - start;
    cout << "std unordered_map: " <<duration.count() << ".ms" << '\n';
}