#include<iostream>
#include<fstream>
using namespace std;
struct person{
	string name;
	string num;
};
int count=0;
const int max_contact=100;
person p[max_contact];

//Function 1
void add_contact(){
	if(count< max_contact){
	count++;
	cout<<"Enter the name:";
	getline(cin>>ws,p[count].name);
	cout<<"Enter the num:";
	getline(cin>>ws,p[count].num);
	
	cout<<"Contact added Successfully\n";
}
else{
	cout<<"Contact Book Reached it's limit\n";
}
}
void display(){
	if(count<=0){
		cout<<"Contact Book is Empty\n";
	}
	else{
		cout<<"No."<<"		||		Name		||		Num\n";
		for(int i=1;i<=count;i++){
			cout<<i<<".		||		"<<p[i].name<<"		||		"<<p[i].num<<endl;
		}
	}
}
void edit(){
	display();
	int index;
	cout<<"Enter Contact id\n";
	cin>>index;
	string nam;
	string number;
	if(index>0 && index<=count){
		cout<<"Enter the name\n";
		getline(cin>>ws,nam);
		cout<<"Enter the number\n";
		getline(cin>>ws,number);
		for(int i=1; i<=count;i++){
			if(index==i){
				p[i].name=nam;
				p[i].num=number;
			}
			else{
				cout<<"Contact Not found!\n";
			}	
		}
	}
	else{
			cout<<"Contact Not found!\n";
	}
}
void search(){
	int index;
	cout<<"Enter Contact id\n";
	cin>>index;
		if(index>0 && index<=count){
		for(int i=1; i<=count;i++){
			if(index==i){
				cout<<i<<".		||		"<<p[i].name<<"		||		"<<p[i].num<<endl;	
}}}
else{
         	cout<<"Contact Not found!\n";
}
}

void save(){
	ofstream file;
	file.open("Contact_book.txt");
		if(count<=0){
		file<<"Contact Book is Empty\n";
	}
	else{
		file<<"No."<<"		||		Name		||		Num\n";
		for(int i=1;i<=count;i++){
		file<<i<<".		||		"<<p[i].name<<"		||		"<<p[i].num<<endl;
		cout<<"Contact saved successfully!\n";
		}
	}
}
	
void delet(){
	display();
		int index;
	cout<<"Enter Contact id\n";
	cin>>index;
	if(index>0 && index<=count){
			for(int i=index; i<=count;i++){
			
				p[i]=p[i+1];
}
count--;}
else{
	cout<<"Contact Not found\n";
}}



int main(){int choice;
          
		  
		   while(true){
		  
		cout<<"1.Add Contact\n";
		cout<<"2.Display Contact\n";
		cout<<"3.Edit Contact\n";
		cout<<"4.Search Contact\n";
		cout<<"5.Save Contact\n";
		cout<<"6.Delete Contact\n";
		cout<<"7.To exit\n";
	  cout<<"-----------------------------------\n\n\n";
				cout<<"Enter your choice\n";
				cin>>choice;
	
		switch(choice){
			case 1:
			   add_contact();
			   save();
			   break;
			case 2:
			     display();
			     save();
				 break;
		    case 3:
			      edit();
			      save();
			      break;
			case 4:
				  search();
				  save();
				  break;
			case 5:
				   save();
				  break;
			case 6:
				 
				  delet();
				  save();
				  break;
			case 7:
				  return 0;
			default:
				cout<<"Invalid input\n";
	}
		}
	
	
	
	
}
