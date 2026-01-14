
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int>parents;
vector<int>ranks;

struct edge{
int u,v,weight;
};

void make_set(int vertex){
parents[vertex]=vertex;
ranks[vertex]=0;

}

int find_set(int vertex){
if(vertex=parents[vertex])

    return parents[vertex];
    return parents[vertex]=find_set(parents[vertex]);
}

void union_sets(int vert_a,int vert_b){
int parent_a=find_set(vert_a);
int parent_b=find_set(vert_b);

if(parent_a!= parent_b){
    if(ranks[parent_a]<ranks[parent_b]){
        swap(parent_a,parent_b);
    }
    parents[parent_b]=parent_a;
    if(ranks[parent_a]==ranks[parent_b]){
        ranks[parent_a]++;
    }
}
}

int main(){
    int n = 4; // number of vertices

    vector<edge> edges = {
        {1, 2, 1},
        {1, 3, 4},
        {2, 3, 2},
        {3, 4, 3},
        {2, 4, 5}
    };

    parents.resize(n + 1);
    ranks.resize(n + 1);

    for (int i = 1; i <= n; i++) {
        make_set(i);
    }

    sort(edges.begin(), edges.end(),
         [](edge a, edge b) {
             return a.weight < b.weight;
         });

    int mst_weight = 0;
    cout << "Edges in the Minimum Spanning Tree:\n";

    for (auto e : edges) {
        if (find_set(e.u) != find_set(e.v)) {
            cout << e.u << " - " << e.v
                 << " (weight " << e.weight << ")\n";
            mst_weight += e.weight;
            union_sets(e.u, e.v);
        }
    }

    cout << "Total weight of MST = " << mst_weight << endl;

    return 0;



}
