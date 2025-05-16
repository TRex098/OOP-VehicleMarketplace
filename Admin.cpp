#include "Class.h"

Admin::Admin() {}

int Admin::Login()
{
    char name[20], email[15], password[10], storedName[20], storedEmail[15], storedPassword[10];
    const char userType[] = "Admin";
    char storedUserType[7];
    bool found = false;

    cout << "\n\n -<Admin Login>- " << endl;
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
        cout << "\n+-------------------------------+" << endl;
        cout << "| --<Admin Login Successful!>-- |" << endl;
        cout << "+-------------------------------+" << endl;

        return 1;
    }
    else
    {
        cout << "\n --<Login failed! Incorrect Email or Password.>-- \n" << endl;
    }
}


void Admin::inspectionReport()
{
    char customerName[50], engineCapacity[20], transmissionType[20], inspectionDate[20], chassisNo[20];
    char engineNo[20], registrationNo[20], fuelType[20], petrolType[20], color[20], location[50];
    char registeredCity[50], currentCity[50], carFeatures[100];
    int rating;
    double mileage;

    
    cout << "\n\n------ Inspection Report ------" << endl;
    cout << "Customer/Dealer Name:  ";
    cin.getline(customerName, 50);
    cin.ignore();
    cout << "Engine-capacity:  ";
    cin.getline(engineCapacity, 20);
    cin.ignore();
    cout << "Mileage:  ";
    cin >> mileage;
    cin.ignore();
    cout << "Transmission Type:  ";
    cin.getline(transmissionType, 20);
    cout << "Inspection Date:  ";
    cin.getline(inspectionDate, 20);
    cout << "Chassis No:  ";
	cin.getline(chassisNo, 20);
    cout << "Engine No:  ";
	cin.getline(engineNo, 20);
    cout << "Registration No:  ";
	cin.getline(registrationNo, 20);
    cout << "Fuel Type:  ";
	cin.getline(fuelType, 20);
    cout << "Petrol Type:  ";
	cin.getline(petrolType, 20);
    cout << "Color:  ";
	cin.getline(color, 20);
    cout << "Location:  ";
	cin.getline(location, 50);
    cout << "Registered City:  ";
	cin.getline(registeredCity, 50);
    cout << "Current City:  ";
	cin.getline(currentCity, 50);
    cout << "Car Features:  ";
    cin.getline(carFeatures, 100);
    cout << "Rating of the Vehicle: ";
    cin >> rating;
    cin.ignore();
    cout << "------------------------------\n" << endl;

    cout << "\n\nEnter Name of Vehicle : ";
    cin.ignore();
    char vehicleName[50];
	cin.getline(vehicleName, 50);
    cout << "Enter the filename for the inspection report : ";
    char filename[100];
    cin.getline(filename, 100);

    // Create and open a text file for writing
    ofstream outFile(filename);

    // Check if the file is open
    if (outFile.is_open()) 
    {
        // Write the inspection report data to the file
        outFile << "------ Inspection Report ------" << endl;
		outFile << "Car Name: " << vehicleName << endl;
        outFile << "Customer/Dealer Name: " << customerName << endl;
        outFile << "Engine-capacity: " << engineCapacity << endl;
        outFile << "Mileage: " << mileage << endl;
        outFile << "Transmission Type: " << transmissionType << endl;
        outFile << "Inspection Date: " << inspectionDate << endl;
        outFile << "Chassis No: " << chassisNo << endl;
        outFile << "Engine No: " << engineNo << endl;
        outFile << "Registration No: " << registrationNo << endl;
        outFile << "Fuel Type: " << fuelType << endl;
        outFile << "Petrol Type: " << petrolType << endl;
        outFile << "Color: " << color << endl;
        outFile << "Location: " << location << endl;
        outFile << "Registered City: " << registeredCity << endl;
        outFile << "Current City: " << currentCity << endl;
        outFile << "Car Features: " << carFeatures << endl;
        outFile << "Rating of the Vehicle: " << rating << endl;
        outFile << "------------------------------" << endl;

        // Close the file
        outFile.close();

        cout << "\n -<Inspection report has been saved to " << filename << endl;
    }
    else 
    {
        cout << "\n -<Error: Unable to open the file for writing>- " << endl;
    }

}