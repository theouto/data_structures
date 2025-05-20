#pragma once


class Queued
{
    private:

    struct Node
    {
      Node* next;
      int data;
    };

    Node* first;
    Node* last;
    int size;

    public:

    Queued()
    {
        first = nullptr;
        last = nullptr;
        size = 0;
    };

    bool isEmpty() {return first == nullptr;}

    //this behaves like a queue
    void add(int ndata)
    {
        Node* nlast = new Node();
        nlast->data = ndata;
        if (isEmpty()) {first = last = nlast; size++; return;}
        last->next = nlast;
        last = nlast;
        size++;
    }

    int sized(){return size;}
    int front(){return first->data;}
    
    void pop()
    {
        if (isEmpty()) {return; }
        first = first->next;
        size--;
        return;
    }

    bool find(int want)
    {
        Node* checker = first;
        bool isthere = false;
        while (!isthere && checker != nullptr)
            isthere = (want == checker->data);
            checker = checker->next;

        return isthere;
    }

    

};