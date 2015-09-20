#include<iostream>
using namespace std;
void print_permutation(string ans,string str)
{
  if(str=="")
  cout<<ans<<endl;
  else
  {
    for(int i=0;i<str.length;i++)
    print_permutation(ans+str[i],str.substr(0,i)+str.substr(i+1));  
  }
}
int main()
{
  print_permutation("","abc");
return 0;
}
