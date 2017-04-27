//
//  Simulator.h
//  Double_Auction_Simulation_System
//
//  Created by Mirna Wahab on 8/10/2016.
//  Copyright © 2016 Mirna Wahab. All rights reserved.
//

#ifndef Simulator_h
#define Simulator_h


class Simulator
{
private:
    vector<Match> matches;
    Auctioneer auctioneer;
    Buyer* buyers[NUMBUYERS];
    Seller* sellers[NUMSELLERS];
    
public:
    void simulate();

    void outputMatches(ofstream& fout)
    {
        fout << "\nMatched bids: \n" << endl;
        
        for(Match m:matches)
        {
            m.outputMatchesFout(fout);
            fout << endl;
        }
    }
    
    
};

void Simulator::simulate()
{
    
    for (int i = 0; i < NUMSELLERS; i++)
    {
        string tn = "Seller";
        Seller* seller = new Seller(tn + to_string(i));
        sellers[i] = seller;

        auctioneer.recieveBid(seller->generateBid());
    }
    
    for (int i = 0; i < NUMBUYERS; i++)
    {
        string tn = "Buyer";
        Buyer* buyer = new Buyer(tn + to_string(i));
        buyers[i] = buyer;
        
        auctioneer.recieveBid(buyer->generateBid());
    }
    
    // write to file
    ofstream fout;
    fout.open ("AuctionOutcome.txt");
    
    if (fout.fail( ))
    {
        cout << "AuctionOutcome.txt opening failed.\n";
        exit(1);
    }

        auctioneer.printRecievedBidToFile(fout);
        matches = auctioneer.matching();
        outputMatches(fout);
        auctioneer.printRecievedBidToFile(fout);
    
        cout << "\nAuction outcome printed to "
             << "AuctionOutcome.txt in working directory.\n" << endl;
    
    fout.close();
}


#endif /* Simulator_h */
