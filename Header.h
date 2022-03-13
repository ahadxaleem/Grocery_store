#pragma once
#include<string>
using namespace std;
//class of items
class Item{
private:
	int delivery;
	string name;
	float price;
	int tip;
public:
	Item() {
		delivery = 0;
		tip = 0;
	}
	void setDelivery(int temp) {
		delivery = temp;
	}
	void setName(string temp) {
		name = temp;
	}
	void setPrice(float temp) {
		price = temp;
	}
	void setTip(int temp) {
		tip = temp;
	}
	int getDelivery() {
		return delivery;
	}
	string getName() {
		return name;
	}
	float getPrice() {
		return price;
	}
	int getTip() {
		return tip;
	}
};

//class of fresh products
class FreshProduct : public Item {
private:
	int pounds;
public:
	FreshProduct() {
		pounds = 0;
	}
	void calcPrice() {
		setPrice(pounds * getPrice());
	}
	void setPound(int temp) {
		pounds = temp;
		calcPrice();
	}
	int getPound() {
		return pounds;
	}
};

//class of measured product
class MeasuredProduct : public Item {
private:
	int quantity;
public:
	MeasuredProduct() {
		quantity = 0;
	}
	void calcPrice() {
		setPrice(quantity * getPrice());
	}
	void setQuantity(int temp) {
		quantity = temp;
		calcPrice();
	}
	int getQuantity() {
		return quantity;
	}
};