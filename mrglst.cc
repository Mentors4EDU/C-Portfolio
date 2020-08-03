#include <iostream>
using namespace std;
// Set sorted list
void MergedLists(SortedType list1, SortedType
list2,
  SortedType& result)
{
  int length1;
  int length2;
  // Add counter
  int counter1 = 1;
  int counter2 = 1;
  ItemType item1;
  ItemType item2;
  length1 = list1.GetLength();
  length2 = list2.GetLength();
  list1.ResetList(); // Add reset
  list2.ResetList();
  list1.GetNextItem(item1); // Go through items
  list2.GetNextItem(item2);
  result.MakeEmpty();
  
  while (counter1 <= length1 && counter2 <= length2) // while/switch for counter
    switch (item1.ComparedTo ((item2))
    {
      case LESS  : result.InsertItem(item1); // Insert items
                   list1.GetNextItem(item1);
                   counter1++; // compare
                   break;
      case EQUAL : result.InsertItem(item1);
                   counter1++; // compare length
                   counter2++;
                   list1.GetNextItem(item1);
                   list2.GetNextItem(item2);
                   break;
     case GREATER: result.InsertItem(item2); //insert item
                   counter2++; //compare length
                   list2.GetNextItem(item2);
                   break;
    }
   if (counter1 <= length1)
    result.InsertItem(item1); // result for length
   for (counter1; counter1 < length1; counter1++) // further counter logic
   {
     list1.GetNextItem(item1);
     result.InsertItem(item1);
   }
   if (counter2 <= length2)
     result.InsertItem(item2);
    for (counter2; counter2 < length2; counter2++)
   {
     result.InsertItem(item2); //result
     list2.GetNextItem(item2);
   }
}  // closing bracket         
