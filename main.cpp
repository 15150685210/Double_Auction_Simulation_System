//
//  main.cpp
//  Assignment2
//
//  Created by Mirna Wahab on 29/09/2016.
//  Copyright © 2016 Mirna Wahab. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::string;
using namespace std;

const double MINPRICE = 50;
const double MAXPRICE = 150;
//const int MINQUANTITY = 1;
//const int MAXQUANTITY = 50;
const int NUMBUYERS = 10;
const int NUMSELLERS = 10;

#include "Bid.h"
#include "Trader.h"
#include "Buyer.h"
#include "Seller.h"
#include "Auctioneer.h"
#include "Match.h"
#include "Simulator.h"

int main()
{
    srand((int)time(0));
    
/*    //Testing of classes:
 
    cout << "From Bid class:" << endl;
    Bid bid("Mirna", 1, 'B', 30.00, 1);
    bid.printBid();
    

    cout << "\n\nFrom Trader class:" << endl;
    Trader trader("Mirna", 'B');
    trader.printTrader();
    Bid b = trader.generateBid();
    b.printBid();

    string tn;
    cout << "\n\nFrom Buyer class: " << endl;
    Buyer buyer("Buyer");
    buyer.printTrader();
 
    cout << "From Seller class: " << endl;
    Seller seller("Seller");
    seller.printTrader();
 
    cout << "From Auctioneer class: \n" << endl;
    Auctioneer auctioneer;
    
    tn = "Buyer";
    for (int i; i < 10 ; i++)
    {
        Buyer buyer(tn + to_string(i));
        auctioneer.recieveBid(buyer.generateBid());
        
    };

     tn = "Seller";
    for (int i; i < 10 ; i++)
    {
        Seller seller(tn + to_string(i));
        auctioneer.recieveBid(seller.generateBid());
        //seller.generateBid().printBid();
    }
    auctioneer.printRecievedBid();
    
    auctioneer.matching();
    
    //Match m(Bid a, Bid b);
    //m.getMatches();
*/

    
    Simulator simulator;
    simulator.simulate();

    return 0;
    
}
