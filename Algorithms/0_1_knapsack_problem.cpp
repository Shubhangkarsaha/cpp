#include <bits/stdc++.h>

// int solve_rec(vector<int>& weight, vector<int>& value, int index, int capacity) {

// 	//Base case
// 	//if there is only one item to steal then just comapare its weight with the knapsack capacity
// 	if (index == 0) {
// 		if(weight[0] <= capacity) {
// 			return value[0];
// 		} else {
// 			return 0;
// 		}
// 	}

// 	int include = 0;
// 	if (weight[index] <= capacity) {
// 		include = value[index] + solve_rec(weight, value, index-1, capacity-weight[index]);
// 	}

// 	int exclude = 0;
// 	exclude = solve_rec(weight, value, index-1, capacity);

// 	int ans = max(exclude, include);
// 	return ans;
// }

int solve_Memoization (vector<int>& weight, vector<int>& value, int index, int capacity, vector<vector<int>>& dp) {

	if (index == 0) {
		if (weight[0] <= capacity) {
			return value[0];
		} else {
			return 0;
		}
	}

	//base case chek for if there is any data stored in the dp or not
	if (dp[index][capacity] != -1) {
		return dp[index][capacity];
	}

	int include = 0;
	if (weight[index] <= capacity) {
		include = value[index] + solve_Memoization(weight, value, index-1, capacity-weight[index], dp);
	}

	int exclude = solve_Memoization(weight, value, index-1, capacity, dp);
	
	// memoization performed here
	dp[index][capacity] = max(exclude, include);
	return dp[index][capacity];
}


int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// return solve_rec(weight,value,n-1,maxWeight);


	//declaration of 2D vector for Dynamic programming approach
	vector<vector<int>> dp(n, vector<int>(maxWeight+1, -1));
	return solve_Memoization(weight, value, n-1, maxWeight, dp);	
}
