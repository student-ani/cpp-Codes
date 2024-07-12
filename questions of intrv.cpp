#include<iostream> 

using namespace std;

int main()
{
	int N;
	cin>>N;
	long long arr[N];
	for(int i=0;i=N;++i)
	{
		cin>>arr[i];
	}
	long long maxsum = arr[0];
	long long currentsum = arr[0];
	long long maxcount = arr[1];
	long long currentcount = arr[1];
	
	for (int i=1;i<N;++i)
	{
		if (arr[i] > currentsum+arr[i])
		{
			currentsum=arr[i];
			currentcount=1;
		}
		else
		{
			currentsum+=arr[i];
			currentcount ++;
		}
		if(currentsum > maxsum)
		{
			maxsum = currentsum;
			maxcount = currentcount;
			
		}
		else if
		(currentsum = maxsum)
		{
			maxcount = max(maxcount,currentcount);
			
		}
	}
	cout<<maxsum<<" "<<maxcount<<endl;
	
	return 0;
	
}
