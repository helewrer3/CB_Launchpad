#include<iostream>
using namespace std;

int hi;

void funky(int arr[][10], int n, int r, int c, int count){
	if((r >= n or r < 0) or (c >= n or c < 0) or (arr[r][c] == 0))
		return;
	
	arr[r][c] = 0;
	hi = max(hi, count + 1);

	funky(arr, n, r-2, c-1, count + 1);
	funky(arr, n, r-2, c+1, count + 1);
	funky(arr, n, r-1, c-2, count + 1);
	funky(arr, n, r-1, c+2, count + 1);
	funky(arr, n, r+1, c-2, count + 1);
	funky(arr, n, r+1, c+2, count + 1);
	funky(arr, n, r+2, c-1, count + 1);
	funky(arr, n, r+2, c+1, count + 1);
	
	arr[r][c] = 1;
}

int main(){
	int n, cnt = 0;
	cin >> n;
	int board[10][10];

	for(int r = 0; r < n; r++){
		for(int c = 0; c < n; c++){
			cin >> board[r][c];
			if(board[r][c])
				cnt++;
		}
	}
	
	hi = 0;
	funky(board, n, 0, 0, 0);
	
	cout << cnt - hi;
	return 0;
}