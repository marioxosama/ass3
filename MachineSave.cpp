#include "MachineSave.h"

double machineSave::inputCalc(int x){
        cout<<"Please enter whole money"<<endl;
        cin>>cashin;
        total=cashin;
        cout<<"please enter change"<<endl;
        cin>>changein;
        total+=changein;
        if(total>=itemsPrice[x-1]){

            save[4]+=(cashin-(cashin%20))/20;
            cashin=cashin%20;
            save[3]+=(cashin-(cashin%10))/10;
            cashin=cashin%10;
            save[2]+=(cashin-(cashin%5))/5;
            cashin=cashin%5;
            while(changein>1){
                save[1]++;
                changein--;
            }
            if(changein>0){
            save[0]++;
        }
        }
        else{cout<<"Please enter enough money"<<endl;}
}
    void machineSave::outputCalc(int x){
        if(total==itemsPrice[x-1]){
            cashout==0;
            changeout==0;
            cout<<"you have no change"<<endl;
        }
        else{
            double leftover=total-itemsPrice[x-1];
            int leftoverArr[5]={0,0,0,0,0};
            leftoverArr[4]+=(leftover-fmod(leftover,20))/20;
            leftover=fmod(leftover,20);
            leftoverArr[3]+=(leftover-fmod(leftover,10))/10;
            leftover=fmod(leftover,10);
            leftoverArr[2]+=(leftover-fmod(leftover,5))/5;
            leftover=fmod(leftover,5);
            while(leftover>1){
                leftoverArr[1]++;
                leftover--;
            }
            if(leftover>0){
            leftoverArr[0]++;
        }
        for(int i=0; i<5; i++){
            if(save[i]>leftoverArr[i]){
                save[i]-=leftoverArr[i];
            }
            else if(save[i]<leftoverArr[i]){
                if(i-1==1){
                    save[i-1]-=5;
                }
                else{save[i-1]-=leftoverArr[i]*2;}
            }

        }
            for(int i=0; i<5; i++){
                if(leftoverArr[i]>0){
                    if(i==0){
                        cout<<"you have "<<leftoverArr[i]<<" half pounds"<<endl;
                    }
                    else if(i==1){
                        cout<<"you have "<<leftoverArr[i]<<" pounds"<<endl;

                    }
                    else if(i==2){
                        cout<<"you have "<<leftoverArr[i]<<" Five pounds"<<endl;
                    }
                    else if(i==3){
                        cout<<"you have "<<leftoverArr[i]<<" Ten pounds"<<endl;
                    }
                    else if(i==4){
                        cout<<"you have "<<leftoverArr[i]<<" Twenty pounds"<<endl;
                    }
                }
            }
        }
    }
     void machineSave::printSave(){
        for(int i=0; i<5; i++){
            cout<<save[i]<<endl;
        }
    }
