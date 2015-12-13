//
//  main.cpp
//  inheritance
//
//  Created by Eden Burton on 2015-10-29.
//  Copyright © 2015 Eden Burton. All rights reserved.
//

#include <iostream>
#include "Account.h"


Account::Account() {
    balance = 0;
}

Account::Account(double amt) {
    balance = amt;
}

void Account::deposit(double amt) {
    this->balance += amt;
}

void Account::withdraw(double amt) {
    if (amt >= balance)
        this->balance -= amt;
}

double Account::getBalance() {
    return balance;
}


SavingsAccount::SavingsAccount(double bal, double rate) : Account(bal) {
    // calls the base class constructor 
    interestRate = rate;
}

void SavingsAccount::addInterest() {
    Account::deposit(getBalance() * interestRate);
}

void SavingsAccount::deposit(double amt) {
    Account::deposit(amt);
    
    // special behavior, only for
    // saving accounts
    Account::deposit(1);
    
}



ChequingAccount::ChequingAccount(double bal, double fee) : Account(bal) {
    checkFee = fee;
}


void ChequingAccount::chargeFee() {
    withdraw(checkFee);
    // balance -= checkFee;
}



void BonusChequingAccount::addBonus() {
    if (getBalance() > minBalance)
        deposit(bonus);
}

BonusChequingAccount::BonusChequingAccount(double bal, double fee,
                                           double min, double bon)
                    : ChequingAccount(bal, fee) {
    checkFee = fee;
}




int main(int argc, const char * argv[]) {

    SavingsAccount bobSavings(0,0.07);
    bobSavings.deposit(100.57);
    bobSavings.addInterest();
    
    BonusChequingAccount jill(0,10, 1000, 2);
    jill.deposit(200.45);
    jill.chargeFee();
    jill.addBonus();
    
    

    std::cout << "Hello, World!\n";
    return 0;
}
