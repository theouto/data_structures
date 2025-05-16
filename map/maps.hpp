#pragma once
#include <bits/stdc++.h>

class OwnMap
{

public:

    struct Map
    {
        std::string identifier;
        int data;
        Map* next;
    };

    Map* map = new Map();
    Map* start = new Map();
    
    OwnMap()
    {
        map->identifier = "null";
        map->data = 0;
        map->next = start;
        start->identifier = "null";
        start->data = 0;
        start->next = map;
    }

    void addMap(std::string identifier, int ndata)
    {
        Map* mapper = new Map();
        mapper->identifier = identifier;
        mapper->data = ndata;
        //pushes it back
        mapper->next = map;
        //current beginning
        map = mapper;
    }

    int lookUp(std::string ID)
    {
        Map* cycle = new Map();
        *cycle = *map;
        while (cycle->identifier != ID)
        {
            cycle = cycle->next;
        }
        int ret = cycle->data;
        delete cycle;
        return ret;
    }

};