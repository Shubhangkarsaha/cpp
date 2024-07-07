#include <iostream>
#include <vector>

using namespace std;

void solveSequences(string str, vector<string>& arr, string output, int index) {

	//base case
	if (index >= str.length()) {
          if (output.length() > 0) {
			  arr.push_back(output);
          }
                
		return;
	}

	//exclude recursive call
	solveSequences(str, arr, output, index+1);

	//inlude recursive call
	char ele = str[index];
	output.push_back(ele);
	solveSequences(str, arr, output, index+1);

}

vector<string> subsequences(string str){
	
	vector<string> arr;
	string output = "";
	int index = 0;
	solveSequences (str, arr, output, index);
	return arr;
	
}
