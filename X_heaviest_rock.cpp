#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,xth;   //x is input.
  vector<int> a,b;

  cin >> n; //no of rocks



    for (int i = 1; i <= n; i++) //vector input
    {

      cin>>x;
      a.push_back(x);

    }


    cin>>xth; //enter xth heaviest


	sort(a.begin(), a.end(), greater<int>()); //sort

	cout<<a[xth-1];  //block weight of xth heaviest

	return 0;
}
