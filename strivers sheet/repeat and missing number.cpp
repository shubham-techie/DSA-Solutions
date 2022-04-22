[https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0]

#include<bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &v, int n)
{
	// Write your code here 
	pair<int,int> p{}; //mn, rn
	
	/* method 1: frequency count
	for(int i=0;i<n;++i)
		v[(v[i]-1)%n]+=n;  
	
	for(int i=0;i<n;++i)
		if(v[i]>2*n)
			p.second=i+1;
		else if(v[i]<=n)
			p.first=i+1;
	*/
	
  
	/* method 2: maths
	long long s=n*(n+1)/2, s2=s*(2*n+1)/3;
	for(int& i:v){
		s-=i;
		s2-=i*i;
	}
	p.first=(s+s2/s)/2;
	p.second=p.first-s;
	*/
	
  
  // method 3: using xor
	int xorr{},set_bit{},x{};
	for(int i=0;i<n;++i){
		xorr^=v[i];
		xorr^=(i+1);
	}
	
	set_bit=(xorr & (xorr-1))^xorr;
	for(int i=0;i<n;++i){
		if(v[i] & set_bit)
			x^=v[i];
		if((i+1) & set_bit)
		    x^=(i+1);
	}    	
	
	xorr^=x;
	if(find(v.begin(),v.end(),x)!=v.end())
		p={xorr,x};
	else
		p={x,xorr};
	
	return p;
}
