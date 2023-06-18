/*
Fractional Knapsack
*/

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
     static bool cmp(Item  a,Item b) {
    	double a1 = (double)a.value/a.weight;
    	double b1 = (double)b.value/b.weight;
    	return a1>b1;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
            // Your code here
           
        	sort(arr,arr+n,cmp);
        
        	double res = 0.0;
        
        	for(int i=0;i<n;i++) {
        
        
        			if(arr[i].weight<=W) {
        				W-=arr[i].weight;
        				res+=arr[i].value;
        			}
        
        			else {
        				res+= arr[i].value * (double)W/arr[i].weight;
        				break;
        			}
        	
        	}

        	return res;
    }
    
};
