#include <iostream>
using namespace std;

void MergedLists(SortedType list1, SortedType
list2,
  SortedType& result)
{
  int length1;
  int length2;
  int counter1 = 1;
  int counter2 = 1;
  ItemType item1;
  ItemType item2;
  length1 = list1.GetLength();
  length2 = list2.GetLength();
  list1.ResetList();
  list2.ResetList();
  list1.GetNextItem(item1);
  list2.GetNextItem(item2);
  result.MakeEmpty();
  
  while (counter1 <= length1 && counter2 <= length2)
    switch (item1.ComparedTo ((item2))
    {
      case LESS  : result.InsertItem(item1);
                   list1.GetNextItem(item1);
                   counter1++;
                   break;
      case EQUAL : result.InsertItem(item1);
                   counter1++;
                   counter2++;
                   list1.GetNextItem(item1);
                   list2.GetNextItem(item2);
                   break;
     case GREATER: result.InsertItem(item2);
                   counter2++;
                   list2.GetNextItem(item2);
                   break;
    }
   if (counter1 <= length1)
    result.InsertItem(item1);
   for (counter1; counter1 < length1; counter1++)
   {
     list1.GetNextItem(item1);
     result.InsertItem(item1);
   }
   if (counter2 <= length2)
     result.InsertItem(item2);
    for (counter2; counter2 < length2; counter2++)
   {
     result.InsertItem(item2);
     list2.GetNextItem(item2);
   }
}           
