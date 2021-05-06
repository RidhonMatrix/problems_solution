#include<iostream>
using namespace std;
//time:O(n^2) 
template<class T> void bubbleSort(T a[],int n){
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


int main()
{
    int a[5]={5,4,3,2,1};
    bubbleSort(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";  // 1 2 3 4 5
    }
}
