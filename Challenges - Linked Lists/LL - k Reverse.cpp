#include<bits/stdc++.h>
#define ll long long
using namespace std;

class node{
	public:
		ll data;
		node* next;
		node(int d){
			data = d;
			next = NULL;
		}
};

void insertAtTail(node *&head, ll data){
	if(head == NULL){
		head = new node(data);
		return;
	}

	node* temp = head;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = new node(data);
	return;
}

void buildList(node *&head, ll n){
	ll data;
	while(n--){
		cin >> data;
		insertAtTail(head, data);
	}
	return;
}

void printList(node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
	return;
}

void kRev(node *&head, ll k, ll n){
	node *sp = head;
	node *tmp = head;
	ll loop = n/k;
	ll loop_var = 1;
	ll arr[k] = {0};

	while(loop_var <= loop){
		for(ll i = 0; i < k; i++){
			arr[i] = tmp->data;
			tmp = tmp->next;
		}

		for(ll i = 0; i < k; i++){
			sp->data = arr[k-1-i];
			sp = sp->next;
		}

		sp = head;
		tmp = head;

		for(ll i = 1; i <= k*loop_var; i++){
			sp = sp->next;
			tmp = tmp->next;
		}
		loop_var++;
	}

	return;
}

node* reverserec(node* head) {
    //base case
    if (head == NULL || head->next == NULL) {
        return head;
    }

    node* smallLL = reverserec(head->next);
    node* curr = head;
    curr->next->next = curr;
    curr->next = NULL;
    return smallLL;

}


int main() {
	//Read Variables
	ll n, k;
	node *head = NULL;
	cin >> n >> k;

	//Read LL
	buildList(head, n);

	//k Rev LL
	if(k < n)
		kRev(head, k, n);
	else
		head = reverserec(head);

	//Print LL
	printList(head);
	return 0;
}