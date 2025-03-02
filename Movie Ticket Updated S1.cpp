#include <iostream>
#include <string>
using namespace std;

class booking{
private:
	void names(){
		cout<<"1. Inception  | Seats Available : 200 | Price : 20$ | "<<endl;
		cout<<"2. Avatar     | Seats Available : 150 | Price : 25$ |"<<endl;
		cout<<"3. Spider Man | Seats Available : 300 | Price : 26$ |"<<endl;
		cout<<"----------------------------------------------------"<<endl;
	}
	void Options(int a){
		if(a==1){
				
			int b, c;
			cout<<" "<<endl;
			cout<<"*Enter number of tickets to book : ";
			cin>>b;
			if (b<= 200){
				c = b*20;
				cout<<" "<<endl;
				cout<<"----------------------------------------------------"<<endl;
				cout<<"\t// BOOKING SUCCESSFUL // "<<endl;
				cout<<"**Movie Name : Inception"<<"\n"<<"**Tickets Booked : "<<b<<"\n"<<"**Total Cost : "<<c<<"$"<<endl;
			}
			else{
				cout<<b<<" Tickets are not available!!"<<endl;	
			}
		}
		else if(a==2){
			int b, c;
			cout<<" "<<endl;
			cout<<"*Enter number of tickets to book : ";
			cin>>b;
			if (b<=150){
				c = b*25;
				cout<<" "<<endl;
				cout<<"----------------------------------------------------"<<endl;
				cout<<"// BOOKING SUCCESSFUL // "<<endl;
				cout<<"**Movie Name : Avatar"<<"\n"<<"**Tickets Booked : "<<b<<"\n"<<"**Total Cost : "<<c<<"$"<<endl;
			}
			else{
				cout<<b<<" Tickets are not available!!"<<endl;	
			}	
		}
		else if(a==3){
			int b, c;
			cout<<" "<<endl;
			cout<<"*Enter number of tickets to book : ";
			cin>>b;
			if (b<=300){
				c = b*26;
				cout<<" "<<endl;
				cout<<"----------------------------------------------------"<<endl;
				cout<<"// BOOKING SUCCESSFUL // "<<endl;
				cout<<"**Movie Name : Spider Man"<<"\n"<<"**Tickets Booked : "<<b<<"\n"<<"**Total Cost : "<<c<<"$"<<endl;
			}
			else{
				cout<<b<<" Tickets are not available!!"<<endl;	
			}	
		}
	}
public :
	int status(){
		int a;
		cout<<"Updated Booking Status : "<<endl;
		names();
	
		cout<<" //Enter your choice : ";
		cin>>a;
		Options(a);
	}
	int book(){
		int a;
			
		cout<<"\t** Availabe Shows : "<<endl;
		names();
		cout<<" //Enter your choice : ";
		cin>>a;
		Options(a);	
	}	
};

int main(){
	booking b1;
	int choice;
	
	cout<<"----------------------------------------------------"<<endl;
	cout<<"\n\t** Movie Ticket Booking System **\n"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"1. Show Movies \n2. Book Tickets \n3. Check Booking Status \n4. Exit"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<" //Enter your choice : ";
	cin>>choice;
	
	cout<<" "<<endl;
	
	switch(choice){
		case 1 :
			b1.book();
			break;
		case 2 :
			b1.book();
			break;
		case 3 :
			b1.status();
			break;
		case 4 :
			cout<<"Thank You for using the Movie Ticket Booking System!!"<<endl;
			break;
		default:
			cout<<"Invalid Choice. Please Try Again!"<<endl;		
	}
	return 0;	
}
