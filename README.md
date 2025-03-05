Description

This is a simple ATM system written in C++ that allows users to perform basic banking operations interactively. The system provides the following functionalities:

1-Check account balance

2-Deposit money

3-Withdraw money

4-Exit the ATM system

The initial balance is set to zero by default, and users must deposit funds before making withdrawals.

Features
✅ Simple and user-friendly menu interface
✅ Error handling for invalid inputs
✅ Ensures secure transactions with balance validation
✅ Works with any C++ compiler

Installation & Usage
Prerequisites
Make sure you have a C++ compiler installed (such as g++, clang, or MSVC).

Steps to Run
1-Clone this repository:
git clone https://github.com/AqibTayyab/ATM-System.git

2-Navigate to the project directory:
cd ATM-System

3-Compile the program:
g++ main.cpp -o main

4-Run the executable:
./main

Example Usage
ATM Menu:
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 2
Enter amount to deposit: 500
$500 deposited successfully.
Enter your choice: 3
Enter amount to withdraw: 200
$200 withdrawn successfully.
Enter your choice: 1
Your current balance is: $300

Troubleshooting
💡 Invalid Input Handling: If you enter a non-numeric input, the program might behave unexpectedly. Ensure you enter only valid numeric inputs.
💡 Insufficient Funds: If you try to withdraw more than your available balance, the system will prevent the transaction and display an error message.

Requirements
-C++ Compiler (g++, clang, MSVC, etc.)
-Any operating system (Windows, macOS, Linux)

License
This project is open-source and available under the MIT License.

Author
Created by Aqib. Feel free to contribute or suggest improvements!

🚀 Happy Coding! 🚀
