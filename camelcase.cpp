#include <bits/stdc++.h>
#include<ctype.h>
using namespace std;

int main()
{


  char text[200];
  vector<int> u;
  int i=0,y;


  cin.getline(text, 200);


  for(i=0;i<199;i++)
  {
      if(text[i]=='_')
      {
          u.push_back(i);
      }


  }

  for (int j = 0; j < u.size(); j++)
  {
      y=u[j]+1;

      text[y]=toupper(text[y]);

  }

   cout<<text;



  return 0;

}
