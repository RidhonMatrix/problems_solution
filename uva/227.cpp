#include<bits/stdc++.h>
using namespace std;
int pX,pY;
struct position{
    int x;
    int y;
};

void print(char a[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<a[i][j];
            if(j!=4) printf(" ");
        }
        cout<<endl;
    }
}
struct position moveCalc(char ch){
    position temp;
    if(ch=='A'){
        temp.x=-1;
        temp.y=0;
    }
    else if(ch=='B'){
        temp.x=+1;
        temp.y=0;
    }
    else if(ch=='R'){
        temp.x=0;
        temp.y=+1;
    }
    else if(ch=='L'){
        temp.x=0;
        temp.y=-1;
    }

    return temp;

}
bool moveSpace(char a[5][5],char ch){

    position temp=moveCalc(ch);



    if(  (pX+temp.x)<0 || (pX+temp.x)>4  ||
         (pY+temp.y)<0 || (pY+temp.y)>4   ){
             return false;
         }
         swap(a[pX][pY],a[pX+temp.x][pY+temp.y]);
         pX=pX+temp.x;
         pY=pY+temp.y;

    return true;
}
bool generatePuzzle(char a[5][5],const std::string& s){
    for(int i=0;s[i]!='0';i++){

        if(!moveSpace(a,s[i])){
            return false;
        }
    }
    return true;
}
string inputMove(){
    string s;
    while(true){
        string temp;
        cin>>temp;
        s+=temp;
        if(temp[temp.size()-1]=='0'){
            break;
        }
    }
    return s;
}
void findSpace(char a[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==' '){
                pX=i;
                pY=j;
                return;
            }
        }
    }
}
bool input(char a[5][5]){

    for(int i=0;i<5;i++){
        string s;
        getline(cin,s);
//        if(s.size()==4) s.push_back(' ');
        if(s=="Z"){
            return false;
        }
        for(int j=0;j<5;j++){
            a[i][j]=s[j];

        }
    }

    return true;
}
int main()
{
    string lineBlank="";
    int count=1;
//    freopen("in.txt","r",stdin);
//     freopen("out.txt","w",stdout);

    while(true){
        char a[5][5];
        if(!input(a)){
            break;
        }

        cout<<lineBlank;
        lineBlank='\n';

        pX=0,pY=0;
        findSpace(a);
        string move=inputMove();
        printf("Puzzle #%d:\n",count++);
        if(generatePuzzle(a,move)){
            print(a);
        }
        else{
            printf("This puzzle has no final configuration.\n");
        }
        cin.ignore();
    }
    return 0;
}
