//
//  main.cpp   
//  Double_Auction_Simulation_System
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
const int MINQUANTITY = 1;
const int MAXQUANTITY = 50;
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
    
    Simulator simulator;
    simulator.simulate();

    return 0;
    
}
