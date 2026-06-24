#include <bits/stdc++.h>
using namespace std;

//here the first call will only be expensice to build the parent array , then if we do find again all the shortcuts would be already been calculated 
class DisjointSet{
    vector<int> rank,parent;

    public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);

        for(int i = 0; i <= n; i ++){
            parent[i]=i;
        }
    }

    int findByUnion(int n){
        if(parent[n]==n) return n;

        return parent[n] = findByUnion(parent[n]);
    }

    void unionByRank(int u, int v){
        int ult_u = findByUnion(u);
        int ult_v = findByUnion(v);

        if(ult_u==ult_v) return;//since it would belong to same graph 

        if(rank[ult_u]>rank[ult_v]){
            parent[ult_v] = ult_u;
        }else if(rank[ult_v]>rank[ult_u]){
            parent[ult_u] = ult_v;
        }else{
            parent[ult_v]=ult_u;
            rank[ult_u]++;
        }
    }    
};

int main(){
    DisjointSet ds(7);

    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(4,5);
    ds.unionByRank(6,7);
    ds.unionByRank(5,6);
    if(ds.findByUnion(1)==ds.findByUnion(5)) cout<<"connected";
    else cout<<"disconnected"<<endl;
    ds.unionByRank(3,7);
    if(ds.findByUnion(1)==ds.findByUnion(5)) cout<<"connected"<<endl;
    else cout<<"disconnected"<<endl;
    return 0;
}

