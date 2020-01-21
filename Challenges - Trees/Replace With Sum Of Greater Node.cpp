#include<bits/stdc++.h>
#define ll long long
using namespace std;

class node{
	public:
		ll data;
		node* left;
		node* right;
		
		node(ll d)
		{
			data=d;
			left=NULL;
			right=NULL;
		}
};

node* buildTree(ll arr[], ll st, ll ed){
	if(st > ed)
		return NULL;
	
	ll mid = (st+ed)/2;

	node* root = new node(arr[mid]);

	root->left = buildTree(arr, st, mid-1);
	root->right = buildTree(arr, mid+1, ed);
	return root;
}

void preorder(node* root){
	if(root == NULL){
		return;
	}
    
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
	
}

int main(){
	ll N;
	cin >> N;
	ll arr[N];
	ll sum = 0;
	for(ll i = 0;  i < N; i++){
		cin >> arr[i];
		sum += arr[i];
	}

	ll sum_arr[N];
	sum_arr[0] = sum;
	for(ll i = 1;  i < N; i++){
		sum -= arr[i-1];
		sum_arr[i] = sum;
	}

	node* root = buildTree(sum_arr, 0, N-1);

	preorder(root);

	return 0;
}