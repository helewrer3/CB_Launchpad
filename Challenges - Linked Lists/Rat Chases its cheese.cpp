#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isValid(char maze[1000][1000], int path[1000][1000],int row, int col, int n, int m){
	if(row >= 0 and row < n and col >= 0 and col < m and maze[row][col] == 'O' and path[row][col] == 0)
		return true;
	
	return false;
}

void prntPth(int path[1000][1000], int n, int m){
	for(int row = 0; row < n; row++){
		for(int col = 0; col < m; col++){
			cout << path[row][col] << " ";
		}
		cout << endl;
	}
}

bool fndPth(char maze[1000][1000], int path[1000][1000], int row, int col, int n, int m){
	if(row == n-1 and col == m-1){
		path[row][col] = 1;
		prntPth(path, n, m);
		return true;
	}
	
	if(isValid(maze, path, row, col, n, m)){
		path[row][col] = 1;
	
		if(fndPth(maze, path, row, col+1, n, m))
			return true;
		
		if(fndPth(maze, path, row, col-1, n, m))
			return true;

		if(fndPth(maze, path, row+1, col, n, m))
			return true;
		
		if(fndPth(maze, path, row-1, col, n, m))
			return true;
		
		path[row][col] = 0;
	}
	
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	char maze[1000][1000];
	for(int row = 0; row < n; row++)
		for(int col = 0; col < m; col++)
			cin >> maze[row][col];

	int path[1000][1000] = {0};

	if(maze[n-1][m-1] == 'X' or !fndPth(maze, path, 0, 0, n, m))
		cout << "NO PATH FOUND";
	
}