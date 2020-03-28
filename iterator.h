/*
Josh Mencsik
27 March 2020
The iterator class that will be able to run through dList and return values
*/

#include<iostream>
#include "dnode.h"
#ifndef ITERATOR_H
#define ITERATOR_H

template <class T>
class dList;
template <class T>
class node_iterator {
    public:
        friend class dList<T>;
        node_iterator (dnode<T>* pos = NULL) {spot = pos;}

        bool operator != (const node_iterator other) const {return other.spot != spot;}
        bool operator == (const node_iterator other) const {return other.spot == spot;}

        T operator *() const {return spot -> data();}

        node_iterator operator ++() {spot = spot -> next(); return *this;}
        node_iterator operator ++(int) {node_iterator original(spot); spot = spot -> next(); return original;}

        node_iterator operator --() {spot = spot -> previous(); return *this;}
        node_iterator operator --(int) {node_iterator original(spot); spot = spot -> previous(); return original;}

    private:
        dnode<T>* spot;
};

#endif