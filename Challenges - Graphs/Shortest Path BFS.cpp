#include<bits/stdc++.h>
using namespace std;

class graph{
	private:
		unordered_map<int, list<pair<int, int> > > adjList; //src | dst, 6
		int V;
	public:
		graph(int v){
			V = v;
		}
		void insert(int src, int dst){
			adjList[src].push_back(make_pair(dst, 6));
			adjList[dst].push_back(make_pair(src, 6));
		}

		void bfsTraversal(int src){
			queue<pair<int, int> > Q;
			unordered_map<int, bool> visited;
			unordered_map<int, int> res;
			
			for(auto it:adjList[src]){
				Q.push(it);
				visited[it.first] = true;
			}

			while(!Q.empty()){
				pair<int, int> top = Q.front();
				Q.pop();
				res[top.first] = top.second;

				for(auto it:adjList[top.first]){
					if(!visited[it.first]){
						Q.push(make_pair(it.first, top.second + it.second));
						visited[it.first] = true;
					}
				}
			}
			
			for(int i = 1; i <= V; i++)
			if(i != src){
				if(res.count(i))
					cout << res[i] << " ";
				else
					cout << "-1 ";
			}
			cout << endl;
		}
};

int main(){
	int T;
	cin >> T;
	while(T--){
		int V, N;
		cin >> V >> N;
		graph G(V);
		while(N--){
			int u, v;
			cin >> u >> v;
			G.insert(u, v);
		}
		int src;
		cin >> src;
		G.bfsTraversal(src);
	}
	return 0;
}