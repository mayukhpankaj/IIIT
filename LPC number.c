#include<stdio.h>
#include<math.h>
main()
{
	int i,j,n,p,first,digits,r,h,s,c=0;

	scanf("%d",&n);
	

	for(i=1;i<=n;i++)
	{
		p=i;
		digits=log10(p);
	    first=p/pow(10,digits);
	    h=p;
		j=1;
		while(j<=h)
		{
			r=h%10;
			if(first>r)
			{ 
				break;
			}
			h=h/10;
			j*=10;
		}
		if(h==first)
		{
			c++;
		
		}
		
	}
	printf("%d",9+c);
}