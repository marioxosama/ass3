#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include "VendingMachineItems.h"
#include "MachineSave.h"

using namespace std;

int main()
{
    machineSave x;
    int choosenItem;
    x.startMachine();

    cin>>choosenItem;
    x.remov(choosenItem);
    x.inputCalc(choosenItem);
    x.printSave();

    x.outputCalc(choosenItem);
}
