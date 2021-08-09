#include<iostream>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
int main ()
{
    char ch[101];
	int i;
	cin>>ch;
	for(i=0;ch[i]!='\0';++i)
	{
		if(isupper(ch[i]))
		{
			ch[i]=tolower(ch[i]);
		}
		else 
		 ch[i]= toupper(ch[i]);
	}
	cout<<ch;
	return 0;
}
