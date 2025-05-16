#include "Class.h"

Vehicle::Vehicle() {}

const char* Vehicle::getModelName(int model) const
{
    // Replace this with the actual implementation based on your needs
    switch (model)
    {
    case 1:
        return "Toyota Corolla";
    case 2:
        return "Honda Accord";
    case 3:
        return "Ford Fusion";
    case 4:
        return "Chevrolet Impala";
    case 5:
        return "Tesla Model Y";
    default:
        return "Unknown Model";
    }
}

void Vehicle::newVehicles()
{
    // Open the file
    ifstream inputFile("newVehicles.txt");

    // Check if the file is open
    if (!inputFile.is_open())
    {
        cout << "\nError opening the file." << endl;

    }

    char ch;
    //read the header
    while (inputFile.get(ch) && ch != '\n') 
    {
        cout << ch;
    }
    cout << endl;

    // Read and print each character from the file
    while (inputFile.get(ch)) 
    {
        cout << ch;
    }


    // Close the file
    inputFile.close();
}
void Vehicle::newVehiclesDetails(int model)
{
        char fileName[20];
        sprintf_s(fileName, "newVehicle%d.txt", model);

        cout << "\nVehicle Details # " << model << endl << endl;

        ifstream file(fileName);

        if (file.is_open()) 
        {
            char line[255];
            while (file.getline(line, 255)) 
            {
                cout << line << endl;
            }
            file.close();
        }
        else 
        {
            cout << "File not found" << endl;
        }
}

void Vehicle::usedVehicles()
{
    // Open the file
    ifstream inputFile("usedVehicles.txt");

    // Check if the file is open
    if (!inputFile.is_open())
    {
        cout << "Error opening the file." << endl;

    }

    char ch;
    //read the header
    while (inputFile.get(ch) && ch != '\n')
    {
        cout << ch;
    }
    cout << endl;

    // Read and print each character from the file
    while (inputFile.get(ch))
    {
        cout << ch;
    }
}
void Vehicle::usedVehiclesDetails(int model)
{
    char fileName[20];
    sprintf_s(fileName, "usedVehicle%d.txt", model);

    cout << "\nVehicle Details # " << model << endl << endl;

    ifstream file(fileName);

    if (file.is_open())
    {
        char line[255];
        while (file.getline(line, 255))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "File not found" << endl;
    }
}

void Vehicle::Bikes()
{
    // Open the file
    ifstream inputFile("Bikes.txt");

    // Check if the file is open
    if (!inputFile.is_open())
    {
        cout << "Error opening the file." << endl;

    }

    char ch;
    //read the header
    while (inputFile.get(ch) && ch != '\n')
    {
        cout << ch;
    }
    cout << endl;

    // Read and print each character from the file
    while (inputFile.get(ch))
    {
        cout << ch;
    }
}
void Vehicle::BikesDetails(int model)
{
    char fileName[20];
    sprintf_s(fileName, "Bike%d.txt", model);

    cout << "\nVehicle Details # " << model << endl << endl;

    ifstream file(fileName);

    if (file.is_open())
    {
        char line[255];
        while (file.getline(line, 255))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "File not found" << endl;
    }
}


int Vehicle::sortVehicleData(char model)
{
    return 1;
}

void Vehicle::addVehicle(int x)
{
    if (x == 1)
    {
        ofstream OutFile("newVehicles.txt", ios::app); // Open in append mode

        if (!OutFile.is_open())
        {
            cout << "\n\n -<File is not Found>- " << endl;
            return; // Exit the function on file open failure
        }

        char companyName[15], modelName[15], makeYear[] = "2023", vehicleName[15], cityName[15];
        double Price;

		cout << "\n\n -<Enter Details>- " << endl; 
        cout << "Enter Company Name : ";
        cin >> companyName;
        cout << "Enter Price : ";
		cin >> Price;
        cout << "Enter Model Name : ";
        cin >> modelName;
		cout << "Enter Vehicle Name : ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.getline(vehicleName, 15);
		cout << "Enter City Name : "; 
		cin >> cityName;
       
        int count = 5;
        count++;

        OutFile << count << "- " << companyName << "," << Price << "," << modelName << "," << makeYear << "," << vehicleName << "," << cityName << endl;

        OutFile.close();

        cout << "\n --<Vehicle added successfully! Data has been saved to the File>-- \n" << endl;
    }

    if (x == 2)
    {
        ofstream OutFile("usedVehicles.txt", ios::app); // Open in append mode

        if (!OutFile.is_open())
        {
            cout << "\n\n -<File is not Found>- " << endl;
            return; // Exit the function on file open failure
        }

        char companyName[15], modelName[15], makeYear[5], vehicleName[15], cityName[15];
        double Price;

        cout << "\n\n -<Enter Details>- " << endl;
        cout << "Enter Company Name : ";
        cin >> companyName;
        cout << "Enter Price : ";
        cin >> Price;
        cout << "Enter Model Name : ";
        cin >> modelName;
        cout << "Enter Make Year : ";
		cin >> makeYear;
        cout << "Enter Vehicle Name : ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.getline(vehicleName, 15);
        cout << "Enter City Name : ";
        cin >> cityName;

        int count = 5;
        count++;

        OutFile << count << "- " << companyName << "," << Price << "," << modelName << "," << makeYear << "," << vehicleName << "," << cityName << endl;

        OutFile.close();

        cout << "\n --<Vehicle added successfully! Data has been saved to the File>-- \n" << endl;
    }

    if (x == 3)
    {
        ofstream OutFile("Bikes.txt", ios::app); // Open in append mode

        if (!OutFile.is_open())
        {
            cout << "\n\n -<File is not Found>- " << endl;
            return; // Exit the function on file open failure
        }

        char companyName[15], modelName[15], makeYear[5], vehicleName[15], cityName[15];
        double Price;

        cout << "\n\n -<Enter Details>- " << endl;
        cout << "Enter Company Name : ";
        cin >> companyName;
        cout << "Enter Price : ";
        cin >> Price;
        cout << "Enter Model Name : ";
        cin >> modelName;
        cout << "Enter Make Year : ";
        cin >> makeYear;
        cout << "Enter Vehicle Name : ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.getline(vehicleName, 15);
        cout << "Enter City Name : ";
        cin >> cityName;

        int count = 5;
        count++;

        OutFile << count << "- " << companyName << ",$" << Price << "," << modelName << "," << makeYear << "," << vehicleName << "," << cityName << endl;

        OutFile.close();

        cout << "\n --<Vehicle added successfully! Data has been saved to the File>-- \n" << endl;
    }



}