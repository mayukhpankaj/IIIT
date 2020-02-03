#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	// your code goes here
	
	// Declaring string 
    string str; 
	
	int n;
	int l;
	cin>>n;
    char ch[200];
    char b[100];
    string a;
	
	while(n+1)
	{
	    getline(cin,str); 
	   
	    
	    l=str.length();
	   
	    str.resize(l);
	    str.shrink_to_fit();
	   
	   
	    
	    str.copy(ch,l,0);
         
	    a.push_back(ch[0]);
	    a.push_back(ch[l-1]);
	    
	    n--;
	    
	}
	int ctr;
	int flag=1;
	
	l=a.length();
	a.copy(b,l,0);
	
	for(int i=0;i<l;i++)
	{
	    ctr=0;
	    for(int j=0;j<l;j++)
	    {
	        
	        if(b[i]=b[j])
	        ctr++;
	        
	    }
	    
	    if(!(ctr%2==0))
	    {
	   
	    flag=0;
	     break;
	    }
	    
	}
	
  if(flag==1)
      cout<<"Yes";
      else
      cout<<"No";
      
  
	
	
	
	
	return 0;
}
