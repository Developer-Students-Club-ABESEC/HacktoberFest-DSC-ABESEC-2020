#include<bits/stdc++.h>
using namespace std;
#define MAXN 1111
#define INF 999999999
vector< pair<int, int> >v[MAXN];

vector<int> djikstras(int source, int no_of_vertices) {
	vector<int> dist(no_of_vertices, INF);
	set< pair<int, int> > queue;
	vector<bool> visited(no_of_vertices, false);
	dist[source] = 0;
	visited[source] = true;
	queue.insert(make_pair(dist[source], source));

	while(!queue.empty()) {
		pair<int, int> front_p = *(queue.begin());
		queue.erase(queue.begin());
		int cur_dist = front_p.first;
		int node = front_p.second;

		for(int i=0; i<v[node].size(); i++) {
			int to = v[node][i].first;
			int weight = v[node][i].second;
			if(dist[to] > cur_dist + weight) {
				if(queue.find(make_pair(dist[to], to)) != queue.end()) {
					queue.erase(make_pair(dist[to], to));
				}
				dist[to] = cur_dist + weight;
				queue.insert(make_pair(dist[to], to));
			}
		}	
	}
	return dist;
}

int main() {
	cout<<"\nEnter number of vertices\n";
	int no_of_vertices; cin >> no_of_vertices;

	cout<<"\nEnter number of edges\n";
	int no_of_edges; cin >> no_of_edges;

	/*
		Input the edges of undirected weighed graph  
		Format for input :
		vertex1 vertex2 weight
	*/

	cout<<"\nUndirected weighted graph ";

	cout<<"\nEnter all edges one by one "
		<<"\nFormat for input : vertex1 vertex2 weight\n";
	for(int i=0; i<no_of_edges; i++) {
		int vertex1, vertex2, weight;
		cin >> vertex1 >> vertex2 >> weight;
		vertex1--, vertex2--;
		v[vertex1].push_back(make_pair(vertex2, weight));
		v[vertex2].push_back(make_pair(vertex1, weight));
	}

	/*
		Source vertex is that vertex from where shortest distance to all other vertices is to be found
	*/
	
	cout<<"\nEnter the source vertex\n";
	int source; cin >> source;
	source --;
	vector<int> dist = djikstras(source, no_of_vertices);

	cout<<"\n";
	cout<<setw(10)<<"Source"<<setw(15)<<"Destination"<<setw(20)<<"Shortest Distance";
	cout<<"\n";
	for(int i=0; i<no_of_vertices; i++) {
		cout<<setw(10)<<source+1;
		cout <<setw(10)<<i + 1 <<setw(20)<< dist[i] << "\n";
	}
}
