#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include<map>
using namespace std;

//Prints the vector
void print(vector<int> arr)
{
	for (int x : arr)
		cout << x << endl;
	cout << "\n" << endl;
}   //Prints the vector


//Gives the boolean output of true or false
void boolean_output(bool find) //Gives the boolean output of true or false
{
	if (find == true)
		cout << "True \n" << endl;
	else
		cout << "False \n" << endl;
} 



// All about Vectors!!!
 void vectorDemo()
{
	vector <int> arr = { 12, 1, 15, 9 };

	int size = arr.size();

	cout << "The array is:" << endl;
	print(arr);

	sort(arr.begin(), arr.end()); // Sorting at once ascending order

	cout << "The sorted array is:" << endl;
	print(arr);

	cout << "The search result of element 9 is :";
	bool find = binary_search(arr.begin(), arr.end(), 9);  // Binary searches for an element

	boolean_output(find);

	arr.push_back(99);
	arr.push_back(100);
	arr.push_back(100);
	arr.push_back(100);
	arr.push_back(123);

	print(arr);

	vector<int> ::iterator it1 = lower_bound(arr.begin(), arr.end(), 100); // Pointer that points to the first occurecne of 100 / points to the element that is >=100
	vector<int> ::iterator it2 = upper_bound(arr.begin(), arr.end(), 100); //  Pointer that points to the element that is striclty > 100

	cout << *it1 << endl;  // what value does iterator it1 hold ?
	cout << *it2 << endl;  // what value does iterator it2 hold ?

	cout << (it2 - it1) << endl; // number of elements between it1 and it2  (OR) the number of times 100 is there in the array  i.e there are 3 elemnts that have value 100
}



// All about sets!!!
void setDemo()
{
	set<int> s; // Automatically arranges itself in tascending order

	s.insert(10);
	s.insert(-2);
	s.insert(21);
	s.insert(-12);

	for (int x : s)
		cout << x << endl;

	auto it1 = s.find(-1); // If -1 is presesnt in the set then it1 will point towards it otherwise it1 will be pointing towards s.end()
	
	// instead of declaring the type in which the iterator is , we can simply create an auto iterator which is automatically assigned to whichever element vector/set you are using

	if (it1 == s.end())
		cout << "Not found !" << endl;
	else
		cout << "Found !" << endl;

	auto it2 = s.lower_bound(1); // points to 21 because it is >=1

	s.erase(-12); // erases -12

	for (int x : s)
		cout << x << endl;
}


void mapDemo()
{


}



int main()
{
	// address of a and a[0] are the same , not true for other indices....

	int arr1[3] = {1, 2, 3};
	int arr2[4] = {1, 2, 3, 4 };
	int arr3[2] = {1, 2};
	int arr4[1] = {1};
	int* ptrarr[] = {arr1, arr2, arr3, arr4};

	cout << (ptrarr[0])[1] << endl;

	
	return 0;
}
