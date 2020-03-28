/*
Josh Mencsik
24 March 2020
A template class for a doubly linked list which utilizes the dnode class
Able to to add or remove nodes from the front or back
*/ 

#include<iostream>
#include"dnode.h"
#include"iterator.h"
#ifndef DLIST_H
#define DLIST_H

template<class T>

class dList {
    public:
        typedef node_iterator<T> iterator;
        dList() {head = tail = NULL; nodecount = 0;}

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

       //iterator stuff
       iterator begin() const {return iterator(head);}
       iterator end() const {return iterator(NULL);}

       iterator r_begin() const {return iterator(tail);}
       iterator r_end() const {return iterator(NULL);}

        
        void insert_before (iterator position, T item);
        void insert_after (iterator position, T item); 

        void remove(iterator position);

        int size() {return nodecount;}

    private:
        dnode<T>* head;
        dnode<T>* tail;
        int nodecount;
};

#include "dlist.template"

#endif