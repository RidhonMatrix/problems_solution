#include<bits/stdc++.h>
using namespace std;
void for2(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pow(i+j,2)==(i*10)+j){
                cout<<i<<j<<endl;
            }
        }
    }
}
void for4(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                for(int l=0;l<10;l++){
                    int left=pow(((i*10)+j)+((k*10)+l),2);
                    int right= ((i*10+j)*10+k)*10+l;
                    if(left==right){
                        cout<<i<<j<<k<<l<<endl;
                    }
                }
            }
        }
    }
}
void for6(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                for(int l=0;l<10;l++){
                    for(int m=0;m<10;m++){
                        for(int n=0;n<10;n++){
                            int left=pow( ((i*10+j)*10+k)+((l*10+m)*10+n) ,2);
                            int right=((((i*10+j)*10+k)*10+l)*10+m)*10+n;
                            if(left==right){
                                cout<<i<<j<<k<<l<<m<<n<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
}
void for8(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                for(int l=0;l<10;l++){
                    for(int m=0;m<10;m++){
                        for(int n=0;n<10;n++){
                            for(int o=0;o<10;o++){
                                for(int p=0;p<10;p++){
                                    int left=pow( (((i*10+j)*10+k)*10+l)+(((m*10+n)*10+o)*10+p) ,2);
                                    int right=((((((i*10+j)*10+k)*10+l)*10+m)*10+n)*10+o)*10+p;
                                    if(left==right){
                                        cout<<i<<j<<k<<l<<m<<n<<o<<p<<endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;
    while(cin>>n){
        if(n==2) for2();
        else if(n==4) for4();
        else if(n==6) for6();
        else if(n==8) for8();

    }

}
