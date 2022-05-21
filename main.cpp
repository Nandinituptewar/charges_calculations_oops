#include<bits/stdc++.h>

#include "item.h"
using namespace std;

int main()
{

    
        string  peekHour , nightOrders , specialDay;
        
        bool peekHourFlag = false , nightOrdersFlag = false ,specialDayFlag = false;
        string s;
        cout<<"Items : " ;
        getline(cin,s);
        cout<< " specialDay: " ;
        cin>> specialDay;  

        cout<< "Peak hour: ";
        cin>> peekHour;

        cout<< "Night Order: " ;
        cin>> nightOrders ;


        if(specialDay == "Yes")
        {
            specialDayFlag = true;
        }  
        if(peekHour == "Yes")
        {
            peekHourFlag = true ;
        } 
        if(nightOrders == "Yes")
        {
            nightOrdersFlag = true ;
        } 

        stringstream ss(s);
        string word;
        double price = 0;
        while(ss >> word)
        {
            if(word== "Pizza,")
            {
                price = price + 150 ;
            }
            if(word== "Burger," || word== "Burger" )
            {
                
                price = price +  100 ;
            }
            if(word== "Coke" || word== "Coke," )
            {
                price = price + 50 ;
            }
            if(word== "Brownies" || word== "Brownies,")
            {
                price = price + 60 ;
            }
        }
        cout<< "total : " << price<<endl;

        Items itemObj;

        itemObj.calculateCharge(price , peekHourFlag , nightOrdersFlag , specialDayFlag) ; 
        itemObj.gstCalculate();
        itemObj.printBill();


}