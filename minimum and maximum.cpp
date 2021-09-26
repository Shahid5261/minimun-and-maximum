//cse-19-43
//program to display minimum and maximum no.
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
}*head,*tail=NULL;
void createnode(int value){
	struct node* newnode=new node();
	newnode->data=value;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		tail=newnode;
	}
	else{
		tail->next=newnode;
		tail=newnode;
	}
}
void minimum(){
	struct node* a=head;
	int min;
	if(head==NULL){
		cout<<"List is empty";
	}
	else{
		min=head->data;
		while(a!=NULL){
			if(min>a->data){
				min=a->data;
			}
			a=a->next;
		}
		cout<<"Minimum value node in  the list:"<<min;
	}
}
void maximum(){
	struct node* a=head;
	int max;
	if(head==NULL){
		cout<<"List is empty";
	}
	else{
		max=head->data;
		while(a!=NULL){
			if(max<a->data){
				max=a->data;
			}
			a=a->next;
		}
		cout<<"Maximum value node in the list:"<<max;
	}
}
int main(){
	createnode(56000);
	createnode(123);
	createnode(678);
	createnode(12345);
	minimum();
	cout<<endl;
	maximum();
	return 0;
}

