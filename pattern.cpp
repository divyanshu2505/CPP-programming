#include<iostream>
using namespace std;
int main()
{
    int n;//n for row
    int m;//m for column
    cout<<"enter row "<<endl;
    cin>>n;
    cout<<"enter column"<<endl;
    cin>>m;

    for(int i=1; i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
