//SIMPLE LOGIN AUTHENTICATION SYSTEM

#include <iostream>
using namespace std;

int main()
{
    string username, password;

    string correctUsername = "admin";
    string correctPassword = "12345";

    cout << "===== Login Authentication System =====\n";

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword)
    {
        cout << "Login successful! Welcome, " << username << endl;
    }
    else
    {
        cout << "Invalid username or password.\n";
    }

    return 0;
}