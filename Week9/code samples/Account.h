//
//  Account.h
//  inheritance
//
//  Created by Eden Burton on 2015-10-29.
//  Copyright © 2015 Eden Burton. All rights reserved.
//

#ifndef Account_h
#define Account_h
class Account {
    int customerID;
    double balance;
public:
    void deposit(double amt);
    void withdraw(double amt);
    Account(double bal);
    Account();
    double getBalance();
};

class SavingsAccount : public Account {
    double interestRate;
public:
    void addInterest();
    SavingsAccount(double bal, double rate);
    void deposit(double amt);
};


class ChequingAccount : public Account {
protected:
    double checkFee;
public:
    void chargeFee();
    ChequingAccount(double bal, double fee);
};

class BonusChequingAccount : public ChequingAccount {
    double minBalance;
    double bonus;
public:
    void addBonus();
    BonusChequingAccount(double bal, double fee, double min, double bon);
};




#endif /* Account_h */
