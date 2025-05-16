#pragma once

namespace std
{
    class OwnCircle
    {

    public:

        struct Node
        {
            Node* next;
            int data;
        };

        static void addCircle(Node** nextNode, Node** firstNode, int ndata)
        {
            Node* node = new Node();
            node->data = ndata;
            //loops
            *firstNode->next = node;
            //pushes it back
            node->next = *nextNode;
            //current beginning
            *nextNode = node;
        }

    };
}