#include "Shopper.h"
#include "Item.h"
#include <iostream>
using namespace std;

Shopper::Shopper(string n, int size, int num) 
{
   n=name;
   cart_size=size;
   no_items=0;
   items=new Item[size];
   no_purchasedItem=num;
   no_shoppers++;

}

//copy constructor
Shopper::Shopper(const Shopper &obj)
{
    name=obj.name;
    no_items=obj.no_items;
    cart_size=obj.cart_size;
    items= new Item[cart_size];
    for(int i=0; i<no_items; i++){
        items[no_items]=obj.items[no_items];
    }
    no_shoppers++;
}

//destructor
Shopper::~Shopper(){
delete [] items;
}
//
void Shopper::buyItem(string name, float price)
{
    if(no_items<cart_size){
        Item newItem;
        newItem.set_Item(name, price);
        items[no_items]=newItem;
        no_items++;
    }
    else{
        cout<<"The number of items exceeds the purchase size"<<endl;
    }
}

void Shopper::operator--()
{
    --no_items;
}
void Shopper::operator--(Shopper& s)
{
    s.no_items--;
}

static int getNumShoppers(){
    return no_shoppers;
}

//




//

static void getMaxItemInfo(string& item_name, float& price, string& name) {
        name = maxItemShopper;
        item_name = maxItem;
        price = maxItemPrice;
        
    }

friend ostream& operator<<(ostream& out, const Shopper& s);

    ostream& operator<<(ostream& out, const Shopper& s) {
    out << "Shopper: " << s.name << endl;
    for (int i = 0; i < s.no_items; i++) {
        s.items[i]->print();
    }
    return out;
}



