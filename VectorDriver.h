// VectorDriver.h
// Ryan Durnan
// COSC-2030-01
// Lab4
// 08 October 2018

/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// TODO: implement add_numbers
void add_numbers(vector<short> &data)
{
	for (int i = 0; i <= 9; i++)							// Start a loop that will repeat 10 times.
	{
		data.push_back(rand() % 25 + 1);					// Use push_back() to insert random values in the vector.
	}
}

// TODO: implement print_even
void print_even(const vector<short>& data)
{
	if (data.empty())										// If the vector is empty...
	{
		cout << "<empty>";									// ...report that the vector is empty.
	}
	else
	{														// If the vector is not empty...
		cout << "<";
		for (int i = 0; i < data.size(); i++)				// ...start a loop that repeats for every vector element.
		{
			if ((i % 2) == 0)								// If the index is even (or 0)...
			{
				cout << data.at(i);							// ...print out the value at that index.
				if ((i + 2) < data.size())					// 78-81: These lines are just for aesthetics. I didn't want a comma to appear on the last element of the vector.
				{
					cout << ", ";
				}
			}
		}
		cout << ">";
	}
}

// TODO: implement is_present
bool is_present(const vector<short> &data, short value)
{
	vector<short>::const_iterator iter = data.begin();		// Create the iterator
	while (iter != data.end())								// While the iterator still points to vector elements...
	{
		if (*iter == value)									// ...If the iterator points to a value that is equal to the value we're looking for...
		{
			return true;									// ...return true...
		}
		iter++;												// ...set the iterator to point at the next vector element.
	}
	return false;											// If the value we're looking for was not found in the previous while-loop, return false.
}

// TODO: implement std::sort function
// I implemented the sort function in VectorDriver.cpp
