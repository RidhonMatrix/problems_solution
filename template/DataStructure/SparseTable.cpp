#define Max 200005
int ST[24][Max];
int A[Max];

void computeST(int N){
    for(int i=0;i<N;i++) ST[0][i]=i;
    for(int k=1;(1<<k)<N;k++){
        for(int i=0;i+(1<<k)<=N;i++){
            int x=ST[k-1][i];
            int y=ST[k-1][i+(1<<k-1)];
            ST[k][i] = A[x] <= A[y] ? x : y;
        }
    }
}

int RMQ(int i, int j){
    int k = log2(j-i);
    int x = ST[k][i];
    int y = ST[k][j-(1<<k)+1];

    return A[x] <= A[y] ? x: y;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++) cin>>A[i];

    computeST(n);
    int x,y;
    while(q--){
        cin>>x>>y;
        if(x==y) cout<<A[x-1]<<endl;
        else cout<<A[RMQ(x-1,y-1)]<<endl;
    }  
}
