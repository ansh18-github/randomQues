// program to capitalise the first and last character of each word in a string.

#include<bits/stdc++.h>
using namespace std;

string FirstAndLast(string str)
{
	
	str[0]= toupper(str[0]);
    int i;
	for (i = 0; i < str.length()-1; i++)
	{
      if(str[i+1]==' '){
        str[i]= toupper(str[i]);
      }
      if(str[i-1]==' '){
        str[i]=toupper(str[i]);
      }
      
    } 
  str[i]=toupper(str[i]);
  return str;
}

int main()
{
	string str = "Geeks for Geeks";
	cout << str << "\n";
	cout << FirstAndLast(str);
}


