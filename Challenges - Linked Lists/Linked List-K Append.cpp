#include<iostream>

using namespace std;

class node{
	public:
		node* next;
		int data;
		
		node(int d){
			data = d;
			next = NULL;
		}
};

void insertAtTail(node *&head, int d){
	if(head == NULL){
		head = new node(d);
		return;
	}
	
	node* temp = head;
	while(temp->next != NULL)
		temp = temp->next;
	temp -> next = new node(d);
}

void buildList(node *&head, int n){
	int x;
	while(n--){
		cin >> x;
		insertAtTail(head, x);
	}
}

void LstToFnt(node *&head){
	node *tmp = head;
	while(tmp->next->next != NULL){
		tmp = tmp->next;
	}
	tmp->next->next = head;
	head = tmp->next;
	tmp->next = NULL;
}

void print(node *&head){
	node* temp = head;
	while(temp != NULL){
		cout << temp-> data << " ";
		temp=temp->next;
	}
}

int main(){
	node* head = NULL;
	int n;
	cin >> n;
	buildList(head, n);
	int k;
	cin >> k;
	while(k--){
		LstToFnt(head);
	}
	print(head);
	return 0;
}