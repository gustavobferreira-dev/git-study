/**
 * @file account.h
 * @brief Header file for banking system operations
 * @author [Your Name]
 * @date 2026
 * 
 * This header file declares all functions and global variables
 * used in the banking system application.
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <clocale>
#include <iostream>
using namespace std;

// Global variables for account management
extern float current_balance;           // Current account balance
extern float balance_history[10];       // Array to store transaction history
extern float amount;                    // Transaction amount
extern int resposta;                    // User menu choice
extern int history_index;               // Index for tracking transactions

// Function declarations
/**
 * @brief Displays the current account balance
 * @param current_balance The balance to display
 */
void show_balance(float current_balance);

/**
 * @brief Processes a deposit transaction
 * @param amount The amount to deposit
 */
void deposit(float amount);

/**
 * @brief Processes a withdrawal transaction
 * @param amount The amount to withdraw
 */
void withdraw(float amount);

/**
 * @brief Displays the complete transaction history
 * @param balance_history Array containing all transactions
 */
void show_history(float balance_history[10]);

#endif