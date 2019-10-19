#include <bits/stdc++.h>
#include<ctype.h>
using namespace std;

int main()
{

string str;
vector<int> u;
int y;


getline(cin,str);    //enter string



int l = str.length();
    for (int i = 0; i < l; i++)
{

      if(str[i]=='_')
      {
          u.push_back(i);
      }

}



       for (int j = 0; j < u.size(); j++)
  {
      y=u[j]+1;

      str[y]=toupper(str[y]);

}




  for (int j = 0; j < u.size(); j++)
  {

      str.erase(u[j],1);


  }


cout<<str;
}
