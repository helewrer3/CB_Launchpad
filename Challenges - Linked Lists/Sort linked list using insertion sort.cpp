#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
	}
};

void insertAtTail(node*&head, int d){
    if (head == NULL) {
        head = new node(d);
        return;
    }
    node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new node(d);
}

void buildList(node *&head, int n){
    int data;
    while (n--) {
        cin >> data;
        insertAtTail(head, data);
    }
}

void printList(node *head){
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertionSort(node *&head){
	node *i = head->next;
	node *j = NULL;
	while(i != NULL){
		j = head;
		while(j != i){
			if(i -> data < j -> data){
				swap(j->data, i->data);
			}
			j = j -> next;
		}
		i = i -> next;
	}
}

int main(){
	int n;
	cin >> n;
	node *head = NULL;
	buildList(head, n);
	insertionSort(head);
	printList(head);
	return 0;
}