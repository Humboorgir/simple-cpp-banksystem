#include <iostream>
#include <iomanip>
    int choice;
    double balance = 1400;
    double bank = 100;
    double amount;
void depo(double dep){
    if(dep > balance) {
        std::cout << "You don't have that much money. \n";
    }
    else if(dep < 1) {
        std::cout << "You can't deposit less than a dollar";
    }
    else {
        balance -= dep;
        bank += dep;
        std::cout << "====================\n";
        std::cout << "You've deposited $" << std::setprecision(2) << std::fixed << dep << "\n";
        std::cout << "*Your Balance*\n Wallet: " << std::setprecision(2) << std::fixed << balance << "\n Bank: " << std::setprecision(2) << std::fixed << bank;
        std::cout << "\n====================\n";
    }
}
void with(double with){
    if(with > bank) {
        std::cout << "You don't have that much money in your bank. \n";
    } else if(with < 1) {
        std::cout << "You can't withdraw less than a dollar";
    } else {
        bank -= with;
        balance += with;
        std::cout << "====================\n";
        std::cout << "You've withdrawn $" << std::setprecision(2) << std::fixed << with << "\n";
        std::cout << "*Your Balance*\n Wallet: " << std::setprecision(2) << std::fixed << balance << "\n Bank: " << std::setprecision(2) << std::fixed << bank;
        std::cout << "\n====================\n";
    }
}
int main(){
    std::cout << "\n" << "====================";
    std::cout << "\n" << "Please pick a choice\n 1: Show balance\n 2: Deposit\n 3: Withdraw\n 4: Show this list\n 5: Exit";
    std::cout << "\n" << "====================" << "\n";
    std::cin >> choice;
    std::cout << "\n";
    do {
    switch(choice) {
        case 1: 
        std::cout << "====================\n";
        std::cout << "*Your Balance*\n Wallet: " << std::setprecision(2) << std::fixed << balance << "\n Bank: " << std::setprecision(2) << std::fixed << bank;
        std::cout << "\n====================\n";
        break;
        case 2:
        std::cout << "How much money you want to deposit: ";
        std::cin >> amount;;
        depo(amount);
        break;
        case 3:
        std::cout << "How much money you want to withdraw: ";
        std::cin >> amount;
        with(amount);
        break;
        case 4:
        std::cout << "\n" << "====================";
        std::cout << "\n" << "Please pick a choice\n 1: Show balance\n 2: Deposit\n 3: Withdraw\n 4: Show this list\n 5: Exit";
        std::cout << "\n" << "====================" << "\n";
        break;
        case 5:
        std::cout << "Thanks for visiting!";
        break;
        default:
        std::cout << "Invalid choice";
        choice = 4;
        break;
    }
            std::cin >> choice;
    } while (choice != 5);
    std::cout << "\n";
    return 0;
}