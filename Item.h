#ifndef ITEM_H
#define ITEM_H
#include <iostream>

using namespace std;

#pragma once

class Item
{
public:
    Item();
    Item(string name, float p);
    ~Item();
    //void getdata();
    void set_Item(string name, float p);
    char* get_name() ;
    float get_price();
    void print();


private:
   char* item_name;
   float price;
};



#endif