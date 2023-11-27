// 2. Best Time to Buy and Sell Stock
/*
You are given an array prices where prices[i] is the price 
  of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy
  one stock and choosing a different day in the future to sell that stock.
****
through vector

 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    }
};
****
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
	int min=a[0];
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			k++;
		}
	}
	int max=min;
	for(int i=k;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			
		}
	}

	cout<<"Profit is: "<<max-min;
}



