#ifndef item_H
#define item_H
#include<bits/stdc++.h>
using namespace std;


class Items{

    public: 
    int peakHourCost = 30 , specialDayCost =  50, nightHourCost = 20 , deliveryCharge = 20;
    double  rate = 0.05 ;
    double totalCost ;
    void calculateCharge(double price , bool peekHourFlag , bool nightOrdersFlag , bool specialDayFlag)
    {
        if( peekHourFlag)
        {
            price = price + peakHourCost ;
        }
        if( nightOrdersFlag)
        {
            price  = price + nightHourCost  ;
        }
         if( specialDayFlag)
        {
            price  = price + specialDayCost  ;
        }
        price = price + deliveryCharge ;
        this->totalCost = price ;
    }
    void gstCalculate()
    {
        // cout<<(this->totalCost);
        // cout<<((this->totalCost) * (this->rate));
        this->totalCost = this->totalCost + ((this->totalCost) * (this->rate));
    }
    void printBill()
    {
        cout<< this->totalCost;
    }
};
#endif