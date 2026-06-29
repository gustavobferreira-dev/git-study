/**
 * @file account.cpp
 * @brief Implementation of banking system operations
 * @author [Your Name]
 * @date 2026
 * 
 * This file contains the implementation of all banking operations
 * including deposits, withdrawals, balance inquiries, and transaction history.
 */

#include "account.h"

// Global variable definitions
float current_balance = 1000;           // Initial balance: 1000
float balance_history[10] = {0};        // Transaction history (max 10 transactions)
float amount = 0;                       // Temporary variable for transactions
int resposta = 0;                       // User menu selection
int history_index = 0;                  // Counter for transaction history

/**
 * @brief Displays the current account balance
 * @param current_balance The balance amount to display
 */
void show_balance(float current_balance) {
    cout << "\n=== SALDO DA CONTA ===" << endl;
    cout << "Seu saldo atual: R$ " << current_balance << endl << endl;
}

/**
 * @brief Processes a deposit transaction
 * @param amount The amount to be deposited
 * 
 * Adds the deposit amount to the current balance and records it in history.
 * Maximum of 10 transactions can be stored.
 */
void deposit(float amount) {
    // Validate input
    if (amount <= 0) {
        cout << "\n[ERRO] Valor de deposito invalido! Digite um valor positivo." << endl << endl;
        return;
    }
    
    // Check if history is full
    if (history_index < 10) {
        current_balance += amount;
        balance_history[history_index] = amount;
        history_index++;
        
        cout << "\n[SUCESSO] Deposito de R$ " << amount << " realizado com sucesso!" << endl;
        cout << "Novo saldo: R$ " << current_balance << endl << endl;
    } else {
        cout << "\n[ERRO] Historico cheio! Nao eh possivel fazer mais transacoes." << endl << endl;
    }
}

/**
 * @brief Processes a withdrawal transaction
 * @param amount The amount to be withdrawn
 * 
 * Removes the withdrawal amount from the current balance if funds are available.
 * Records the transaction in history.
 */
void withdraw(float amount) {
    // Validate amount
    if (amount <= 0) {
        cout << "\n[ERRO] Valor de saque invalido! Digite um valor positivo." << endl << endl;
        return;
    }
    
    // Check if sufficient balance
    if (amount > current_balance) {
        cout << "\n[ERRO] Saldo insuficiente para realizar o saque!" << endl;
        cout << "Saldo disponivel: R$ " << current_balance << endl << endl;
        return;
    }
    
    // Check if history is full
    if (history_index < 10) {
        current_balance -= amount;
        balance_history[history_index] = -amount;  // Negative value indicates withdrawal
        history_index++;
        
        cout << "\n[SUCESSO] Saque de R$ " << amount << " realizado com sucesso!" << endl;
        cout << "Novo saldo: R$ " << current_balance << endl << endl;
    } else {
        cout << "\n[ERRO] Historico cheio! Nao eh possivel fazer mais transacoes." << endl << endl;
    }
}

/**
 * @brief Displays the complete transaction history
 * @param balance_history Array containing all recorded transactions
 * 
 * Shows all deposits (positive values) and withdrawals (negative values)
 * along with the final account balance.
 */
void show_history(float balance_history[10]) {
    cout << "\n=== HISTORICO DE TRANSACOES ===" << endl;
    
    // Check if any transactions exist
    if (history_index == 0) {
        cout << "Nenhuma transacao realizada ainda!" << endl << endl;
        return;
    }
    
    // Display all transactions
    for (int i = 0; i < history_index; i++) {
        cout << "Transacao " << i + 1 << ": ";
        
        if (balance_history[i] > 0) {
            cout << "Deposito de +R$ " << balance_history[i] << endl;
        } else if (balance_history[i] < 0) {
            cout << "Saque de -R$ " << (balance_history[i] * -1) << endl;
        }
    }
    
    cout << "\nSaldo final: R$ " << current_balance << endl << endl;
}