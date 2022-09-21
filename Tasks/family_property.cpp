#include<iostream>
using namespace std;

class Father{
protected:
	int father_money=100;
	int property=100;
};
class Mother : public Father
{
public:
	int mother_money=0;
	int property=0;
};
class Son : public Father
{ 
public:
	int son_money=0;
	int property=0;

};
class Daughter : public Mother
{
public:
	int daughter_money=0;
	int property=0;
};


void banner(void){
	cout<<"\n1.Father"<<endl;
	cout<<"2.Mother"<<endl;
	cout<<"3.Son"<<endl;
	cout<<"4.Daughter\n"<<endl;
}

int main(){
	int From,to,amount;
	char choice;
	// Father f;
	// Mother m;
	Son s;
	// Daughter d;
		
	do{
		banner();
		cout<<"Select From : ";
		cin>>From;
		banner();
		cout<<"Select To : ";
		cin>>to;
		cout<<"Enter Amount belongsto [0,100] : ";
		cin>>amount;
		
		int *reciever,*sender;
	//From selection
		if(From == 1){
			sender=&s.father_money;
		}
		if(From == 2){
			sender=&s.mother_money;
		}
		if(From == 3){
			sender=&s.son_money;
		}
		if(From == 4){
			sender=&d.daughter_money;
		}
	// to selection 
		if(to == 1){
			reciever=&m.father_money;
		}
		if(to == 2){
			reciever=&s.mother_money;
		}
		if(to == 3){
			reciever=&s.son_money;
		}
		if(to == 4){
			reciever=&d.daughter_money;
		}

		*reciever = *reciever + amount;
		*sender = *sender - amount;

		// m.money = f.money;
		// f.money = f.money - m.money;
		cout<<"\nFather's Money : "<<s.father_money<<endl;
		cout<<"Mother's Money : "<<s.mother_money<<endl;
		cout<<"Son's Money : "<<s.son_money<<endl;
		cout<<"daughter's Money : "<<d.daughter_money<<endl<<"\n";

		cout<<"\nDo u want to continue (y/n) : ";
		cin>>choice;
	}while(choice == 'y');
	return 0;
}
