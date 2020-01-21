#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
		node(int d){
			left = NULL;
			right = NULL;
			data = d;
		}
};

node* insert(node* root, int d){
	if(root == NULL){
		root = new node(d);
		return root;
	}

	if(d > root->data)
		root->right = insert(root->right, d);
	else
		root->left = insert(root->left, d);
	
	return root;
}

node* build(node* root, int arr[], int n){
	for(int i = 0; i < n; i++)
		root = insert(root, arr[i]);
	return root;
}

void preOrder(node* root){
	if(root == NULL)
		return;
	
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void keyPrint(node* root, int st, int ed){
	if(root == NULL)
		return;

	keyPrint(root->left, st, ed);
	if(root->data >= st and root->data <= ed)
		cout << root->data << " ";
	keyPrint(root->right, st, ed);
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int arr[n];
		cout << "# Preorder : ";
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		node* root = NULL;
		root = build(root, arr, n);
		preOrder(root);
		sort(arr, arr+n);
		int st, ed;
		cin >> st >> ed;
		cout << endl <<"# Nodes within range are : ";
		keyPrint(root, st, ed);
		cout << endl;
	}
	return 0;
}