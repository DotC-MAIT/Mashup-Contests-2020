#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,tt=0;
		cin>>n;

		int a[n+1];
		for(int i=0;i<n;i++)cin>>a[i];
			sort(a,a+n);
		if(n==1)
		{
			cout<<a[0]<<endl<<a[0]<<endl;
			continue;

		}
		if(n==2){
              cout<<a[1]<<endl;
              cout<<a[0]<<" "<<a[1]<<endl;
              continue;
              }
         
        int j=n-1;
        while(j>2)
        {
        	if(a[0]+a[j-1]>2*a[1])
        	tt+=2*a[1]+a[0];
            else
            	tt+=2*a[0]+a[j-1];
            
            tt+=a[j];
            j-=2;        
        }
        if(j==2)
          cout<<a[0]+a[1]+a[2]+tt<<endl;
        	else
        cout<<tt+a[1]<<endl;
       
        j=n-1;
        while(j>2)
        {
        	//tt+=2*a[1]+a[0];
        	if(a[0]+a[j-1]>2*a[1])
        	{
        	cout<<a[0]<<" "<<a[1]<<endl;
            cout<<a[0]<<endl;
            cout<<a[j-1]<<" "<<a[j]<<endl;
            cout<<a[1]<<endl;
            }
            else
            	{
            		cout<<a[0]<<" "<<a[j-1]<<endl;
                    cout<<a[0]<<endl;
		            cout<<a[0]<<" "<<a[j]<<endl;
		            cout<<a[0]<<endl;
		            
                 
            	}
            
            
            j-=2;
                  
        }
       
                 
if(j==2)
{
                cout<<a[0]<<" "<<a[1]<<endl;
              	cout<<a[0]<<endl;
              	cout<<a[0]<<" "<<a[2]<<endl;
}else
 cout<<a[0]<<" "<<a[1]<<endl;
if(t>0)cout<<"\n";
	}
	return 0;
}