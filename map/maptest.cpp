#include "maps.hpp"
using namespace std;

int main()
{
    
    OwnMap* mappi = new OwnMap();

    cout << "check 1" << '\n';

    mappi->addMap("test", 3);
    mappi->addMap("man", 7);
    mappi->addMap("august", 11);
    mappi->addMap("whytest", 2);

    cout << "check 2" << '\n';

    auto start = chrono::system_clock::now();
    
        mappi->lookUp("test");
        mappi->lookUp("whytest");
        mappi->lookUp("august");
        
    auto end = chrono::system_clock::now();
    chrono::duration<float, milli> duration = end - start;
    cout << duration.count() << ".ms" << '\n';

    unordered_map<string, int> mapped;
    mapped["test"] = 3;
    mapped["man"] = 7;
    mapped["august"] = 11;
    mapped["whytest"] = 2;

    start = chrono::system_clock::now();
    
        mapped["test"];
        mapped["whytest"];
        mapped["august"];
        mapped["man"];
    
    end = chrono::system_clock::now();
    duration = end - start;
    cout << duration.count() << ".ms" << '\n';
}