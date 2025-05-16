#include "Class.h"

Auction::Auction() {}

void Auction::viewAuction()
{
	ifstream openFile("Auction.txt");

	if (!openFile.is_open())
	{
		cout << "\nError Opening the File" << endl;
	}

	char ch;

	while (openFile.get(ch) && ch != '\n')
	{
		cout << ch;
	}
	cout << endl;

	while (openFile.get(ch))
	{
		cout << ch;
	}

	openFile.close();
}

void Auction::auctionBattle(int model)
{
	double buyerPrice = 0;
	if (model == 1)
	{
		srand(time(0));
		double otherBidderPrice = 8500;

		cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << " -<Participating in Auction for Harley Davidson>- \n" << endl;

		cout << "\n -<STARTING PRICE>-  [  8500$  ] " << endl; 

		char choice;
		cout << "\nDo you want to Bid (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
			aP:
			cout << "--|> Enter your price for Vehicle : ";
			cin >> buyerPrice;

			if (buyerPrice <= 8500)
			{
				cout << "\n\n -<Bid should be greater than starting Price>- \n" << endl;
				goto aP;
			}
		}
		else
		{
			cout << "\n\n -<You didn't participates in the Bid>- " << endl;
		}

	
		//For generating other buyer bid
		double price = rand() % 501 + buyerPrice;
		otherBidderPrice = price;

		cout << "--|> Price offered by Other Buyer : " << otherBidderPrice << endl;
		
		A:
		cout << "\nDo you want to Bid (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
			cout << "--|> Enter your price for Vehicle : ";
			cin >> buyerPrice;

			double price = rand() % 501;
			otherBidderPrice += price;

			cout << "--|> Price offered by Other Buyer : " << otherBidderPrice << endl;

			if (buyerPrice > otherBidderPrice)
			{
				cout << "\n\n -<You WON the Bid>- " << endl;
			}
			else
			{
				goto A;
			}
		}
		else
		{
			cout << "\n\n -<You LOST the Bid>- " << endl;
		}
	}

	if (model == 2)
	{
		srand(time(0));
		double otherBidderPrice = 6000;

		cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << " -<Participating in Auction for Yamaha MT-750>- \n" << endl;

		cout << "\n -<STARTING PRICE>-  [  6000$  ] " << endl;

		char choice;
		cout << "\nDo you want to Bid (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
		bP:
			cout << "--|> Enter your price for Vehicle : ";
			cin >> buyerPrice;

			if (buyerPrice <= 6000)
			{
				cout << "\n\n -<Bid should be greater than starting Price>- \n" << endl;
				goto bP;
			}
		}
		else
		{
			cout << "\n\n -<You didn't participates in the Bid>- " << endl;
		}


		//For generating other buyer bid
		double price = rand() % 501 + buyerPrice;
		otherBidderPrice = price;

		cout << "--|> Price offered by Other Buyer : " << otherBidderPrice << endl;

	B:
		cout << "\nDo you want to Bid (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
			cout << "--|> Enter your price for Vehicle : ";
			cin >> buyerPrice;

			double price = rand() % 501;
			otherBidderPrice += price;

			cout << "--|> Price offered by Other Buyer : " << otherBidderPrice << endl;

			if (buyerPrice > otherBidderPrice)
			{
				cout << "\n\n -<You WON the Bid>- " << endl;
			}
			else
			{
				goto B;
			}
		}
		else
		{
			cout << "\n\n -<You LOST the Bid>- " << endl;
		}
	}

	if (model == 3)
	{
		srand(time(0));
		double otherBidderPrice = 20000;

		cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << " -<Participating in Auction for Toyota Camry>- \n" << endl;

		cout << "\n -<STARTING PRICE>-  [  20,000$  ] " << endl;

		char choice;
		cout << "\nDo you want to Bid (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
		cP:
			cout << "--|> Enter your price for Vehicle : ";
			cin >> buyerPrice;

			if (buyerPrice <= 20000)
			{
				cout << "\n\n -<Bid should be greater than starting Price>- \n" << endl;
				goto cP;
			}
		}
		else
		{
			cout << "\n\n -<You didn't participates in the Bid>- " << endl;
		}


		//For generating other buyer bid
		double price = rand() % 1001 + buyerPrice;
		otherBidderPrice = price;

		cout << "--|> Price offered by Other Buyer : " << otherBidderPrice << endl;

	C:
		cout << "\nDo you want to Bid (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
			cout << "--|> Enter your price for Vehicle : ";
			cin >> buyerPrice;

			double price = rand() % 1001;
			otherBidderPrice += price;

			cout << "--|> Price offered by Other Buyer : " << otherBidderPrice << endl;

			if (buyerPrice > otherBidderPrice)
			{
				cout << "\n\n -<You WON the Bid>- " << endl;
			}
			else
			{
				goto C;
			}
		}
		else
		{
			cout << "\n\n -<You LOST the Bid>- " << endl;
		}
	}

	if (model == 4)
	{
		srand(time(0));
		double otherBidderPrice = 18000;

		cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << " -<Participating in Auction for Honda Civic>- \n" << endl;

		cout << "\n -<STARTING PRICE>-  [  18,000$  ] " << endl;

		char choice;
		cout << "\nDo you want to Bid (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
		dP:
			cout << "--|> Enter your price for Vehicle : ";
			cin >> buyerPrice;

			if (buyerPrice <= 18000)
			{
				cout << "\n\n -<Bid should be greater than starting Price>- \n" << endl;
				goto dP;
			}
		}
		else
		{
			cout << "\n\n -<You didn't participates in the Bid>- " << endl;
		}


		//For generating other buyer bid
		double price = rand() % 1001 + buyerPrice;
		otherBidderPrice = price;

		cout << "--|> Price offered by Other Buyer : " << otherBidderPrice << endl;

		D:
		cout << "\nDo you want to Bid (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
			cout << "--|> Enter your price for Vehicle : ";
			cin >> buyerPrice;

			double price = rand() % 1001;
			otherBidderPrice += price;

			cout << "--|> Price offered by Other Buyer : " << otherBidderPrice << endl;

			if (buyerPrice > otherBidderPrice)
			{
				cout << "\n\n -<You WON the Bid>- " << endl;
			}
			else
			{
				goto D;
			}
		}
		else
		{
			cout << "\n\n -<You LOST the Bid>- " << endl;
		}
	}

	if (model == 5)
	{
		srand(time(0));
		double otherBidderPrice = 30000;

		cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << " -<Participating in Auction for Ford Mustang>- \n" << endl;

		cout << "\n -<STARTING PRICE>-  [  30,000$  ] " << endl;

		char choice;
		cout << "\nDo you want to Bid (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
		eP:
			cout << "--|> Enter your price for Vehicle : ";
			cin >> buyerPrice;

			if (buyerPrice <= 30000)
			{
				cout << "\n\n -<Bid should be greater than starting Price>- \n" << endl;
				goto eP;
			}
		}
		else
		{
			cout << "\n\n -<You didn't participates in the Bid>- " << endl;
		}


		//For generating other buyer bid
		double price = rand() % 1501 + buyerPrice;
		otherBidderPrice = price;

		cout << "--|> Price offered by Other Buyer : " << otherBidderPrice << endl;

	E:
		cout << "\nDo you want to Bid (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
		{
			cout << "--|> Enter your price for Vehicle : ";
			cin >> buyerPrice;

			double price = rand() % 1501;
			otherBidderPrice += price;

			cout << "--|> Price offered by Other Buyer : " << otherBidderPrice << endl;

			if (buyerPrice > otherBidderPrice)
			{
				cout << "\n\n -<You WON the Bid>- " << endl;
			}
			else
			{
				goto E;
			}
		}
		else
		{
			cout << "\n\n -<You LOST the Bid>- " << endl;
		}
	}
}