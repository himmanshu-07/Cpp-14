#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node{
	int data;
	struct node *next;
};

node *front = new node;
node *rear = new node;

int menu(){
	cout<<"Enter one Option\n";
	cout<<"1. Insert\n2. Delete \n3. Display \n4. Exit\n";
	int x;
	cin>>x;
	return x;
}


void Insert(){
	cout<<"Enter the Information\n";
	struct node *q = new node;
	cin>>q->data;
	q->next=NULL;
	if(front==NULL){
		front = rear = q;
	}
	else{
		rear->next = q;
		rear = q;
	}
}

void Pop(){
	if(front == NULL){
		cout<<"UNDERFLOW!!!!!\n";
		return ;
	}
	else if(front==rear){
		int info = front->data;
		front = rear = NULL;
		cout<<info<<" Deleted\n";
	}
	else{
		int info;
		info = front->data;
		cout<<info<<" Deleted\n";
		front = front->next;
	}
}
	
void Display(){
	if(front == NULL){
		cout<<"Nothing to preview\n";
		return ;
	}
	else{
		struct node *tmp;
		tmp = front;
		while(tmp!=NULL){
			cout<<tmp->data<<"\t";
			tmp = tmp->next;
		}
	}
	cout<<endl;
}
		
		
int main(){
	int choice;
	do{
		choice = menu();
		switch(choice){
			case 1:		Insert();
						break;
						
			case 2: 	Pop();
						break;
						
			case 3:		Display();
						break;
						
			case 4:		break;
						
			default: 	cout<<"Enter a VALID INPUT!!!!!!!\n";
						break;
			}
								
	}while(choice!=4);
	return 0;
}
