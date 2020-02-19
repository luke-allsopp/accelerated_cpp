#include<iostream>
#include<vector>
#include<algorithm>

using std::sort;
using std::vector;
using namespace std;

int main()
{
	//ask for a set of integers followed by "end of file: "
	cout << "Please enter a set of integers, each seperated by a space, "
		"followed by end-of-file: ";
	
	//stick the data into a vector 
	vector<double> data; 
	double x;

	//invariant -> sticks each element into the vector
	while (cin >> x)
		data.push_back(x);
	
	//check the input is valid and not empty
	typedef vector<double>::size_type vec_sz;
	vec_sz size = data.size();
	if (size == 0){
		cout << endl << "please enter a set of integers"
			"please try again." << endl;
	return 1;
	}

	//sort the integers stored in data/x
	sort(data.begin(), data.end());

	//find the median of the set of data
	//if the remainder after  /2 is zero its mid, if not do mid -mid-1 /2
	vec_sz mid = size/2; 
	double median;
	median = size % 2 == 0 ? (data[mid] + data[mid-1])/2
			: data[mid];

	//if the median remainder is 0, odd quarters, >0 even quarters after median calc	
	vec_sz quarter1 = size/4;
	vec_sz quarter3 =  mid + quarter1;

	double Q1, Q2, Q3; 
	
	Q1 = (size % 4 == 1 ? (data[quarter1] + data[quarter1-1] / 2) 
			    : data[quarter1]);
	Q2 = (size % 2 == 0 ? (data[mid] + data[mid-1] / 2) 
		            : data[mid]);
	Q3 = (size % 4 == 1 ? (data[quarter3] + data[quarter3-1] / 2) 
			    : data[quarter3]);

	cout << "Q1: " << Q1 <<	endl
	     << "Q2: " << Q2 << endl
	     << "Q3: " << Q3 << endl;
	
	return 0;
}
