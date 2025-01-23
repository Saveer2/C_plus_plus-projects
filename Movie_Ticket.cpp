#include <iostream>
using namespace std;
#include <string>

int status(){
	int a;
	cout<<"Updated Booking Status : "<<endl;
	cout<<"1. Inception | Seats Available : 20 | Price : 20$ | "<<endl;
	cout<<"2. Avatar | Seats Available : 15 | Price : 25$ |"<<endl;
	cout<<"3. Spider Man | Seats Available : 30 | Price : 26$ |"<<endl;
	
	cout<<" //Enter your choice : ";
	cin>>a;
	if(a==1){
				
		int b, c;
		cout<<" "<<endl;
		cout<<"*Enter number of tickets to book : ";
		cin>>b;
		if(b<= 20){
			c = b*20;
			cout<<" "<<endl;
				
			cout<<"// BOOKING SUCCESSFUL // "<<endl;
			cout<<"Movie Name : Inception"<<"\n"<<"Tickets Booked : "<<b<<"\n"<<"Total Cost : "<<c<<"$"<<endl;
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
		if(b<= 15){
			c = b*15;
			cout<<" "<<endl;
				
			cout<<"// BOOKING SUCCESSFUL // "<<endl;
			cout<<"Movie Name : Avatar"<<"\n"<<"Tickets Booked : "<<b<<"\n"<<"Total Cost : "<<c<<"$"<<endl;
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
		if(b<= 30){
			c = b*30;
			cout<<" "<<endl;
				
			cout<<"// BOOKING SUCCESSFUL // "<<endl;
			cout<<"Movie Name : Spider Man"<<"\n"<<"Tickets Booked : "<<b<<"\n"<<"Total Cost : "<<c<<"$"<<endl;
		}
		else{
			cout<<b<<" Tickets are not available!!"<<endl;
		}
	}
}
int booking(){
	int a;
			
	cout<<"Availabe Shows : "<<endl;
	cout<<"1. Inception | Seats Available : 200 | Price : 20$ | "<<endl;
	cout<<"2. Avatar | Seats Available : 150 | Price : 25$ |"<<endl;
	cout<<"3. Spider Man | Seats Available : 300 | Price : 26$ |"<<endl;
	cout<<" //Enter your choice : ";
	cin>>a;
	if(a==1){
				
		int b, c;
		cout<<" "<<endl;
		cout<<"*Enter number of tickets to book : ";
		cin>>b;
		c = b*20;
		cout<<" "<<endl;
				
		cout<<"// BOOKING SUCCESSFUL // "<<endl;
		cout<<"Movie Name : Inception"<<"\n"<<"Tickets Booked : "<<b<<"\n"<<"Total Cost : "<<c<<"$"<<endl;
		}
	else if(a==2){
		int b, c;
		cout<<" "<<endl;
		cout<<"*Enter number of tickets to book : ";
		cin>>b;
		c = b*25;
		cout<<" "<<endl;
				
		cout<<"// BOOKING SUCCESSFUL // "<<endl;
		cout<<"Movie Name : Avatar"<<"\n"<<"Tickets Booked : "<<b<<"\n"<<"Total Cost : "<<c<<"$"<<endl;
	}
	else if(a==3){
		int b, c;
		cout<<" "<<endl;
		cout<<"*Enter number of tickets to book : ";
		cin>>b;
		c = b*26;
		cout<<" "<<endl;
				
		cout<<"// BOOKING SUCCESSFUL // "<<endl;
		cout<<"Movie Name : Spider Man"<<"\n"<<"Tickets Booked : "<<b<<"\n"<<"Total Cost : "<<c<<"$"<<endl;
	}
}

int main(){
	
	int choice;
	
	cout<<"** Movie Ticket Booking System **"<<endl;
	cout<<" "<<endl;
	cout<<"1. Show Movies"<<endl;
	cout<<"2. Book Tickets"<<endl;
	cout<<"3. Check Booking Status"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<" //Enter your choice : ";
	cin>>choice;
	
	cout<<" "<<endl;
	
	switch(choice){
		case 1 :
			booking();
			break;
		case 2 :
			booking();
			break;
		case 3 :
			status();
			break;
		case 4 :
			cout<<"Thank You for using the Movie Ticket Booking System!!"<<endl;
			break;
		default:
			cout<<"Invalid Choice. Please Try Again!"<<endl;
			
			
	}
	
}
