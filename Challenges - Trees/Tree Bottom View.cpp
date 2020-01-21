#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
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

int height(node* root){
	if(root == NULL)
		return 0;
		
	return max(height(root->left), height(root->right)) + 1;
}

unordered_map<int, pair<int, int> > horLvl; //key -> hor;val -> data, ver

int h_min = INT_MAX;
int h_max = INT_MIN;

void printBottom(node* root, int hor, int ver){
	if(root == NULL){
		return;
	}
	{
		if(horLvl[hor].second <= ver){
			horLvl[hor].first = root->data;
			horLvl[hor].second = ver;
		}
	}
	printBottom(root->left, hor-1, ver+1);
	printBottom(root->right, hor+1, ver+1);

	h_min = min(h_min, hor);
	h_max = max(h_max, hor);
}

int main(){
	node *root = buildTreeLevelWise();
	printBottom(root, 0, 0);

	for(int it = h_min; it <= h_max; it++)
		cout << horLvl[it].first << " ";
	return 0;
}