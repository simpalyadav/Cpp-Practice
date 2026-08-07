# include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;

    int a=0,b=1,c;

    if(n==1)
    {
        cout<<a;
        return 0;
    }
    if (n==2)
    {
        cout<<b;
        return 0;
    }
    
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    
    cout<<b;

    return 0;


}