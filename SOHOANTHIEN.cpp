//So hoan thien
#include<iostream>	
using namespace std;
int sht(int n)
{
	int s=0; 
	for(int i=1;i<=n/2;i++)
	{ 
		if(n % i == 0 ) 
		{ s+=i;
		 } 
}
if(s==n) {return true;
	} 
	else {return false;
	} 
}
main()
{
	int n,d=0;
	cin>>n;
for ( int i=1; i<=n; i++ ) 
	{if(sht(i)) { d++; 
	}
	}
	cout<<d;
}

