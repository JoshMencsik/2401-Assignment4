/*
Josh Mencsik
23 March 2020
A template class for a node suitable to be used in a doubly linked list
contains a head, tail, and data of any type
*/ 

#include<iostream>
#ifndef DNODE_H
#define DNODE_H

template<class T>

class dnode {
    public:
        dnode(const T& dat = T(), dnode* prev = NULL, dnode* nex = NULL) {previousLink = prev; nextLink = nex; dataField = dat;}

        dnode* next() {return nextLink;} 
        dnode* previous() {return previousLink;} 
        T& data() {return dataField;}

        void setNext(dnode* t) {nextLink = t;}
        void setPrevious(dnode* pre) {previousLink = pre;}
        void setData(T& d) {dataField = d;}

    private:
        dnode* previousLink;
        dnode* nextLink;
        T dataField;
};

#endif