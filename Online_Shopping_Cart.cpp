#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Product{
public:
	string name;
	double price;
	
	Product(string n, double p):
		name(n),price(p){}
};

class Shoppingcart {
private:
	vector<Product> cart;
	
public:
	
	void additems(string name,double price){
		cart.push_back(Product(name,price));
		cout<<name<<" has been added to your cart!!\n\n"<<endl;
	}
	
	void viewitems(){
		if(cart.empty()){
			cout<<"--Your cart is empty!!"<<endl;
			return;
		}
		else{
			cout<<"-----YOUR SHOPPING CART-----\n"<<endl;
			cout<<"PRODUCT\t\tPRICE\n";
			cout<<"--------------------------"<<endl;
			for(const auto& product : cart){
				cout<<product.name<<"\t\t"<<product.price<<"\n";
			}
		}
		cout<<"\n\n";
	}
	
	void calculatetotal(){
		if(cart.empty()){
			cout<<"--Your cart is empty!!"<<endl;
			return;
		}
		else{
			double total = 0;
			for(const auto& product :cart){
				total += product.price;
			}
			cout<<"\n****  TOTAL COST : "<<total<<"\n\n";
		}
	}
};


int main(){
	Shoppingcart s1;
	int choice;
	double productprice;
	string productname;
	cout<<"****  Online Shopping Cart  ****"<<endl;
	cout<<"1. Add Items \n"<<"2. View Cart \n"<<"3. Calculate Total \n"<<"4. Exit\n"<<endl;
	
	do{
		
		cout<<"Enter Your Choice : ";
		cin >> choice;
		
		switch (choice){
			case 1 :
				cout<<"Enter Product Name : ";
				cin.ignore();
				getline(cin,productname);
				cout<<"Enter Product Price : ";
				cin>>productprice;
				s1.additems(productname,productprice);
				break;
			case 2 :
				s1.viewitems();
				break;
			case 3 :
				s1.calculatetotal();
				break;
			case 4 :
				cout<<"**  Exiting....\n**  Thank You for using Online Shopping Cart!!"<<endl;
				break;
			default:
				cout<<"** Invalid Choice!!"<<endl;
		}
	}
	while(choice != 4);
	return 0;
}
