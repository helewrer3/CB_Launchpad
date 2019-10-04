#include <bits/stdc++.h>

using namespace std;

bool isSafe(int maze[][10], int i, int j, int row, int col){
	if(maze[i][j] or i > row or j > col)
		return false;

	return true;
}

bool findPath(int maze[][10], int i, int j,int row, int col){
	if(i == row and j == col){
		//print path
		return true;
	}
	
	if(isSafe(maze, i, j, row, col)){
		if(isSafe(maze, i, j+1, row, col))
			return true;
		if(isSafe(maze, i+1, j, row, col))
			return true;
	}
	
	return false;
}



int main(){
	
	int row, col;
	cin >> row >> col;
	int arr[10][10]; 
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			cin >> arr[i][j];
		
	cout << (findPath(arr, 0, 0, row-1, col-1));
	
	//Don't Mess Wth Me
	{
		cin.get();
		printf("\n---------------------------");
		printf("\nPress Enter To Exit:\t");
		cin.get();
	}
    return 0;
}
