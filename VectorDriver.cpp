// VectorDriver.cpp
// Ryan Durnan
// COSC-2030-01
// Lab4
// 08 October 2018

#include "stdafx.h"
#include "VectorDriver.h"
#include <algorithm>

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl << endl;

  cout << "\n  ..:: B E G I N  S T U D E N T  C O D E  ::.." << endl << endl;

  vector<short> myV(0);								// Create an empty vector (myV).
  cout << "New vector (myV): ";
  print(myV);										// Print out current myV.
  cout << endl;

  add_numbers(myV);									// Test out add_numbers(myV).
  cout << "myV after add_numbers(myV): ";
  print(myV);										// Print out current myV.
  cout << endl;

  add_numbers(myV);									// Use add_numbers(myV) again to see what happens.
  cout << "Second add_numbers(myV) call: ";
  print(myV);										// Print out current myV.
  cout << endl;

  cout << "Even indexes of myV: ";
  print_even(myV);									// Test out print_even(myV).
  cout << endl;

  cout << "Is 7 in myV? ";
  if (is_present(myV, 7) == true)					// If is_present(myV, 7) returns true...
  {
	  cout << "Yes.";								// ...7 is in the vector.
  }
  else
  {
	  cout << "No.";								// If is_present(myV, 7) returns false, 7 is not in the vector.
  }
  cout << endl;

  cout << "Is 2 in myV? ";
  if (is_present(myV, 2) == true)					// If is_present(myV, 2) returns true...
  {
	  cout << "Yes.";								// ...2 is in the vector.
  }
  else
  {
	  cout << "No.";								// If is_present(myV, 2) returns false, 2 is not in the vector.
  }
  cout << endl;

  vector<short> unsorted(0);						// 71-76: Create a new vector (unsorted) and use push_back() to put values in.
  unsorted.push_back(19);
  unsorted.push_back(12);
  unsorted.push_back(5);
  unsorted.push_back(30);
  unsorted.push_back(21);
  cout << "New vector (unsorted): ";
  print(unsorted);									// Print out current unsorted.
  cout << endl;
  sort(unsorted.begin(), unsorted.end());			// Use sort() to put unsorted values in order. 
  cout << "unsorted after sort(): ";
  print(unsorted);									// Print out current unsorted.
  cout << endl;


  cout << endl << "   ..::  E N D   S T U D E N T  C O D E  ::.." << endl << endl;

  system("pause");
  return 0;
}
