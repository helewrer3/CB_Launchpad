#include<bits/stdc++.h>
using namespace std;

map <pair<int, int>, list<int> > bank;
int h_min = INT_MAX;
int h_max = INT_MIN;

class node{
	public:
		node* left;
		node* right;
		int data;

		node(int d){
			left = right = NULL;
			data = d;
		}
};

node* buildTreeLevelWise(){

	int d;
	cin>>d;

	node*root = new node(d);
	queue<node*> q;
	q.push(root);

	while(!q.empty()){

		node*f = q.front();
		q.pop();
		int c1,c2;
		cin>>c1>>c2;

		if(c1!=-1){
			f->left = new node(c1);
			q.push(f->left);
		}
		if(c2!=-1){
			f->right = new node(c2);
			q.push(f->right);
		}
	}
	return root;
}

void fillBank(node* root, int v, int h){
	if(root == NULL)
		return;
	
	bank[make_pair(h, v)].push_back(root->data);

	fillBank(root->left, v+1, h-1);
	fillBank(root->right, v+1, h+1);
	h_max = max(h_max, h);
	h_min = min(h_min, h);
}

int main(){
	int V;
	cin >> V;
	node *root = buildTreeLevelWise();
	fillBank(root, 0, 0);
	for(int i = h_min; i <= h_max; i++){
		for(int j = 0; j < V; j++){
			if(bank.count(make_pair(i, j))){
				for(auto it:bank[make_pair(i, j)])
					cout << it << " ";
			}
		}
		cout << endl;
	}

	return 0;
}