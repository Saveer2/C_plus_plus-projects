#include <iostream>
#include <string>
using namespace std;

class shoppingcart{
private :
	double totalprice = 0.0;
	
public :
	void additems(){
		string name;
		int a;
		
		cout<<"Enter the name of item : ";
		cin>>name;
		cout<<"Enter the amount of "<<name<<" : ";
		cin>>a;
		totalprice += a;
		cout<<"** Items Added Successfully!! \n\n"<<endl;
	}
	void view_items(){
		if(totalprice == 0){
			cout<<"Your cart is empty!!"<<endl;
			return;
		}
		cout<<"-----Your Shopping Cart-----\n"<<endl;
		cout<<"Product\t\tPrice"<<endl;
		cout<<"----------------------------------------";
		cout<<
	}
		
		
	
};


int main(){
	shoppingcart s1;
	int choice;
	
	do{
		
		cout<<"****  Online Shopping Cart  ****"<<endl;
		cout<<"1. Add Items \n"<<"2. View Cart \n"<<"3. Calculate Total \n"<<"4. Exit\n"<<endl;
		cout<<"Enter Your Choice : ";
		cin >> choice;
		
		switch (choice){
			case 1 :
				s1.additems();
				break;
			case 2 :
				break;
			case 3 :
				break;
			case 4 :
				break;
			default:
				cout<<"** Invalid Choice!!"<<endl;
		}
	}
	while(choice != 4);
	
	return 0;
}
