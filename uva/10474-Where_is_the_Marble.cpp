#include<bits/stdc++.h>
using namespace std;

#define F            first
#define S            second
#define pb           push_back
#define Fin          freopen("in.txt","r",stdin);
#define Fout         freopen("out.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); //problem here <---

#define for0(n)      for (int i = 0; i < (int)(n); ++i)  // 0 based indexing

template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}


template<class T> int binarySearch(const vector<T> &a, T key, int low, int high,int lower){
    if(low <= high){
        int mid = (low + high) / 2;
        if(a[mid] == key){
            lower=mid;
            return binarySearch(a,key,low,mid-1,lower);
        }
        if(a[mid] > key){
            return binarySearch(a,key,low,mid-1,lower);
        }
        if(a[mid] < key){
            return binarySearch(a ,key ,mid+1 ,high,lower);
        }
    }
    else return lower;
    return -1;
}

template<class T> void bubbleSort(vector<T> &a,int n){
    bool swapped=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break; //if sorted already
    }
}
void solve(int n,int q){
    vector<int>v;
    for0(n){
        int temp;cin>>temp;
        v.pb(temp);
    }
    bubbleSort(v,n);   //i know it sucks but for learning purpose only
    for0(q){
        int value;cin>>value;
        int index=binarySearch(v,value,0,v.size()-1,-1);
        if(index!=-1){
            printf("%d found at %d\n",value,index+1);
        }
        else{
            printf("%d not found\n",value);
        }
    }
}
int main()
{
//    Fin
//    Fout

    int tc = 1;
    //cin >> tc;
    for (int t = 1; ; t++) {
        int n,q;
        cin>>n>>q;
        if(n==0 && q==0) break;
        cout << "CASE# " << t  << ":\n";
        solve(n,q);
    }
}
