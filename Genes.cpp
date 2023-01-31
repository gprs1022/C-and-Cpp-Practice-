#include <iostream>
using namespace std;

int main() 
{
	 int t,n;
	 cin>>t;
	 for(n=0;n<t;n++)
	 {
	     char i,j,R,G,B;
	     
	     cin>>i>>j;
	     if(i=='R'&& j=='B')
	       {
	         cout<<"R"<<endl;
	       }
	     /* if((i!='R')&&(j!='R')) 
	      {
		  cout<<"R"<<endl;
	      }*/
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
        }
	      
	
	
	return 0;
}

