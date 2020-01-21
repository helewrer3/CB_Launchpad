#include<bits/stdc++.h>
#define ll long long
using namespace std;
class node{
	public:
		node* left;
		node* right;
		ll data;
		node(int d){
			left = right = NULL;
			data = d;
		}

};

node* insert(node* root, int d){
	if(root == NULL){
		root = new node(d);
		return root;
	}

	if(d < root->data)
		root->left = insert(root->left, d);
	else
		root->right = insert(root->right, d);
	
	return root;
}

void preOrder(node* root){
	if(root == NULL)
		return;
	
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

int main(){
	ll T;
	cin >> T;
	while(T--){
		ll N, Q;
		cin >> N;
		ll data;
		vector<ll> V;
		while(N--){
			cin >> data;
			V.push_back(data);
		}
		cin >> Q;
		while(Q--){
			cin >> data;
			for(auto it = V.begin(); it != V.end(); it++)
				if(*it == data){
					V.erase(it);
					break;
				}
		}
		node* root = NULL;
		for(auto it:V){
			root = insert(root, it);
		}
		preOrder(root);
		cout << endl;
	}
	return 0;
}