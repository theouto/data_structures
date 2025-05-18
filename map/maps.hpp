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
        Map(int value)
        {
            data = value;
            next = nullptr;
        }
    };

    struct Mapii
    {
        int identifier;
        int data;
        Mapii* next;
    };

    //adapt it to be add to queue and not add first
    //it will make it easier to 
    static void addMapFirst(Map** map, std::string identifier, int ndata)
    {
        Map* mapper = new Map();
        mapper->identifier = identifier;
        mapper->data = ndata;
        //pushes it back
        mapper->next = *map;
        //current beginning
        *map = mapper;
    }

    static void addMapFirst(Mapii** map, int identifier, int ndata)
    {
        Mapii* mapper = new Mapii();
        mapper->identifier = identifier;
        mapper->data = ndata;
        //pushes it back
        mapper->next = *map;
        //current beginning
        *map = mapper;
    }

    static void addMapLast(Map** map, std::string identifier, int ndata)
    {
        Map* mapper = new Map();
        mapper->identifier = identifier;
        mapper->data = ndata;
        //pushes it back
        (*map)->next = mapper;
        //current end
        *map = mapper;
    }

    static void addMapLast(Mapii**, int identifier, int ndata)
    {
        
    }

    static int lookUp(Map* map, std::string ID)
    {
        while (map->identifier != ID)
            map = map->next;

        return map->data;
    }

    static int lookUp(Mapii* map, int ID)
    {
        while (map->identifier != ID)
            map = map->next;

        return map->data;
    }

    static void pop(Mapii** map, int ID)
    {
        Mapii* cycle = *map;
         while (cycle->identifier != ID)
            cycle = cycle->next;

        Mapii prev = cycle;
        cycle = cycle->next;
        prev->next = cycle;
    }

};