#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool generateSubsetsUtil(int w[],int start,int size,int current_sum,int target,vector<int>& ans)
{
	
	if(start>=size)
	return false;
	else if(target==current_sum)
	{
		return true;
	}
	
	else
	{
		for(int i=start;i<size;i++)
		{
			ans.push_back(w[i]);
			if(generateSubsetsUtil(w,i+1,size,current_sum+w[i],target,ans)==true)
			{
				return true;
			}
			ans.pop_back();
		}
	}
	return false;
}
void generateSubsets(int w[],int size,int target)
{
	vector<int> ans;
	if(generateSubsetsUtil(w,0,size,0,target,ans)==false)
	{
		cout<<"sum doesnot exists"<<endl;
	}
	else
	{
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<" ";
		}
	}
}
int main()
{
	int weights[] = {6,-2,3,2};
    int target = 4;
 
    int size = sizeof(weights)/sizeof(weights[0]);
 
    generateSubsets(weights, size, target);
 
	return 0;
}
