//
//  main.cpp
//  MP1
//
//  Created by Elijah Kendrick on 9/28/21.
//

#include <iostream>
#include <tgmath.h>
using namespace std;
int main() {
    int regular = 0;
    int sregular = 0;
    int dregular = 0;
    int fancy = 0;
    int sfancy = 0;
    int dfancy = 0;
    int fritters = 0;
    int dollars = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    double cost = 0;
    double payed = 0;
    double change = 0;
    int change2 = 0;
    int nochange = 0;
    // variables
    
    cout << "Number of regular donuts ordered: ";
    cin >>  regular;
    cout << endl << "Number of fancy donuts orders: ";
    cin >> fancy;
    cout << endl << "Number of apple fritters ordered: ";
    cin >> fritters;
    // gathering amount of donuts using cin
    
    dregular = regular / 12;
    sregular = regular % 12;
    dfancy = fancy / 12;
    sfancy = fancy % 12;
    cost = ((dregular * 7.99) + (sregular * .75) + (dfancy * 8.49) + (sfancy * .85) + (fritters * 1.5)) * 1.075;
    cost = cost * 100;
    cost = round(cost);
    cost = cost / 100;
    cout << "Customer owes $" << cost << endl;
    cout << "Customer pays $";
    cin >> payed;
    // doing the math for total cost based on dozens and single donuts + fritters
    
    
    change = payed - cost;
    change2 = change * 100;
    dollars = change2 / 100;
    change2 = change2 - (dollars * 100);
    // converts variable change to an integer and multiplies by 100 (because decimals in the 100th place) so that it is possible to use % to find the amount of dollars, quarters, etc... then subtracts value of dollars from remaining change
    
    quarters = change2 / 25;
    change2 = change2 - (quarters * 25);
    // this line subtracts the value of quarters from the remaining change
    
    dimes = change2 / 10;
    change2 = change2 - (dimes * 10);
    
    nickels = change2 / 5;
    change2 = change2 - (nickels * 5);
    
    pennies = change2;
    
    cout << "Changed owed is $" << change << " - ";
    
    if (dollars > 1) {
        cout << dollars << " dollars, ";
    }
    else if (dollars > 0) {
        cout << dollars << " dollar, ";
    }
    else {
        cout << "";
        nochange = nochange + 1;
    }
    // if statements structured so that if there are more than 1 dollars, it prints a plural message. If dollars equal 1 it prints a singular message. If there are no dollars then it prints nothing and adds 1 to the variable tracking whether there is change at all.
    
    
    if (quarters > 1) {
        cout << quarters << " quarters, ";
    }
    else if (quarters > 0) {
        cout << quarters << " quarter, ";
    }
    else {
        cout << "";
        nochange = nochange + 1;
    }
    
    
    if (dimes > 1) {
        cout << dimes << " dimes, ";
    }
    else if (dimes > 0) {
        cout << dimes << " dime, ";
    }
    else {
        cout << "";
        nochange = nochange + 1;
    }
    
    
    if (nickels > 1) {
        cout << nickels << " nickels, ";
    }
    else if (nickels > 0) {
        cout << nickels << " nickel, ";
    }
    else {
        cout << "";
        nochange = nochange +1;
    }
    
    
    if (pennies > 1) {
        cout << pennies << " pennies.";
    }
    else if (pennies > 0) {
        cout << pennies << " penny.";
    }
    else {
        cout << "";
        nochange = nochange + 1;
    }
    
    
    if (nochange == 5) {
        cout << "Exact payment received - no changed owed";
    }
    // 1 value is added to nochange when the value of dollars or pennies for example is equal to 0. Because there are 5 forms of change, if nochange = 5 then no forms of change were needed.
}
