/**
 * @file main.cpp
 * @brief Main program for the Banking System Application
 * @author [Your Name]
 * @date 2026
 * 
 * This is the entry point of the banking system application.
 * It provides a menu-driven interface for users to manage their bank account.
 */

#include "account.h"

/**
 * @brief Main function - Entry point of the application
 * @return 0 on successful program termination
 */
int main() {
    // Set locale to Portuguese for proper character encoding
    setlocale(LC_ALL, "Portuguese");
    
    // Main program loop
    while (true) {
        // Display main menu
        cout << "\n======================================" << endl;
        cout << "       SISTEMA BANCARIO" << endl;
        cout << "======================================" << endl;
        cout << "\n1 - Ver saldo" << endl;
        cout << "2 - Depositar" << endl;
        cout << "3 - Sacar" << endl;
        cout << "4 - Ver historico" << endl;
        cout << "0 - Sair" << endl;
        cout << "\nEscolha uma opcao: ";
        cin >> resposta;
        
        // Process user choice
        switch (resposta) {
            // Case 1: Show balance
            case 1:
                show_balance(current_balance);
                break;
            
            // Case 2: Deposit money
            case 2:
                cout << "\nDigite o valor a ser depositado: R$ ";
                cin >> amount;
                deposit(amount);
                break;
            
            // Case 3: Withdraw money
            case 3:
                cout << "\nDigite o valor a ser sacado: R$ ";
                cin >> amount;
                withdraw(amount);
                break;
            
            // Case 4: Show transaction history
            case 4:
                show_history(balance_history);
                break;
            
            // Case 0: Exit program
            case 0:
                cout << "\nObrigado por usar o Sistema Bancario!" << endl;
                cout << "Encerrando programa..." << endl << endl;
                return 0;
            
            // Invalid option
            default:
                cout << "\n[ERRO] Opcao invalida! Tente novamente." << endl;
                break;
        }
    }
    
    return 0;
}