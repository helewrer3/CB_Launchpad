#include<bits/stdc++.h>
using namespace std;

int n;

bool canSolve(int arr[9][9], int i, int j, int num){
	int rn = sqrt(n);
	int si = (i/rn)*rn;
	int sj = (j/rn)*rn;

	for(int x = 0; x < n; x++)
		if(arr[x][j] == num or arr[i][x] == num)
			return false;
	
	for(int r = si; r < si+rn; r++)
		for(int c = sj; c < sj+rn; c++)
			if(arr[r][c] == num)
				return false;
	
	return true;
}

void printMat(int arr[9][9]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

bool solveSudoku(int arr[9][9], int i, int j){
	if(i == n){
		printMat(arr);
		return true;
	}

	if(j == n)
		return solveSudoku(arr, i+1, 0);
	
	if(arr[i][j])
		return solveSudoku(arr, i, j+1);
	
	for(int num = 1; num <= 9; num++){
		if(canSolve(arr, i, j, num)){
			arr[i][j] = num;
			if(solveSudoku(arr, i, j+1))
				return true;
		}
	}
	
	
	arr[i][j] = 0;
	return false;
}


int main(){
	cin >> n;
	int arr[9][9];
	for(int row = 0; row < n; row++)
		for(int col = 0; col < n; col++)
			cin >> arr[row][col];
	
	solveSudoku(arr, 0, 0);
	return 0;
}