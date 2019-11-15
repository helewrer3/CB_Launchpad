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
	//cin >> x;
	while(n--){
		cin >> x;
		insertAtTail(head, x);
	}
}

node* merge(node* a, node* b) {

	if (a == NULL) {
		return b;
	}
	else if (b == NULL) {
		return a;
	}
	node*c;
	if (a->data <= b->data) {
		c = a;
		c->next = merge(a->next, b);
	}
	else {
		c = b;
		c->next = merge(a, b->next);
	}
	return c;
}

void print(node *&head){
	node* temp = head;
	while(temp != NULL){
		cout << temp-> data << " ";
		temp=temp->next;
	}
}

int main(){
	int T;
	cin >> T;
	int n1, n2;
	while(T--){
		cin >> n1;
		node *h1 = NULL;
		buildList(h1,n1);
		cin >> n2;
		node *h2 = NULL;
		buildList(h2,n2);
		
		node *c = merge(h1,h2);
		
		print(c);
		cout<<endl;
	}
	return 0;
}