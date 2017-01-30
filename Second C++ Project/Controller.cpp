//
//  Controller.cpp
//  Second C++ Project
//
//  Created by Moffat, Braeden on 1/27/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#include <iostream>
#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    cout << "Welcome," << endl;
    int Number = 2;
    
    int * numberPointer = &Number;
    
    tryNumbers(Number);
    cout << "But " << Number << " is still your number." << endl;
    cout << "You have a new number incoming..." << endl;
    Number = changeNumber();
    cout << "Your new number is " << Number << ". Take care of it." << endl;
    cout << ".................." << endl;
    cout << ".................." << endl;
    cout << ".................." << endl;
    
    changeWithPointer(numberPointer);
    cout << numberPointer << endl;
    cout << "What did you do!? What happened to 28?" << endl;
    cout << "Enter your number to get it back." << endl;
    int assignedNumber;
    cin >> assignedNumber;
    if (assignedNumber == 28) cout << "There we go. YOU WIN" << endl;
    if (assignedNumber != 28) cout << "Thats not your number. YOU LOSE";
    
}

void Controller :: tryNumbers(int providedNumber)
{
    cout << "This is your number: " << providedNumber << endl;
    providedNumber = 85837 + 472549;
    cout << providedNumber << " is a new value" << endl;
}

int Controller :: changeNumber()
{
    return 28;
}

void Controller :: changeWithPointer(int * numberPointedTo)
{
    *numberPointedTo += 9000;
}
