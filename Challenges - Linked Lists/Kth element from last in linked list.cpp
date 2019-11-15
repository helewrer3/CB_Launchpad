#include<iostream>

using namespace std;

static int size = 0;

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

void buildList(node *&head){
	int x;
	cin >> x;
	while(x != -1){
		insertAtTail(head, x);
		size++;
		cin >> x;
	}
}

int main() {
	node *h1 = NULL;
	buildList(h1);
	int k;
	cin >> k;
	node *tmp = h1;
	for(int i = 0; i < size-k; i++)
		tmp = tmp->next;
	
	cout << tmp->data;
	return 0;
}