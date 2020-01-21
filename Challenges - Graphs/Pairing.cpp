#include<bits/stdc++.h>
#define ll long long
using namespace std;

class graph{
	private:
		unordered_map<int, list<int> > adjList;
		unordered_map<int, bool> visited;
		int V;
	public:
		graph(int v){
			V = v;
		}
		void insert(int u, int v){
			adjList[u].push_back(v);
			adjList[v].push_back(u);
		}

		void dfsHelper(int src, int &countrySize){
			visited[src] = true;
			countrySize++;
			for(auto it:adjList[src])
				if(!visited[it])
					dfsHelper(it, countrySize);
		}
	
		int pair(){
			int countrySize = 0;
			int totalWays = V*(V-1)/2;
			for(int i = 0; i < V; i++){
				if(!visited[i]){
					countrySize = 0;
					dfsHelper(i, countrySize);
					totalWays -= countrySize*(countrySize-1)/2;
				}
			}

			return totalWays;
		}
};

int main(){
	int V, N;
	cin >> V >> N;
	graph G(V);
	while(N--){
		int u, v;
		cin >> u >> v;
		G.insert(u, v);
	}

	cout << G.pair();
	return 0;
}