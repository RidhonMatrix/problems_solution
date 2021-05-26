#include<bits/stdc++.h>
using namespace std;
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
    
    for(int i=res.size()-1;i>=0;i--){
        cout<<res[i];
    }
    printf("\n");
}
int main()
{
    factorial(500); 
}

// 9332621544394415268169923885626670049071596826438162146859296389
// 5217599993229915608941463976156518286253697920827223758251185210
// 916864000000000000000000000000
