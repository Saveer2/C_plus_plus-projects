#include <iostream>
#include <string>
using namespace std;

class shop{
private:	
	void bill(){
	cout<<"\n\t ** Total Bill **"<<endl;
	cout<<"--------------------------------"<<endl;
	}
	void items(){
		cout<<"\n** What you want to buy : "<<endl;
		cout<<"1. Shirt\n2. Pant\n3. Cap\n4. Shirt and Pant"<<endl;
	}
	void manage(int choice,double shirt,double pant,double cap,string currency){
		if(choice==1){
			bill();
			cout<<"\n1. Shirt Price : "<<shirt<<" "<<currency<<endl;
			cout<<"* Total Price : "<<shirt<<" "<<currency<<endl;
		}
		else if(choice==2){
			bill();
			cout<<"\n1. Pant Price : "<<pant<<" "<<currency<<endl;
			cout<<"* Total Price : "<<pant<<" "<<currency<<endl;
		}
		else if(choice==3){
			bill();
			cout<<"\n1. Cap Price : "<<cap<<" "<<currency<<endl;
			cout<<"* Total Price : "<<cap<<" "<<currency<<endl;
		}
		else if(choice==4){
			bill();
			cout<<"\n1. Shirt Price : "<<shirt<<" "<<currency<<endl;
			cout<<"2. Pant Price : "<<pant<<" "<<currency<<endl;
			cout<<"* Total Price : "<<shirt+pant<<" "<<currency<<endl;
		}
	}
public :
	void inr(){
		double shirt = 1000, pant = 1200, cap = 250;
		int cc;
		string currency = "Rupees";
	
		items();
		cout<<"Enter your choice : ";
		cin>>cc;
		manage(cc,shirt,pant,cap,currency);
	}
	void usd(){
		double shirt = 11.51, pant = 13.82, cap = 2.88;
		int cc;
		string currency = "$";
	
		items();
		cout<<"Enter your choice : ";
		cin>>cc;
		manage(cc,shirt,pant,cap,currency);
	}
	void eur(){
		double shirt = 10.99, pant =13.19, cap = 2.75;
		int cc;
		string currency = "Euro";
	
		items();
		cout<<"Enter your choice : ";
		cin>>cc;
	
		manage(cc,shirt,pant,cap,currency);
	}
};	
int main(){
	shop s1;
	int choice;
	cout<<"\t** Shop **\n"<<endl;
	cout<<"In which currency you want to buy : \n";
	cout<<"1. INR\n2. USD\n3. EUR\n";
	cout<<"Enter your choice : ";
	cin>>choice;
	
	switch(choice){
		case 1 :
			s1.inr();
			break;
		case 2 :
			s1.usd();
			break;
		case 3 :
			s1.eur();
			break;
		default:
			cout<<"Invalid choice!!"<<endl;
	}
	return 0;
}
