#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t;
		scanf("%d ",&t);
		while(t--)
		{
		
		int l;
		//stringstream ss;
		string s,temp;
		getline(cin,s);
		//ss << s ;
		stringstream ss(s);
		int count =0;
		long long  a[51];
		while(!ss.eof())
		{ 
		 	ss >> temp;
			a[count++] = stoi(temp);
		}
		sort(a,a+count);
		if(a[count-1] == count-1)
			cout << a[count-2]<<endl;
		else
			cout << a[count-1]<<endl;
		}
		
	return 0;
}

