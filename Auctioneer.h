//
//  Auctioneer.h
//  Double_Auction_Simulation_System
//
//  Created by Mirna Wahab on 7/10/2016.
//  Copyright © 2016 Mirna Wahab. All rights reserved.
//

#ifndef Auctioneer_h
#define Auctioneer_h
#include "Match.h"


class Auctioneer
{
private:
    vector<Bid> askBids;
    vector<Bid> buyBids;
    vector<Match> matches;
    int price;
    
public:
    Auctioneer() {};
    
    vector<Bid> getAskBid() {return askBids;}
    vector<Bid> getBuyBid() {return buyBids;}
    
    vector<Match> matching()// return a vector of match objects to simulator
    {
        //printRecievedBid(); // unsorted output to console for testing
       
        sort(buyBids.begin(), buyBids.end());
        sort(askBids.begin(), askBids.end());

        int tempQuantity = 0;
        bool flag = false;

        while (askBids[0].getBidPrice() <= buyBids[0].getBidPrice() && flag == false)
        {
            Match m(askBids[0],buyBids[0]);
            matches.push_back(m);
            flag = true;

            if ((askBids[0].getQuantity() < buyBids[0].getQuantity()))
            {   
                tempQuantity = buyBids[0].getQuantity() - askBids[0].getQuantity();
                buyBids[0].setQuantity(tempQuantity); 
                askBids.erase((askBids.begin()));
                flag = false;
            } 
            else if ((askBids[0].getQuantity() > buyBids[0].getQuantity()))
            {
                tempQuantity = askBids[0].getQuantity() - buyBids[0].getQuantity();
                askBids[0].setQuantity(tempQuantity); 
                buyBids.erase((buyBids.begin()));
                flag = false;

            } 
            else if ((askBids[0].getQuantity() == buyBids[0].getQuantity()))
            {

                tempQuantity = buyBids[0].getQuantity();
                
                askBids.erase((askBids.begin()));
                buyBids.erase((buyBids.begin()));
                flag = false;
            }                
        }
        return matches;
    }

    
    void recieveBid(Bid bid)
    {
        if (bid.getBidType() == 'A')
        {
            askBids.push_back(bid);
        }
        else
        {
            buyBids.push_back(bid);
        }
    }
    
    
    void printRecievedBid()
    {
        for(Bid b:askBids)
        {
            b.printBid();
            cout << "\n" << endl;
        }

        for(Bid b:buyBids)
        {
            b.printBid();
            cout << "\n" << endl;
        }
    }
    

    void printRecievedBidToFile(ofstream& fout)
    {
        static int printThis = 0;
        
        if (printThis == 0)
        {
            fout << "\nGenerated bids:\n" << endl;
            fout << "(TraderName, bidId, bidType, price, quantity)" << endl;
        }
        else
        {
            fout << "\nUnmatched Ask bids:\n" << endl;
        }
        
        for(Bid b:askBids)
        {
            b.printBidToFile(fout);
            fout << endl;
        }
        
        if (printThis !=0)
        {
            fout << "\nUnmatched Buy bids:\n" << endl;
        }
        
        for(Bid b:buyBids)
        {
            b.printBidToFile(fout);
            fout << endl;
        }
        printThis++;
    }
};

#endif /* Auctioneer_h */
