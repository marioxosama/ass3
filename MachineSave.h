#ifndef MACHINESAVE_H_INCLUDED
#define MACHINESAVE_H_INCLUDED
#include "VendingMachineItems.h"
#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
class machineSave: public vendingMachineItems{
private:
    int save[5]={200,200,100,50,50};
    int cashin;
    double changein;
    double total;
    int cashout;
    double changeout;
public:
    double inputCalc(int x);
    void outputCalc(int x);
    void printSave();
};


#endif // MACHINESAVE_H_INCLUDED
