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

unordered_map<int, pair<int, int> > horLvl; //key -> ver;val -> data, hor
int v_min = INT_MAX;
int v_max = INT_MIN;

void printRightView(node* root, int hor, int ver){
	if(root == NULL){
		return;
	}

	if(horLvl.count(ver)){
		if(horLvl[ver].second >= hor){
			horLvl[ver].first = root->data;
			horLvl[ver].second = hor;
		}
	}
	else{
		horLvl[ver].first = root->data;
		horLvl[ver].second = hor;
	}


	printRightView(root->left, hor-1, ver+1);
	printRightView(root->right, hor+1, ver+1);

	v_min = min(v_min, ver);
	v_max = max(v_max, ver);
}

int main(){
	node *root = buildTreeLevelWise();
	printRightView(root, 0, 0);

	for(int it = v_min; it <= v_max; it++)
		cout << horLvl[it].first << " ";
	return 0;
}