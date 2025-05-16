#pragma once

//Todo: make own linkedlist class
//      make own stacks and queues
//      make own maps
//      this is all just for learning, it'll go on github later
//      good practice

class OwnStack
{
    public:

    struct Node
    {
        Node* next;
        int data;
    };

    //this behaves like a stack, I just need to add pop and the like
    //stack initialised via the node structs*
    static void addStack(Node** nextNode, int ndata)
    {
        Node* node = new Node();
        node->data = ndata;
        //pushes it back
        node->next = *nextNode;
        //current beginning
        *nextNode = node;
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
};