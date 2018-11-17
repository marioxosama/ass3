#include "VendingMachineItems.h"

void vendingMachineItems::printItems(){
        for(int i=0; i<10; i++){
            cout<<items[i]<<"  ";
        }
    }
void vendingMachineItems::startMachine()
{
    cout<<"welcome to vending machine"<<endl;
    printItems();
    cout<<endl;
    cout<<"please choose your item no."<<endl;
}
void vendingMachineItems::remov(int x){
        itemsNo[x-1]--;
        cout<<"Price is "<<itemsPrice[x-1]<<endl;
}
