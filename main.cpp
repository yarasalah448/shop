#include <iostream>
#include "Item.cpp"
#include "Shopper.cpp"
using namespace std;

int main(){
Shopper c1("yara", 5);
    c1.buyItem("skirt", 200);
    c1.buyItem("dress", 25);

    cout << c1 << endl;

    Shopper c2("rah,ma", 3);
    c2.buyItem("cap", 5);
    c2.buyItem("ring", 15);

    cout << c2 << endl;

    Shopper c3 = c1 + c2;

    cout << c3 << endl;

    --c3;

    cout << c3 << endl;

    string maxItemName;
    float maxItemPrice;
    string maxItemShopperName;

    Shopper::getMaxItemInfo(maxItemName, maxItemPrice, maxItemShopperName);

    cout << "Max item: " << maxItemName << ", Price: " << maxItemPrice << ", Shopper: " << maxItemShopperName << endl;

}
