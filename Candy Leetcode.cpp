#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int candy(vector<int> ratings) {
        int n=ratings.size();
	    if(n<=1){
		   return n;
        }
	    vector<int> c(n,1);
	    for (int i = 1; i < n; i++)
	    {
		   if(ratings[i]>ratings[i-1]){
			   c[i]=c[i-1]+1;
           }
	    }
	    for (int i= n-1; i>0 ; i--)
	    {
		   if(ratings[i-1]>ratings[i]){
			   c[i-1]=max(c[i]+1,c[i-1]);
            }
	    }
	    int sum=0;
        for(int i=0;i<n;i++){
          sum+=c[i];
        }
	    return sum;
    }
    
};

int main(){

	int n;
	cin>>n;
	vector<int> ratings;

	for(int i=0;i<n;i++){
		int r;
		cin>>r;
       ratings.push_back(r);
	}
    
    Solution g;
	int ans=g.candy(ratings);

	cout<<ans;


}