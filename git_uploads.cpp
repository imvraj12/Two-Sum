// 1. Two Sum.
/*
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
    int target;
    cin>>target;
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==target)
        {
            cout<<"["<<i<<","<<j
			<<"]";
        }
        else
        {
        	j++;
		}
    }
}
