#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            continue;
        }
        else if(i%5==0){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}
