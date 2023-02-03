#include <iostream>
using namespace std;

int main() 
{
	 int t,i,j,n,count=0;
	 cin>>t;
	 for(i=0;i<t;i++)
	 {
	     int arr[10];
	     for(i=0;i<10;i++)
	     {
	     	cin>>arr[i];
		 }
	    

    
        for(j=i+1; j<n; j++)
        {
        // If duplicate element found then increment count by 1
        if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
		
		
		/* if((i!='R')&&(j!='R')) 
	      {
		  cout<<"R"<<endl;
	      }
	       else if(i=='B' && j=='B')
	        {
	         cout<<"B"<<endl;
	         }
	        else if(i=='G' && j=='B')
	         {
	         cout<<"B"<<endl;
	         }
	          else if(i=='R' && j=='R')
	         {
	         cout<<"R"<<endl;
	         }
	          else if(i=='G' && j=='R')
	         {
	         cout<<"R"<<endl;
	         }
	           else if(i=='G' && j=='G')
	         {
	         cout<<"G"<<endl;
	         }
	     
	       else
		    {
			cout<<"B"<<endl;
			 }  
        } */
	      
}
	
	return 0;
}

