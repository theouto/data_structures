#pragma once


class Queued
{

    public:
    
	 struct Node
    {
        Node* next;
        int data;
    };

    //this behaves like a queue, I just need to add pop and the like
    //queue initialised via the node structs*
    static Node* add(Node* head, int ndata)
    {
        Node* node = new Node();
        node->data = ndata;
        //pushes it back
        node->next = nullptr;
        //current beginning

        Node* returned = head;
        while (returned->next != nullptr)
            returned = returned->next;
        returned->next = node;

        return head;
    }

    static int size(Node* node)
    {
        int size = 0;
        while (node!= nullptr)
        {
            size++;
        }
        return size;
    }
    
    static int pop(Node** node)
    {
        int returned = (*node)->data;
        *node = (*node)->next;
        return returned;
    }

    static bool find(Node* node, int want)
    {
        bool isthere = false;
        while (!isthere && node != nullptr)
            isthere = (want == node->data);

        return isthere;
    }

    

};