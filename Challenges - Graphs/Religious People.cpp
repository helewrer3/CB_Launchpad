#include<bits/stdc++.h>
#define ll long long
using namespace std;

class graph{
	private:
		unordered_map<ll, list<ll> > adjList;
		unordered_map<ll, bool> visited;
		ll ans = 0;
	public:
		void insert(ll src, ll dst){
			adjList[src].push_back(dst);
			adjList[dst].push_back(src);
		}

		void addmissing(ll N){
			for(ll i = 1; i <= N; i++){
				if(!adjList.count(i)){
					adjList[i].push_back(i);
				}
			}
		}

		void DFSutil(ll src){
			visited[src] = true;
			ans++;

			for(auto it:adjList[src]){
				if(!visited[it])
					DFSutil(it);
			}
		}

		ll connectedComp(ll B, ll A){
			ll res = 0;
			for(auto it:adjList){
				if(!visited[it.first]){
					ans = 0;
					DFSutil(it.first);
					res += (ans-1)*B + A;
				}
			}

			return res;
		}

};

int main(){
	ll T;
	cin >> T;
	while(T--){
		ll N, M, A, B;
		ll u, v;
		cin >> N >> M >> A >> B;
		graph G;
		for(ll i = 1; i <= M; i++){
			cin >> u >> v;
			G.insert(u, v);
		}

		if(A < B or !M){
			cout << A*N << endl;
		}
		else{
			G.addmissing(N);
			cout << G.connectedComp(B, A)<< endl;
		}
	}
	return 0;
}