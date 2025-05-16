#pragma once

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;


class Notification
{
public:

	Notification();

	void AdminNotification();
	void SellersNotification();
	void BuyerNotification();

};

class Vehicle
{
private:

	char Model[20];

public:

	Vehicle();

	void newVehicles();
	void newVehiclesDetails(int model);
	void usedVehicles();
	void usedVehiclesDetails(int model);
	void Bikes();
	void BikesDetails(int model);

	const char* getModelName(int model) const;

	int sortVehicleData(char model);

	void addVehicle(int x);
	void removeVehicle(int y);
};

class Auction
{
public:

	Auction();

	void viewAuction();
	void addAuction();
	void auctionBattle(int model);
};

class Seller
{
private:

	char Name[20];
	char Email[20];
	char contactInfo[20];

public:

	Vehicle* V1;
	Auction* Au;
	Seller();

	const char* getName() const;
	const char* getContactInfo() const;

	void Register();
	int Login();


};

class Buyer
{
private:

	char Name[20];
	char Email[20];

public:

	Seller* S1;
	Vehicle* V1;
	Auction* Au;
	
	Buyer(Seller* s, Vehicle* v, Auction* a);

	void Register();
	int Login();
	void contactSeller(int model);
	
	const char* getName() const;
	const char* getEmail() const;
};



class Admin
{
public:

	Vehicle *V2;
	Admin();

	int Login();

	void inspectionReport();
};

