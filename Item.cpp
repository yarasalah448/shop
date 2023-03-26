#include "Item.h"
#include<iostream>
using namespace std;

Item::Item()
{
   
}

Item::Item(string name, float p)
{
   price=p;
   item_name=new char[name.length()];
   for(int i=0; i<name.length(); i++){
    item_name[i]=name[i];
   }
}



Item::~Item()
{
   delete [] item_name;
}

void Item::set_Item(string name, float p)
{
   item_name=new char[name.length()];
   for(int i=0; i<name.length(); i++){
    item_name[i]=name[i];
   }
   price=p;
}

char *Item::get_name()
{
   return item_name;
}

float Item::get_price()
{
   return price;
}

void Item::print()
{
      int size = sizeof(item_name)/sizeof(item_name[0]);
   cout<<"Item: ";
   for (int i = 0; i < size-1; i++)
   {
      cout<<item_name[i];
   }
   cout<<endl<<"Price: "<<price<<endl;
}
