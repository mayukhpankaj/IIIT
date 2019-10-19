#include <bits/stdc++.h>
using namespace std;

int main()
{

 int n,i,j,input,k,sum=0;
 vector<int> t;

 cin>>n;

   for (int i = 1; i <= n; i++) //vector input
    {

      cin>>input;
      t.push_back(input);

    }

    cin>>i>>j;



    for(k=i;k<=j;k++)
    {

       sum+=t[k];

    }


    cout<<sum;



    return 0;


}
