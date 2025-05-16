#include <iostream>
#include "Class.h"

using namespace std;

int main()
{
    Vehicle* vehiclePtr = new Vehicle(); 
    Auction* auctionPtr = new Auction();  
    Seller* sellerPtr = new Seller();
    int choice;


    cout << "\n -<Welcome to Pak Wheels>- \n" << endl;
menu:
    cout << "\n -<LOGIN MENU>- " << endl;
    cout << "1- Admin" << endl;
    cout << "2- Seller" << endl;
    cout << "3- Buyer" << endl;
    cout << "Input : ";
    cin >> choice;

    if (choice <= 0 || choice >= 4)
    {
        cout << "\n--<Please select the correct option>--\n";
        goto menu;
    }

    switch (choice)
    {
    case 1:
    {
        int admin_choice;
        Admin A1;

        cout << "\n\n -<Admin Interface>- " << endl;
        aI:
        cout << "1- Login" << endl;
        cout << "2- Logout" << endl;
        cout << "Input : ";
        cin >> admin_choice;

        if (admin_choice <= 0 || admin_choice >= 3)
        {
            cout << "\n\n -<Invalid Input>-" << endl;
            goto aI;
        }

        if (admin_choice == 1)
        {
            int found = A1.Login();

            if (found == 1)
            {
                int choice;
                cout << "\n\n -<Admin Menu>- " << endl;
            BM:
                cout << "1- Add Vehicle" << endl;
                cout << "2- Remove Vehicle" << endl;
                cout << "3- Manage Inspection Requests" << endl;
                cout << "4- Add Notifications" << endl;
                cout << "5- Remove Notifications and Comments" << endl;
                cout << "6- Rate a Vehicle" << endl;
                cout << "7- Logout" << endl;
                cout << "Input : ";
                cin >> choice;

                if (choice <= 0 || choice >= 8)
                {
                    cout << "\n -<Invalid Input>- " << endl;
                    goto BM;
                }

                switch (choice)
                {
                    case 1:
                    {
                        int choice_add;

					    cout << "\n\n -<Adding Vehicle>- " << endl; 
                        aV:
					    cout << "1- New Vehicle" << endl; 
					    cout << "2- Used Vehicle" << endl;
					    cout << "3- Bikes" << endl;
                        cout << "Input : ";
					    cin >> choice_add;

                        //validation
                        if (choice_add <= 0 || choice_add >= 4)
                        {
                            cout << "\n -<Invalid Input>- " << endl;
                            goto aV;
                        }

					    if (choice_add == 1)
                        {
                            cout << "\n\n -<Vehicle Details>-" << endl;
                            A1.V2->newVehicles();

						    cout << "\n -<Adding Vehicle>- " << endl;
						    A1.V2->addVehicle(choice_add);
                        }
                        else if (choice_add == 2)
                        {
						    cout << "\n\n -<Vehicle Details>-" << endl;
                            A1.V2->usedVehicles();

                            cout << "\n -<Adding Vehicle>- " << endl;
                            A1.V2->addVehicle(choice_add);
                        }
                        else if (choice_add == 3)
                        {
						    cout << "\n\n -<Vehicle Details>" << endl;
						    A1.V2->Bikes();

                            cout << "\n -<Adding Vehicle>- " << endl;
                            A1.V2->addVehicle(choice_add);
                        }

                        break;
                    }
                    case 2:
                    {
                        break;
                    }
                    case 3:
                    {
                        A1.inspectionReport();
                        break;
                    }
                    case 4:
                    {
                        break;
                    }
                    case 5:
                    {
                        break;
                    }
                    case 6:
                    {
                        break;
                    }
                    default:
                    {
                        goto menu;
                    }
                }

            }
            else
            {
                goto menu;
            }
        }

        break;
    }
    case 2:
    {
        int seller_choice;
        Seller S1;

        cout << "\n\n -<Seller Interface>- " << endl;
        cout << "1- Register" << endl;
        cout << "2- Login" << endl;
        cout << "Input : ";
        cin >> seller_choice;

        switch (seller_choice)
        {
        case 1:
        {
            S1.Register();
            break;
        }
        case 2:
        {
            int found = S1.Login();

            if (found == 1)
            {
                int choice;
                cout << "\n\n -<Seller Menu>- " << endl;
                
                cout << "1- View Vehicle" << endl;
                cout << "2- Add Vehicle" << endl;
                cout << "3- Remove Vehicle" << endl;
                cout << "4- Register in Auction" << endl;
                cout << "5- View Notifications" << endl;
                cout << "6- Logout" << endl;
                cout << "Input : ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                {
                    int choice;
                    cout << "\n\n -<INFO>- " << endl;
                    cout << "1- New Vehicles" << endl;
                    cout << "2- Used Vehicles" << endl;
                    cout << "3- Bikes" << endl;
                    cout << "Input : ";
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                    {
                        int model = 0;

                        cout << "\n\n -<New Vehicles Details>- " << endl;
                        S1.V1->newVehicles();

                        cout << "\nEnter a Model to get Details : ";
                        cin >> model;
                        S1.V1->newVehiclesDetails(model);
                        break;
                    }
                    case 2:
                    {
                        int model = 0;

                        cout << "\n\n -<Used Vehicles Details>- " << endl;
                        S1.V1->usedVehicles();

                        cout << "\nEnter a Model to get Details : ";
                        cin >> model;
                        S1.V1->usedVehiclesDetails(model);
                        break;
                    }
                    case 3:
                    {
                        int model = 0;

                        cout << "\n\n -<Bikes Details>- " << endl;
                        S1.V1->Bikes();

                        cout << "\nEnter a Model to get Details : ";
                        cin >> model;
                        S1.V1->BikesDetails(model);
                        break;
                    }
                    }
                    break;
                    }
                case 4:
                {
                    cout << "\n\n -<Auction Interface>- " << endl;
                    S1.Au->viewAuction();
                    char choice;
                    cout << "\n\n -> Do you want to add a Vehicle to Auction(Y/N) : ";
                    cin >> choice;

                    if (choice == 'y' || choice == 'Y')
                    {
                        S1.Au->addAuction();
                    }
                    break;

                }
                case 2:
                {
                    int choice_add;

                    cout << "\n\n -<Adding Vehicle>- " << endl;
                aVS:
                    cout << "1- New Vehicle" << endl;
                    cout << "2- Used Vehicle" << endl;
                    cout << "3- Bikes" << endl;
                    cout << "Input : ";
                    cin >> choice_add;

                    //validation
                    if (choice_add <= 0 || choice_add >= 4)
                    {
                        cout << "\n -<Invalid Input>- " << endl;
                        goto aVS;
                    }

                    if (choice_add == 1)
                    {
                        cout << "\n\n -<Vehicle Details>-" << endl;
                        S1.V1->newVehicles();

                        cout << "\n -<Adding Vehicle>- " << endl;
                        S1.V1->addVehicle(choice_add);
                    }
                    else if (choice_add == 2)
                    {
                        cout << "\n\n -<Vehicle Details>-" << endl;
                        S1.V1->usedVehicles();

                        cout << "\n -<Adding Vehicle>- " << endl;
                        S1.V1->addVehicle(choice_add);
                    }
                    else if (choice_add == 3)
                    {
                        cout << "\n\n -<Vehicle Details>" << endl;
                        S1.V1->Bikes();

                        cout << "\n -<Adding Vehicle>- " << endl;
                        S1.V1->addVehicle(choice_add);
                    }
                    break;
                }
                case 3:
                {
                    break;
                }
                case 5:
                {
                    break;
                }
                default:
                {
                    goto menu;
                }
                }
            }
            break;
        }
        }
        break;
    }
    case 3:
    {
        int buyer_choice;

        // Create a Buyer instance with the constructor
        Buyer B1(sellerPtr, vehiclePtr, auctionPtr);


        cout << "\n\n -<Buyer Interface>- " << endl;
        cout << "1- Register" << endl;
        cout << "2- Login" << endl;
        cout << "Input : ";
        cin >> buyer_choice;

        switch (buyer_choice)
        {
        case 1:
        {
            B1.Register();
            break;
        }
        case 2:
        {
            int found = B1.Login();

            if (found == 1)
            {
                int choice;
                cout << "\n\n -<Buyer Menu>- " << endl;
                bM:
                cout << "1- View Vehicle" << endl;
                cout << "2- View Auction" << endl;
                cout << "3- View Notifications" << endl;
                cout << "4- Logout" << endl;
                cout << "Input : ";
                cin >> choice;

                if (choice < 0 || choice > 5)
                {
                    cout << "\n -<Invalid Input>- " << endl;
                    goto bM;
                }

                switch (choice)
                {
                case 1:
                {
                    int choice;
                    cout << "\n\n -<INFO>- " << endl;
                    cout << "1- New Vehicles" << endl;
                    cout << "2- Used Vehicles" << endl;
                    cout << "3- Bikes" << endl;
                    cout << "Input : ";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                    {
                        int model = 0;

                        cout << "\n\n -<Vehicle Details>- " << endl;
                        B1.V1->newVehicles();

                        cout << "\nEnter a Model to get Details : ";
                        cin >> model;
                        B1.V1->newVehiclesDetails(model);

                        int input = 0;
                        cout << "\n\n -<MENU>- " << endl;
                        cout << "1- Contact Seller" << endl;
                        cout << "2- Request Inspection Report" << endl;
                        cout << "3- Add a Comment on Car" << endl;
                        cout << "4- Main Menu" << endl;
                        cout << "Input : ";
                        cin >> input;

                        if (input == 1)
                        {
                            int model, choice;

                            cout << "\n\n -<Contact Seller>- " << endl;
                            cout << "1- New Vehicles" << endl;
                            cout << "2- Sellers of used Vehicles" << endl;
                            cout << "3- Sellers of Bikes" << endl;
                            cin >> choice;

                            if (choice == 1)
                            {
                                cout << "Enter SR# from to table to Contact : ";
                                cin >> model;
                                B1.contactSeller(model);
                            }
                            else if (choice == 2)
                            {
                                cout << "Enter SR# from to table to Contact : ";
                                cin >> model;
                                B1.contactSeller(model);
                            }
                            else if (choice == 2)
                            {
                                cout << "Enter SR# from to table to Contact : ";
                                cin >> model;
                                B1.contactSeller(model);
                            }

                            break;
                        }

                        break;
                    }
                    case 2:
                    {
                        int model = 0;

                        cout << "\n\n -<Vehicle Details>- " << endl;
                        B1.V1->usedVehicles();

                        cout << "\nEnter a Model to get Details : ";
                        cin >> model;
                        B1.V1->usedVehiclesDetails(model);

                        int input = 0;
                        cout << "\n\n -<MENU>- " << endl;
                        cout << "1- Contact Seller" << endl;
                        cout << "2- Request Inspection Report" << endl;
                        cout << "3- Add a Comment on Car" << endl;
                        cout << "4- Main Menu" << endl;
                        cout << "Input : ";
                        cin >> input;

                        if (input == 1)
                        {
                            int model, choice;

                            cout << "\n\n -<Contact Seller>- " << endl;
                            cout << "1- New Vehicles" << endl;
                            cout << "2- Sellers of used Vehicles" << endl;
                            cout << "3- Sellers of Bikes" << endl;
                            cin >> choice;

                            if (choice == 1)
                            {
                                cout << "Enter SR# from to table to Contact : ";
                                cin >> model;
                                B1.contactSeller(model);
                            }
                            else if (choice == 2)
                            {
                                cout << "Enter SR# from to table to Contact : ";
                                cin >> model;
                                B1.contactSeller(model);
                            }
                            else if (choice == 2)
                            {
                                cout << "Enter SR# from to table to Contact : ";
                                cin >> model;
                                B1.contactSeller(model);
                            }

                            break;
                        }
                    }
                    case 3:
                    {
                        int model = 0;

                        cout << "\n\n -<Bike Details>- " << endl;
                        B1.V1->Bikes();

                        cout << "\nEnter a Bike Model to get Details : ";
                        cin >> model;
                        B1.V1->BikesDetails(model);

                        int input = 0;
                        cout << "\n\n -<MENU>- " << endl;
                        cout << "1- Contact Seller" << endl;
                        cout << "2- Request Inspection Report" << endl;
                        cout << "3- Add a Comment on Car" << endl;
                        cout << "4- Main Menu" << endl;
                        cout << "Input : ";
                        cin >> input;

                        if (input == 1)
                        {
                            int model, choice;

                            cout << "\n\n -<Contact Seller>- " << endl;
                            cout << "1- New Vehicles" << endl;
                            cout << "2- Sellers of used Vehicles" << endl;
                            cout << "3- Sellers of Bikes" << endl;
                            cin >> choice;

                            if (choice == 1)
                            {
                                cout << "Enter SR# from to table to Contact : ";
                                cin >> model;
                                B1.contactSeller(model);
                            }
                            else if (choice == 2)
                            {
                                cout << "Enter SR# from to table to Contact : ";
                                cin >> model;
                                B1.contactSeller(model);
                            }
                            else if (choice == 2)
                            {
                                cout << "Enter SR# from to table to Contact : ";
                                cin >> model;
                                B1.contactSeller(model);
                            }
                        }

                        break;
                    }

                    }
                    break;
                }
                case 2:
                {
                    int model = 0;
                    cout << "\n\n -<Auction Interface>- " << endl;
                    B1.Au->viewAuction();

                    cout << "\n Choose Vehicle to participate in Auction : ";
                    cin >> model;

                    B1.Au->auctionBattle(model);
                    break;  // Add break statement here
                }
                case 3:
                {
                    break;
                }
                default:
                {
                    goto menu;
                }
                }
                break;
            }
        }
        break;
        }
    }
    }




	//Deleting all the dynamically allocated memory
    delete vehiclePtr;
    delete auctionPtr;
	delete sellerPtr;    

    return 0;
}