#include <bits/stdc++.h>
using namespace std;
class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;

protected:
    int balance;

private:
    string password;

public:
    BankAccount(string account_holder, string address, int age, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand() % 100000000;
        this->balance = 0;
        cout << "\nYour account no is " << this->account_number << endl;
    }
    int show_balance(string password)
    {
        if (this->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
        return 0;
    }
    int deposit(int amount)
    {
        if (amount > 0)
        {
            this->balance += amount;
            return amount;
        }
        return 0;
    };
    int withdraw(int amount)
    {
        if (this->balance >= amount)
        {
            this->balance -= amount;
            return amount;
        }
        return 0;
    };
};
void *create_account();
void *find_account(BankAccount **all_accounts, int total_account);
void load_accounts(BankAccount **all_accounts, int *total_account);

int main()
{
    int total_account = 0;
    int command = 1;
    int account_number;
    int balance;
    string password = "";
    BankAccount **all_accounts = new BankAccount *[100];
    BankAccount *account;

Flags:
    cout << "\n\t***ALL OPTIONS***\n\n";
    cout << "0. Exit" << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Show Info" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Withdraw" << endl;
    cout << "Please enter : ";
    cin >> command;
    if (command == 0)
    {
        return 0;
    }
    else if (command == 1)
    {
        account = (BankAccount *)create_account();
        all_accounts[total_account] = account;
        total_account++;
    }
    else if (command == 2)
    {
        if (total_account == 0)
        {
            cout << "Account Not Created" << endl;
            goto Flags;
        }

        account = (BankAccount *)find_account(all_accounts, total_account);
        if (account == NULL)
        {
            cout << "Account Not Found" << endl;
            goto Flags;
        }
        cout << "Enter Password: ";
        cin >> password;
        balance = account->show_balance(password);
        cout << "\n\t***Info***\n\n";
        cout << "Acccount No : " << account->account_number << endl;
        cout << "Name: " << account->account_holder << endl;
        cout << "Age: " << account->age << endl;
        cout << "Address: " << account->address << endl;
        if (balance == -1)
            cout
                << "Invalid password" << endl;
        else
            cout << "Balance: " << balance << endl;
        cout << "\n";
    }
    else if (command == 3)
    {
        account = (BankAccount *)find_account(all_accounts, total_account);
        cout << "Enter Amount : ";
        cin >> balance;
        command = 1;
        balance = account->deposit(balance);
        if (balance)
        {
            cout << "Deposit Successful" << endl;
        }
        else
        {
            cout << "Deposit Failed" << endl;
        }
    }

    else if (command == 4)
    {
        account = (BankAccount *)find_account(all_accounts, total_account);
        cout << "Enter Amount : ";
        cin >> balance;
        command = 1;
        balance = account->withdraw(balance);
        if (balance)
        {
            cout << "Withdraw Successful" << endl;
        }
        else
        {
            cout << "Withdraw Failed" << endl;
        }
    }
    else
    {
        cout << "Invalid command" << endl;
        command = 1;
    }
    goto Flags;
    return 0;
}
void *create_account()
{
    cout << "\n\t*** Create Account ***\n\n";
    string account_holder;
    string address;
    int age;
    string password;

    cout << "Enter your name : ";
    getline(cin, account_holder);
    getline(cin, account_holder);

    cout << "Enter your address : ";
    getline(cin, address);
    cout << "Enter your password : ";
    getline(cin, password);
    cout << "Enter your age : ";
    cin >> age;

    BankAccount *account = new BankAccount(account_holder, address, age, password);
    cout << "Successfully created account\n\n";
    return account;
}
void *find_account(BankAccount **all_accounts, int total_account)
{
    int account_number;
    cout << "Enter Account Number: ";
    cin >> account_number;
    BankAccount *account;
    account = NULL;
    for (int i = 0; i < total_account; i++)
    {
        if (all_accounts[i]->account_number == account_number)
        {
            account = all_accounts[i];
        }
    }
    return account;
}
// void load_accounts(BankAccount **all_accounts, int *total_account)
// {
//     string data;

//     int total_accounts = 0;
//     ifstream File("data.text");
//     getline(File, data);
//     total_accounts = stoi(data);
//     if (total_accounts == 0)
//     {
//         cout << "\n\n\tAccounts Load Failed\n\n";
//         return;
//     }
//     while (getline(File, data))
//     {
//         while (myText.length() > 0)
//         {

//         }
//     }
// }