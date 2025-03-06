#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to register a new user
void registerUser() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Save the username and password to a file
    ofstream file("users.txt", ios::app);  // Open file in append mode
    file << username << " " << password << endl;  // Write to file
    file.close();

    cout << "Registration successful!\n";
}

// Function to login a user
bool loginUser() {
    string username, password, fileUsername, filePassword;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Open file to check credentials
    ifstream file("users.txt");
    bool loginSuccess = false;

    // Read file line by line and check for matching username and password
    while (file >> fileUsername >> filePassword) {
        if (fileUsername == username && filePassword == password) {
            loginSuccess = true;
            break;
        }
    }
    file.close();

    if (loginSuccess) {
        cout << "Login successful!\n";
        return true;
    } else {
        cout << "Invalid username or password.\n";
        return false;
    }
}

// Main menu function
int main() {
    int choice;

    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        registerUser();
    } else if (choice == 2) {
        loginUser();
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
