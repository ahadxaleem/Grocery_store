#include<iostream>
#include<conio.h>
#include<vector>
#include <Windows.h>
#include <iomanip>
#include"Header.h"
using namespace std;
void main() {
	//to switch between menus
	int menu = 1;
	//inner menu for inner operations and size for input quantity or weight
	int innereMnu,size;
	//to identify between pickup or delivery
	bool access;
	//maintaining cart
	vector<Item> cart;
	while (1) {
		system("cls");
		for (int i = 0; i < 10; i++)
		{
			cout << "****";
		}
		//printing and switching between menus
		switch (menu) {
		case 1:
			cout << "\n (1) Pickup \n (2) Delivery \n\n (3) Exit\n";
			for (int i = 0; i < 10; i++)
			{
				cout << "****";
			}
			cout << "\n Please select one option....\n";
			cin >> innereMnu;
			switch (innereMnu) {
			case 1:
				//access = 1 means pickup 
				access = 1;
				menu = 2;
				break;
			case 2:
				//access =0 means delivery
				access = 0;
				menu = 2;
				break;
			case 3:
				cout << "\nclosing application.......";
				Sleep(10);
				exit(0);
				break;
			default:
				cout << "Please select a valid option.....";
				break;
			}
			break;
		case 2:
			cout << "\n (1) Fresh Product \n (2) Meat and Seafood \n (3) Frozen Foods\n\n (4) Check out\n";
			for (int i = 0; i < 10; i++)
			{
				cout << "****";
			}
			cout << "\n Please select one option....\n";
			cin >> innereMnu;
			//switch menus
			switch (innereMnu) {
			case 1:
				menu = 3;
				break;
			case 2:
				menu = 4;
				break;
			case 3:
				menu = 5;
				break;
			case 4:
			{
				//on checkout calculating and printing total
				float total=0.0;
				system("cls");
				for (int i = 0; i < 20; i++)
				{
					cout << "****";
				}
				//get size of cart
				int size = cart.size();
				if (size != 0)
				{
					//printing name and price of every item in cart
					for (int i = 0; i < size; i++)
					{
						cout << "\n\t\t" << setw(12) << cart[i].getName() << "\t\t$\t\t" << cart[i].getPrice();
						total = total + cart[i].getPrice();
					}
					//prining total
					total = total + cart[size - 1].getTip() + cart[size - 1].getDelivery();
					cout << "\n\n\t\t" << setw(12) << "TIP" << "\t\t$\t\t" << cart[size - 1].getTip() << endl;
					cout << "\t\t" << setw(12) << "Delivery" << "\t\t$\t\t" << cart[size - 1].getDelivery() << endl;
					cout << "\t\t" << setw(12) << "" << "\t\t......................." << endl;
					cout << "\t\t" << setw(12) << "Total" << "\t\t$\t\t" << total << endl;
				}
				for (int i = 0; i < 20; i++)
				{
					cout << "****";
				}
				cout << endl;
				for (int i = 0; i < 20; i++)
				{
					cout << "****";
				}
				cout << "\nclosing application.......";
				Sleep(10);
				exit(0);
				break;
			}
				
			default:
				cout << "Please select a valid option.....";
				break;
			}
			break;
		case 3:
		{
			//in fresh products adding items to cart
			FreshProduct prod;
			//creating a temporay element of item
			Item temp;
			//if Delivery option selected
			if (access == 0)
			{
				prod.setDelivery(20);
				prod.setTip(5);
			}
			cout << "\n (1) gala apple\t\t$3.99/lb\n (2) bannanna\t\t$0.48/lb \n (3) grapes\t\t$2.99/lb\n\n (4) Return to Main Menu\n";
			for (int i = 0; i < 10; i++)
			{
				cout << "****";
			}
			cout << "\n Please select one option....\n";
			cin >> innereMnu;
			//dont take input when option (4) selected
			if (innereMnu != 4)
			{
				cout << "\n Please Enter weight of selected item in pounds \n";
				cin >> size;
			}
			//pushing a temp copy of item into cart
			switch (innereMnu) {
			case 1:
			{
				prod.setName("gala apple");
				prod.setPrice(3.99);
				prod.setPound(size);
				temp.setDelivery(prod.getDelivery());
				temp.setName(prod.getName());
				temp.setPrice(prod.getPrice());
				temp.setTip(prod.getTip());
				cart.push_back(temp);

				break;
			}
			case 2:
				prod.setName("bannanna");
				prod.setPrice(0.48);
				prod.setPound(size);
				temp.setDelivery(prod.getDelivery());
				temp.setName(prod.getName());
				temp.setPrice(prod.getPrice());
				temp.setTip(prod.getTip());
				cart.push_back(temp);

				break;
			case 3:
				prod.setName("grapes");
				prod.setPrice(2.99);
				prod.setPound(size);
				temp.setDelivery(prod.getDelivery());
				temp.setName(prod.getName());
				temp.setPrice(prod.getPrice());
				temp.setTip(prod.getTip());
				cart.push_back(temp);

				break;
			case 4:
				menu = 2;
				break;
			default:
				cout << "Please select a valid option.....";
				break;
			}
			break;
		}
		case 4:
		{
			//in fresh products adding items to cart
			FreshProduct prod;
			//creating a temporay element of item
			Item temp;
			//if Delivery option selected
			if (access == 0)
			{
				prod.setDelivery(20);
				prod.setTip(5);
			}
			cout << "\n (1) whole chicken\t$6.99/lb\n (2) ground beef\t$4.99/lb \n (3) salmon\t\t$9.99/lb\n\n (4) Return to Main Menu\n";
			for (int i = 0; i < 10; i++)
			{
				cout << "****";
			}
			cout << "\n Please select one option....\n";
			cin >> innereMnu;
			//dont take input when option (4) selected
			if (innereMnu != 4)
			{
				cout << "\n Please Enter weight of selected item in pounds \n";
				cin >> size;
			}
			//pushing a temp copy of item into cart
			switch (innereMnu) {
			case 1:
				prod.setName("whole chicken");
				prod.setPrice(6.99);
				prod.setPound(size);
				temp.setDelivery(prod.getDelivery());
				temp.setName(prod.getName());
				temp.setPrice(prod.getPrice());
				temp.setTip(prod.getTip());
				cart.push_back(temp);

				break;
			case 2:
				prod.setName("ground beef");
				prod.setPrice(4.99);
				prod.setPound(size);
				temp.setDelivery(prod.getDelivery());
				temp.setName(prod.getName());
				temp.setPrice(prod.getPrice());
				temp.setTip(prod.getTip());
				cart.push_back(temp);

				break;
			case 3:
				prod.setName("salmon");
				prod.setPrice(9.99);
				prod.setPound(size);
				temp.setDelivery(prod.getDelivery());
				temp.setName(prod.getName());
				temp.setPrice(prod.getPrice());
				temp.setTip(prod.getTip());
				cart.push_back(temp);

				break;
			case 4:
				menu = 2;
				break;
			default:
				cout << "Please select a valid option.....";
				break;
			}
			break;
		}
		case 5:
		{
			//in measured product adding item to cart
			MeasuredProduct prod1;
			//creating a temporay element of item
			Item temp;
			//if Delivery option selected
			if (access == 0)
			{
				prod1.setDelivery(20);
				prod1.setTip(5);
			}
			cout << "\n (1) waffles\t\t$6.99\n (2) pizza\t\t$4.99\n (3) popsicales\t\t$2.99\n\n (4) Return to Main Menu\n";
			for (int i = 0; i < 10; i++)
			{
				cout << "****";
			}
			cout << "\n Please select one option....\n";
			cin >> innereMnu;
			//dont take input when option (4) selected
			if (innereMnu != 4)
			{
				cout << "\n Please Enter quantity of selected item\n";
				cin >> size;
			}
			//pushing a temp copy of item into cart
			switch (innereMnu) {
			case 1:
				prod1.setName("waffles");
				prod1.setPrice(6.99);
				prod1.setQuantity(size);
				temp.setDelivery(prod1.getDelivery());
				temp.setName(prod1.getName());
				temp.setPrice(prod1.getPrice());
				temp.setTip(prod1.getTip());
				cart.push_back(temp);

				break;
			case 2:
				prod1.setName("pizza");
				prod1.setPrice(4.99);
				prod1.setQuantity(size);
				temp.setDelivery(prod1.getDelivery());
				temp.setName(prod1.getName());
				temp.setPrice(prod1.getPrice());
				temp.setTip(prod1.getTip());
				cart.push_back(temp);

				break;
			case 3:
				prod1.setName("popsicales");
				prod1.setPrice(2.99);
				prod1.setQuantity(size);
				temp.setDelivery(prod1.getDelivery());
				temp.setName(prod1.getName());
				temp.setPrice(prod1.getPrice());
				temp.setTip(prod1.getTip());
				cart.push_back(temp);

				break;
			case 4:
				menu = 2;
				break;
			default:
				cout << "Please select a valid option.....";
				break;
			}
			break;
		}
		}
		
	}

}