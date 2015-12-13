//
//  main.cpp
//  inheritance
//
//  Created by Eden Burton on 2015-10-29.
//  Copyright © 2015 Eden Burton. All rights reserved.
//

#include <iostream>
#include "Account.h"
using namespace std;


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



// ad-hoc polymorphism example
void display(int a) {
    cout  << "integer " << a << endl;
}

void display() {
    cout  << "no argument" << endl;
}

/*

int main(int argc, const char * argv[]) {
    int myInt = 5;
    display(myInt);
    display();
}

 */




// inclusion polymorphism example
/*
int main(int argc, const char * argv[]) {

    SavingsAccount bobSavings(0,0.07);
    bobSavings.deposit(100.57);
    bobSavings.addInterest();
    
    Account& someAcct = bobSavings;
    
    // which deposit is called?
    someAcct.deposit(100);
    
    BonusChequingAccount jill(0,10, 1000, 2);
    jill.deposit(200.45);
    jill.chargeFee();
    jill.addBonus();
 
    return 0;
}
*/


struct test {
    int v;
    int w;
};


struct Person {
    int typeDesc() { return 4;}
};

struct Bike {
    const char* typeDesc() { return "Bike"; }
    
};

struct Customer {
    int id;
       
    const char* typeDesc() { return "Customer"; }
    
};


void swap(int& a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}

// parametric polymorphism example
int main(int argc, const char * argv[]) {

    bool a = true, b = false;
    double aa = 4.0, bb = 45.5;
    int x = 0; int y = 1;
    int *ptB;
    
    test t,t2;

    swap(x,y);
    swap(aa, bb);
    swap(t,t2);
    
    swapValues(a,b);
    swapValues(aa,bb);
    
    Person per; Bike bik;
    //displayType(x);
    displayType(per);
    displayType(bik);
    
    

}

 
