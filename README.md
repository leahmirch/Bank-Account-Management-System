# CIS200: Bank Account Management System

## Student Name and Email
Leah Mirch (lmirch@umich.edu)

## Introduction
This project implements a comprehensive Bank Account Management System in C++. It includes various types of bank accounts such as regular checking and savings accounts, high-interest accounts, certificates of deposit, and special checking accounts with no service charges. The system is designed to handle common banking operations like deposits, withdrawals, and account balance inquiries.

## Files Overview
- **bankAccount.h / bankAccount.cpp**: Base class for all types of bank accounts.
- **checkingAccount.h / checkingAccount.cpp**: Derived class for regular checking accounts.
- **noServiceChargeChecking.h / noServiceChargeChecking.cpp**: Derived class for checking accounts without service charges.
- **serviceChargeChecking.h / serviceChargeChecking.cpp**: Derived class for checking accounts with service charges.
- **savingsAccount.h / savingsAccount.cpp**: Derived class for regular savings accounts.
- **highInterestSavings.h / highInterestSavings.cpp**: Derived class for high-interest savings accounts.
- **certificateOfDeposit.h / certificateOfDeposit.cpp**: Derived class for certificates of deposit (CDs).
- **highInterestChecking.h / highInterestChecking.cpp**: Derived class for high-interest checking accounts.
- **main.cpp**: Main file to execute the bank account management system.

## Classes and Their Functionalities

### bankAccount Class
Defines common attributes and methods for all types of bank accounts:
- **Attributes**: Account number, balance.
- **Methods**: Deposit, withdraw, get balance, and other utility functions.

### checkingAccount Class
Inherits from `bankAccount` and adds features specific to checking accounts:
- **Attributes**: Minimum balance, monthly fee.
- **Methods**: Check minimum balance, apply monthly fee.

### noServiceChargeChecking Class
Inherits from `checkingAccount` and represents checking accounts without service charges:
- **Attributes**: None.
- **Methods**: Overridden methods to skip service charge application.

### serviceChargeChecking Class
Inherits from `checkingAccount` and represents checking accounts with service charges:
- **Attributes**: Service charge amount.
- **Methods**: Apply service charge.

### savingsAccount Class
Inherits from `bankAccount` and adds features specific to savings accounts:
- **Attributes**: Interest rate.
- **Methods**: Apply interest rate.

### highInterestSavings Class
Inherits from `savingsAccount` and introduces high-interest features:
- **Attributes**: Higher interest rate.
- **Methods**: Apply higher interest rate.

### certificateOfDeposit Class
Inherits from `bankAccount` and represents certificates of deposit:
- **Attributes**: Term length, interest rate.
- **Methods**: Apply interest, check maturity.

### highInterestChecking Class
Inherits from `checkingAccount` and introduces high-interest features:
- **Attributes**: Higher interest rate.
- **Methods**: Apply interest rate.

## Running Instructions
### Prerequisites
- C++ compiler (e.g., g++)

### Compilation and Execution
1. Open a terminal and navigate to the project directory.
2. Compile the project using:
   ```bash
   g++ -o bank_system bankAccount.cpp checkingAccount.cpp noServiceChargeChecking.cpp serviceChargeChecking.cpp savingsAccount.cpp highInterestSavings.cpp certificateOfDeposit.cpp highInterestChecking.cpp main.cpp
   ```
3. Run the compiled program:
   ```bash
   ./bank_system
   ```

## Program Execution
The program provides a menu-driven interface to perform various banking operations such as creating accounts, depositing money, withdrawing money, and displaying account information. Users can interact with different types of accounts and see how specific rules and operations apply to each type.

## Additional Information
This project showcases object-oriented design principles in C++, focusing on inheritance, polymorphism, and class hierarchies. It provides a practical application of managing different types of bank accounts and their specific operations.