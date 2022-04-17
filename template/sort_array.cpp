#include<iostream>
using namespace std;
int i,j;
template<class t>
//in between we cannot write any thing neither wise it shows error
void sort(t *a,t n){
    t c;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
           c=a[i];
           a[i]=a[j];
           a[j]=c;
        }
    }
}
}
int main()
{
    int *a;
    int n;
    cin>>n;
    a=new int[n];
    for(i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,n);
for(i=0;i<n;i++){
    cout<<"after"<<a[i]<<endl;
}
}