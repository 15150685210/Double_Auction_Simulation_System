//
//  Trader.h
//  Double_Auction_Simulation_System
//
//  Created by Mirna Wahab on 29/09/2016.
//  Copyright © 2016 Mirna Wahab. All rights reserved.
//

#ifndef Trader_h
#define Trader_h


class Trader
{
private:  //protected:
    string traderName;
    char traderType;

public:
    Trader(string tn, char t)
    {traderName = tn; traderType = t;}
   
    Bid generateBid()
    {
        double price = 0.0;
        int quantity = 0;
        static int bidId = 0;
        
        price = (MAXPRICE - MINPRICE) * ( (double)rand() / (double)RAND_MAX ) + MINPRICE;
        quantity = rand() % (MAXQUANTITY - MINQUANTITY) + MINQUANTITY;
        
        Bid b(traderName, bidId++, traderType, price, quantity);
        return b;
    }

    void printTrader()
     {cout << " " << traderName << ", " << traderType << "\n" << endl;}
    
};

#endif /* Trader_h */
