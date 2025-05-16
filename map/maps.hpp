#pragma once


class OwnMap
{
private:

    Map* map = new Map();
    Map* start = new Map();

public:

    struct Map
    {
        string identifier;
        int data;
        Map* next;
    };
    
    static OwnMap()
    {
        map->identifier = "null";
        map->data = 0;
        map->next = start;
        start->identifier = "null";
        start->data = 0;
        start->next = map;
    }

    void addMap(string identifier, int ndata)
    {
        Map* mapper = new Map();
        mapper->identifier = identifier;
        mapper->data = ndata;
        //pushes it back
        mapper->next = *map;
        //current beginning
        *map = mapper;
    }

    int lookUp(Map* map, string ID)
    {
        while (map->identifier != ID)
        {
            map = map->next;
        }
        return map->data;
    }

};