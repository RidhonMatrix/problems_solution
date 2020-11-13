#include<stdio.h>
int swapCount(int n,int a[])
{
    int c=0;
    int i,j,key;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            c++;
            j=j-1;
        }
        a[j+1]=key;
    }
    return c;

}
int main()
{
    int t;scanf("%d",&t);
    int l[52];
    int n,i;
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&l[i]);
        }

        printf("Optimal train swapping takes %d swaps.\n",swapCount(n,l));
    }
    return 0;
}
