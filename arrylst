// both the array based and linked implementations are the same

#include <iostream>
using namespace std;
void MergeLists (SortedType list1, SortedType list2, SortedType & result) //call sorted type list
{ 
  int length1;
  int length2; // set length 
  int counter1 = 1;
  int counter2 = 1;
  ItemType item1; // items
  ItemType item2;
  length1 = list1.GetLength (); //list
  length2 = list2.GetLength ();
  list1.ResetList ();  // reset
  list2.ResetList ();
  list1.GetNextItem (item1); // go to next item
  list2.GetNextItem (item2);
  result.MakeEmpty (); // result
  while (counter1 <= length1 && counter2 <= length2) // comparison logic
    switch (item1.ComparedTo (item2))
    
      {
      case LESS: // for less counters
	result.InsertItem (item1);
	list1.GetNextItem (item1);
	counter1++; // set counters
	break;
	
      case EQUAL: // for equal
	result.InsertItem (item1);
	counter1++;
	counter2++;
	list1.GetNextItem (item1);
	list2.GetNextItem (item2);
	break;
    
      case GREATER: // greater
	result.InsertItem (item2); // inserting results
	counter2++;
	list2.GetNextItem (item2);
	break;
      }
// counter going through items
  if (counter1 <= length1)
    result.InsertItem (item1);
  for (counter1; counter1 < length1; counter1++) // comparing lengths and inserting items for counters

    {
      list1.GetNextItem (item1);
      result.InsertItem (item1);
    }

  if (counter2 <= length2)
    result.InsertItem (item2);
  for (counter2; counter2 < length2; counter2++) // same but for counter 2

    {
      result.InsertItem (item2);
      list2.GetNextItem (item2); // get result
    }
} // end bracket
