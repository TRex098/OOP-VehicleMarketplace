#include "Class.h"

Buyer::Buyer(Seller* s, Vehicle* v, Auction* a) : S1(s), V1(v), Au(a) {}

void Buyer::Register()
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
    const char userType[] = "Buyer";

    outFile << userType << " " << name << " " << email << " " << password << endl;
    outFile.close();

    cout << "\n --<Registration successful! Data has been saved to the File>-- \n" << endl;
}

int Buyer::Login()
{
    char name[20], email[15], password[10], storedName[20], storedEmail[15], storedPassword[10];
    const char userType[] = "Buyer";
    char storedUserType[7];
    bool found = 0;

    cout << "\n\n -<Login>- " << endl;
    cout << "Enter Name : ";
    cin >> name;
    strcpy_s(Name, name);
    cout << "Enter Email : ";
    cin >> email;
    strcpy_s(Email, email);
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
            found = 1;
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

void Buyer::contactSeller(int model)
{
    const char* sellerContactInfo = S1->getContactInfo();

    cout << "Calling seller " << S1->getName() << " at " << sellerContactInfo << endl;

    ofstream notificationFile("Notifications.txt", ios::app);

    if (notificationFile.is_open())
    {
        notificationFile << "Notification for Seller: " << S1->getName() << "\t";
        notificationFile << "Buyer: " << getName() << "\t";
		notificationFile << "Email: " << getEmail() << "\t";
        notificationFile << "Vehicle: " << V1->getModelName(model) << "\n\n";
        notificationFile.close();
        cout << "Notification sent to seller. Check 'notification.txt' for details.\n";
    }
    else
    {
        cout << "Unable to open 'notification.txt' for writing.\n";
    }
}

const char* Buyer::getName() const
{
    return Name;
}

const char* Buyer::getEmail() const
{
    return Email;
}