#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
void multiply(int x,vector<int> &res){
    int carry=0;
    for(int i=0;i<res.size();i++){
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry){
        res.push_back(carry%10);
        carry/=10;
    }

}
void factorial(int n){
    vector<int> res;
    res.push_back(1);

    for(int i=2;i<=n;i++){
        multiply(i,res);
    }
    printf("%d! --\n",n);
    int freq[10];
    memset(freq,0,sizeof(freq));
    for(int i=0;i<res.size();i++){
        freq[res[i]]++;
    }
    printf("   (0)%4d   (1)%4d   (2)%4d   (3)%4d   (4)%4d\n",freq[0],freq[1],freq[2],freq[3],freq[4]);
    printf("   (5)%4d   (6)%4d   (7)%4d   (8)%4d   (9)%4d\n",freq[5],freq[6],freq[7],freq[8],freq[9]);
}
int main()
{
    int n;
    while(cin>>n && n!=0){
        factorial(n);
    }
}
