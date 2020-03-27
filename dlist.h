/*
Josh Mencsik
24 March 2020
A template class for a doubly linked list which utilizes the dnode class
Able to to add or remove nodes from the front or back
*/ 

#include<iostream>
#include"dnode.h"
#ifndef DLIST_H
#define DLIST_H

template<class T>

class dList {
    public:
        dList() {head = tail = NULL;}

        //Big 3
        dList(const dList& cp);
        ~dList();
        dList operator =(const dList cp);

       void front_insert (const T& item);
       void rear_insert (const T& item);

       void front_remove();
       void rear_remove();

       void show() const;
       void reverse_show() const;

    private:
        dnode<T>* head;
        dnode<T>* tail;
};

#include "dlist.template"

#endif