#ifndef SHOPPER_H
#define SHOPPER_H
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;

#pragma once

class Shopper
{
public:
    Shopper(string n, int size);
    Shopper(const Shopper &obj);
    ~Shopper();
    void buyItem(string name, float price);
    void operator--();
    static int getNumShoppers();
    Shopper& operator + (const Shopper& obj) const;
    static void getMaxItemInfo(string& item_name, float& price, string& name);
    friend  ostream& operator<<(ostream& out, const Shopper& s);
private:
   string name;
   Item* items;
   int no_items;
   int cart_size;
   static int no_shoppers;
   static int no_purchasedItem;
   static string maxItem;
   static string maxItemShopper;
   static float maxItemPrice;

};

int no_shoppers = 0;
int no_items = 0;
float maxItemPrice = 0.0f;
string maxItem = "";
string maxItemShopper = "";

#endif