// root/src/traders/trader.cpp

#include "trader.h"
#include <iostream>

Trader::Trader(int id, double balance){
    this -> id = id;
    this -> balance = balance;
    this -> numTrades = 0;

    this -> strategy = nullptr;
}

void Trader::displayInfo() {
    std::cout << "Trader ID: " << id << "\n";
    std::cout << "Balance: $" << balance << "\n";
    std::cout << "numTrades: " << numTrades << "\n";

    if (strategy) {
        std::cout << "strategy: " << strategy -> getName() << "\n";
    }

    else {
        std::cout << "no strategy selected" << std::endl;
    }
}

void Trader::setStrategy(Strategy* newStrategy) {
    strategy = newStrategy;
}

void Trader::executeStrategy() {
    if (strategy) {
        strategy -> execute();
    }

    else {
        std::cout << "coulndt execute strategy" << std::endl;
    }
}

void Trader::setRisk(Risk* newRisk) {
    risk = newRisk;
}

void Trader::executeRisk() {
    if(risk) {
        risk -> execute();
    }

    else {
        std::cout << "could not execute risk" << std::endl;
    }
}