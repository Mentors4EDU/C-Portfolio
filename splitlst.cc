#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;
enum RelationType
{
     LESS, GREATER, EQUAL // call relational variables
};

class ItemType

{
public:
     ItemType();  
     RelationType ComparedTo(ItemType item); //start item comparison
     void Print(ofstream &)const; // print
     void Initialize(int number); // initialize
private:
     int value;
};

template<class ItemType>
struct NodeType

{
     ItemType info;
     NodeType *next;
};

template<class ItemType>
class UnsortedType //unsorted types
{

public:
     UnsortedType();
     ~UnsortedType();
     void MakeEmpty();
     bool IsFull() const;
     int LengthIs() const;
     void RetrieveItem(ItemType&, bool&);
     void InsertItem(ItemType);
     void DeleteItem(ItemType);
     void ResetList();
     bool IsLastItem() const;
     void GetNextItem(ItemType&);
// Add Split lists     
     void SplitLists(UnsortedType<ItemType> list, ItemType item, UnsortedType<ItemType>& list1, UnsortedType<ItemType>& list2);
private:
     int list_length;
     NodeType<ItemType> *list_Data;
     NodeType<ItemType> *current_Pos;
};

template<class ItemType> // start split list template class
void UnsortedType::SplitLists(UnsortedType<ItemType> list, ItemType item, UnsortedType<ItemType>& list1, UnsortedType<ItemType>& list2)

{
     ItemType listItem;
     list.ResetList();
     list1.MakeEmpty();
     list2.MakeEmpty();
     while(!list.IsLastItem())
     {
          list.GetNextItem(listItem);
          if(listItem.ComparedTo(item) == LESS || listItem.ComparedTo(item) == EQUAL)
              list1.InsertItem(listItem);
          else
              list2.InsertItem(listItem);
     }
}
