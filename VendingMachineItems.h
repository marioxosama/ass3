#ifndef VENDINGMACHINEITEMS_H_INCLUDED
#define VENDINGMACHINEITEMS_H_INCLUDED
#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
class vendingMachineItems{
protected:
    string items[10]={"item1","item2","item3","item4","item5","item6","item7","item8","item9","item10"};
    int itemsNo[10]={10,10,10,10,10,10,10,10,10,10};
    double itemsPrice[10]={10,5,7,4,5,9,12.5,2,4,5.5};
public:
    void printItems();
    void startMachine();
    void remov(int x);
};
#endif // VENDINGMACHINEITEMS_H_INCLUDED
