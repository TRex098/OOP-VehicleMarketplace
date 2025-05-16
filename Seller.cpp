#include "Class.h"

const char* Seller::getName() const
{
    return Name;
}

const char* Seller::getContactInfo() const
{
    return contactInfo;
}

Seller::Seller() {}

void Seller::Register()
{
    char name[20], email[15], password[10];

    cout << "\n\n -<Register>- " << endl;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Email: ";
    cin >> email;
    cout << "Enter new Password : ";
    cin >> password;

    ofstream outFile("user.txt", ios::app);

    if (!outFile)
    {
        cout << "\n --<Error opening the File for writing!>-- \n" << endl;
        return;
    }
    const char userType[] = "Seller";

    outFile << userType << " " << name << " " << email << " " << password << endl;
    outFile.close();

    cout << "\n --<Registration successful! Data has been saved to the File>-- \n" << endl;
}

int Seller::Login()
{
    char name[20], email[15], password[10], storedName[20], storedEmail[15], storedPassword[10];
    const char userType[] = "Seller";
    char storedUserType[7];
    bool found = false;

    cout << "\n\n -<Login>- " << endl;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Email : ";
    cin >> email;
    cout << "Enter Password : ";
    cin >> password;

    ifstream inFile("user.txt");

    if (!inFile)
    {
        cout << "\n --<Error opening the File for reading!>-- \n" << endl;
        return 0;
    }

    while (inFile >> storedUserType >> storedName >> storedEmail >> storedPassword)
    {
        if (strcmp(userType, storedUserType) == 0 && strcmp(name, storedName) == 0 && strcmp(email, storedEmail) == 0 && strcmp(password, storedPassword) == 0)
        {
            found = true;
            break;
        }
    }

    inFile.close();

    if (found)
    {
        cout << "\n+-------------------------+" << endl;
        cout << "| --<Login Successful!>-- |" << endl;
        cout << "+-------------------------+" << endl;
        return 1;
    }
    else
    {
        cout << "\n --<Login failed! Incorrect Email or Password.>-- \n" << endl;
        return 0;
    }
}
