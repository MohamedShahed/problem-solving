    #include<iostream>
    using namespace std;
    int main(void)
    {
     
        long long int n, k;
        cin>>n>>k;
        if(n%2==0)
        {
            if(k>(n/2))
            {
               cout<<(k-(n/2))*2<<endl;
            }
            else
            {
                 cout<<k+(k-1)<<endl;
            }
        }
     
        else
        {
            if(k>((n/2)+1))
            {
                cout<<(k-(n/2+1))*2<<endl;
            }
            else
            {
                cout<<k+(k-1)<<endl;
            }
        }
     
     
     
     
     
    return 0;
    }
