//
//  Bid.h
//  Double_Auction_Simulation_System
//
//  Created by Mirna Wahab on 29/09/2016.
//  Copyright © 2016 Mirna Wahab. All rights reserved.
//

#ifndef Bid_h
#define Bid_h

class Bid
{
private:
    //vector<Bid> bids;
    string traderName;
    int bidId;
    char bidType;
    double price;
   
public:
    int quantity;
     Bid(string tn, int bi, char t, double p, int q) //contuctor
      {traderName = tn; bidId = bi; bidType = t; price = p; quantity = q;}

    void printBid()
     {cout << "(" << traderName << ", " <<  bidId << ", " << bidType << ", "
      << setprecision(2) << fixed << price << ", "<< quantity << ")";}

    void printBidToFile(ofstream& fout)
    { fout << "(" << traderName << ", " <<  bidId << ", " << bidType << ", "
        << setprecision(2) << fixed << " $" << price << ", "<< quantity << ")";}

    
    bool operator<(const Bid bid ) const
    {
        if ((bidType == 'A' && bid.bidType == 'A' && price < bid.price) ||
            (bidType == 'B' && bid.bidType == 'B' && price > bid.price))
        {
            return true;
        }
        
        return false;
    }
    
    char getBidType() const {return bidType;}
    double getBidPrice() const {return price;}
    int getQuantity() const {return quantity;}
};

#endif /* Bid_h */
