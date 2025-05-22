#pragma once

class OwnCircle
{

private:

    struct Node
    {
        Node* next;
        int data;
    };

    Node* head = new Node();
    Node* lastt = new Node();
    int size = 0;

public:

    OwnCircle(int first, int last)
    {
        head->data = first;
        head->next = lastt;
        lastt->data = last;
        lastt->next = head;
        size += 2;
    }

    void addCircle(int ndata)
    {
        Node* node = new Node();
        node->data = ndata;
        //pushes it back
        node->next = head;
        lastt->next = node;
        //current beginning
        head = node;
        size++;
    }

    int front() {return head->data;}
    int sized() {return size;}

    void pop()
    {
        lastt->next = head->next;
        head = head->next;
        size--;
    }

    void next()
    {
        head = head->next;
    }
};