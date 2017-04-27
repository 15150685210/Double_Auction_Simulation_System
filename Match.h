//
//  Match.h
//  Double_Auction_Simulation_System
//
//  Created by Mirna Wahab on 7/10/2016.
//  Copyright © 2016 Mirna Wahab. All rights reserved.
//

#ifndef Match_h
#define Match_h


class Match
{
    
private:
    Bid ask;
    Bid buy;
    
public:
    Match(Bid a, Bid b):buy(b),ask(a) {};
    
    void outputMatchesFout(ofstream& fout)
    {
        ask.printBidToFile(fout);
        fout << " <--> ";
        buy.printBidToFile(fout);
        getClearingPrice(fout);
    }
    
    void printMatches()
    {
        buy.printBid();
        cout  << " <--> ";
        ask.printBid();
    }
    
    void getClearingPrice(ofstream& fout)
    {
        double clearingPrice = (ask.getBidPrice() + buy.getBidPrice()) / 2;
        fout << " with clearing price: $" << clearingPrice << " ";
    }

};



#endif /* Match_h */
