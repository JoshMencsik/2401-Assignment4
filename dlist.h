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

        //insert an item at the begining or end of the list
       void front_insert (const T& item);
       void rear_insert (const T& item);

        //remove an item at the begining or end of the list
       void front_remove();
       void rear_remove();

        //print out the list forwards or backwords
       void show() const;
       void reverse_show() const;

       //iterator stuff
       //return an iterator object that represents the beginning or end of the list frontwards
       iterator begin() const {return iterator(head);}
       iterator end() const {return iterator(NULL);}

        //return an iterator object that represents the beginning or end of the list backwords
       iterator r_begin() const {return iterator(tail);}
       iterator r_end() const {return iterator(NULL);}

        //add to the list before or after the iterators position
        void insert_before (iterator position, T item);
        void insert_after (iterator position, T item); 

        //delete what the iterator is pointing to
        void remove(iterator position);

        //return the number of nodes in the list
        int size() {return nodecount;}

    private:
        dnode<T>* head;
        dnode<T>* tail;
        int nodecount;
};

#include "dlist.template"

#endif