# Double_Auction_Simulation_System

### LOGIC

  
  
Double auction is a market mechanism widely used in financial markets. 
Almost all stock exchange markets, such as NYSE, NASDQ, ASX and so on, use 
double auction mechanism for stock exchange. In a double auction market, 
traders (buyers or sellers) buy or sell a type of products, say shares, 
under the coordination of an auctioneer (broker). We assume that we consider 
the exchange of a single type of shares, say BHP. 

In each business session, buyers and sellers simultaneously submit their buy 
bids and ask bids to the auctioneer for buying or selling shares by specifying 
their bid price and quantities (units of shares). The auctioneer then tries to 
match these bids and determines a clearing price for each matched pair of bids. 

The aim of this program is to develop a simulation system that can mimic 
a double auction market (for single product only).


### TEST PLAN

To compile program in terminal: <br />
$  g++ -std=c++11 main.cpp -o main <br />
$  ./main


Mirnas-MacBook-Pro:Double_Auction_Simulation_System MirnaWahab$ g++ -std=c++11 main.cpp -o main
Mirnas-MacBook-Pro:Double_Auction_Simulation_System MirnaWahab$ ./main

Auction outcome printed to AuctionOutcome.txt in working directory.

Mirnas-MacBook-Pro:Double_Auction_Simulation_System MirnaWahab$ 


 <br />
** AuctionOutcome.txt content **

Generated bids:

(TraderName, bidId, bidType, price, quantity) <br />
(Seller0, 0, A,  $127.36, 5)  <br />
(Seller1, 1, A,  $130.46, 38) <br />
(Seller2, 2, A,  $111.31, 36) <br />
(Seller3, 3, A,  $58.74, 38) <br />
(Seller4, 4, A,  $54.43, 6) <br />
(Seller5, 5, A,  $69.09, 41) <br />
(Seller6, 6, A,  $63.99, 44) <br />
(Seller7, 7, A,  $109.27, 42) <br />
(Seller8, 8, A,  $61.34, 20) <br />
(Seller9, 9, A,  $144.18, 7) <br />
(Buyer0, 10, B,  $110.61, 14) <br />
(Buyer1, 11, B,  $61.45, 30) <br />
(Buyer2, 12, B,  $52.38, 43) <br />
(Buyer3, 13, B,  $51.76, 7) <br />
(Buyer4, 14, B,  $129.78, 40) <br />
(Buyer5, 15, B,  $67.54, 49) <br />
(Buyer6, 16, B,  $98.98, 1) <br />
(Buyer7, 17, B,  $102.05, 10) <br />
(Buyer8, 18, B,  $146.07, 4) <br />
(Buyer9, 19, B,  $78.57, 1) <br />

Matched bids: 

(Seller4, 4, A,  $54.43, 6) <--> (Buyer8, 18, B,  $146.07, 4) with clearing price: $100.25  <br />
(Seller4, 4, A,  $54.43, 2) <--> (Buyer4, 14, B,  $129.78, 40) with clearing price: $92.11  <br />
(Seller3, 3, A,  $58.74, 38) <--> (Buyer4, 14, B,  $129.78, 38) with clearing price: $94.26  <br />
(Seller8, 8, A,  $61.34, 20) <--> (Buyer0, 10, B,  $110.61, 14) with clearing price: $85.98  <br />
(Seller8, 8, A,  $61.34, 6) <--> (Buyer7, 17, B,  $102.05, 10) with clearing price: $81.70  <br />
(Seller6, 6, A,  $63.99, 44) <--> (Buyer7, 17, B,  $102.05, 4) with clearing price: $83.02  <br />
(Seller6, 6, A,  $63.99, 40) <--> (Buyer6, 16, B,  $98.98, 1) with clearing price: $81.49  <br />
(Seller6, 6, A,  $63.99, 39) <--> (Buyer9, 19, B,  $78.57, 1) with clearing price: $71.28  <br />
(Seller6, 6, A,  $63.99, 38) <--> (Buyer5, 15, B,  $67.54, 49) with clearing price: $65.77  <br />

Unmatched Ask bids:

(Seller5, 5, A,  $69.09, 41) <br />
(Seller7, 7, A,  $109.27, 42) <br />
(Seller2, 2, A,  $111.31, 36) <br />
(Seller0, 0, A,  $127.36, 5) <br />
(Seller1, 1, A,  $130.46, 38) <br />
(Seller9, 9, A,  $144.18, 7) <br />

Unmatched Buy bids:

(Buyer5, 15, B,  $67.54, 11) <br />
(Buyer1, 11, B,  $61.45, 30) <br />
(Buyer2, 12, B,  $52.38, 43) <br />
(Buyer3, 13, B,  $51.76, 7) <br />


### LIMITATIONS  

No limitations.
