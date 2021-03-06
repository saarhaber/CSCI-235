//Â  Created by Frank M. Carrano and Timothy M. Henry.
//Â  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

//  Modified by Tiziana Ligorio for CSCI 235 Hunter college 2019

/** Implementation file for the class ArrayBag.
 @file ArrayBag.cpp */

 //  Created by Frank M. Carrano and Timothy M. Henry.
 //  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

 //  Modified by Tiziana Ligorio for CSCI 235 Hunter college 2019

 /** Header file for an array-based implementation of the ADT bag.
  @file ArrayBag.h */

  /**
  Name: Saar Haber
  Course: CS 235
  Assingment: Project 1C
  Date: 2/20/19
  */
#include "ArrayBag.hpp"
#include <cstddef>

/** default constructor**/
template<class T>
ArrayBag<T>::ArrayBag(): item_count_(0)
{
}  // end default constructor


/**
 @return item_count_ : the current size of the bag
 **/
template<class T>
int ArrayBag<T>::getCurrentSize() const
{
	return item_count_;
}  // end getCurrentSize


/**
 @return true if item_count_ == 0, false otherwise
 **/
template<class T>
bool ArrayBag<T>::isEmpty() const
{
	return item_count_ == 0;
}  // end isEmpty


/**
 @return true if new_etry was successfully added to items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::add(const T& new_entry)
{
	bool has_room = (item_count_ < DEFAULT_CAPACITY);
	if (has_room)
	{
		items_[item_count_] = new_entry;
		item_count_++;
	}  // end if

	return has_room;
}  // end add


/**
 @return true if an_etry was successfully removed from items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::remove(const T& an_entry)
{
   int found_index = getIndexOf(an_entry);
	bool can_remove = !isEmpty() && (found_index > -1);
	if (can_remove)
	{
		item_count_--;
		items_[found_index] = items_[item_count_];
	}  // end if

	return can_remove;
}  // end remove


/**
 @post item_count_ == 0
 **/
template<class T>
void ArrayBag<T>::clear()
{
	item_count_ = 0;
}  // end clear


/**
 @return the number of times an_entry is found in items_
 **/
template<class T>
int ArrayBag<T>::getFrequencyOf(const T& an_entry) const
{
   int frequency = 0;
   int cun_index = 0;       // Current array index
   while (cun_index < item_count_)
   {
      if (items_[cun_index] == an_entry)
      {
         frequency++;
      }  // end if

      cun_index++;          // Increment to next entry
   }  // end while

   return frequency;
}  // end getFrequencyOf


/**
 @return true if an_etry is found in items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::contains(const T& an_entry) const
{
	return getIndexOf(an_entry) > -1;
}  // end contains


/**
 @return a vector having the same cotntents as items_
 **/
template<class T>
std::vector<T> ArrayBag<T>::toVector() const
{
   std::vector<T> bag_contents;
	for (int i = 0; i < item_count_; i++)
		bag_contents.push_back(items_[i]);

   return bag_contents;
}  // end toVector

/**
 @param a_bag to be combined with the contents of this bag
 @return a new ArrayBag that contains all elements from this bag (items_)
 and as many elements from the argument a_bag as space requires. Note
 that it may contain duplicates
 */
 template<class T>
 ArrayBag<T> ArrayBag<T>::bagUnion(const ArrayBag<T>& a_bag) const
 {
	 ArrayBag<T> unionBag;

	 for (int i=0; i<getCurrentSize(); i++) {
   unionBag.add(items_[i]);
		}

	for (int j=0; j<a_bag.getCurrentSize(); j++) {
	unionBag.add(a_bag.items_[j]);
	}

	return unionBag;
}

// Note: Because ArrayBag is of fixed size, bagUnion will copy the contents of the calling bag first and
// then whatever fits from the argument a_bag

 /**
 @param a_bag to be intersected with the contents of this bag (items_)
 @return a new ArrayBag that contains the intersection of the contents
 of this bag and those of the argument a_bag. This intersection does
 not contain duplicates (e.g. every element occurring in BOTH bags will
 be found only once in the intersection, no matter how many
 occurrences in the original bags) as in set intersection A ∩ B
 */
 template<class T>
 ArrayBag<T> ArrayBag<T>::bagIntersectionNoDuplicates(const ArrayBag<T>& a_bag) const
 {
	 ArrayBag<T> intersectedBag;

	 for (int i=0; i<getCurrentSize(); i++)
	  {
			if (intersectedBag.getIndexOf(items_[i]) == -1 && a_bag.contains(items_[i]))
			{
				intersectedBag.add(items_[i]);
			}
		}

	 return intersectedBag;
 }

 /**
 @param a_bag to be subtracted from this bag
 @return a new ArrayBag that contains only those items that occur in this
 bag or in a_bag but not in both,
 */
 template<class T>
 ArrayBag<T> ArrayBag<T>::bagDifference(const ArrayBag<T>& a_bag) const
 {
	 ArrayBag<T> onlyOnceBag;

	 for (int i=0; i<getCurrentSize(); i++)
	 {
		 if ( onlyOnceBag.getIndexOf(items_[i])==-1
		 && !a_bag.contains(items_[i]))
		  {
				onlyOnceBag.add(items_[i]);
			}
	 }
	 for (int i=0; i<a_bag.getCurrentSize(); i++)
	 {
		 if ( onlyOnceBag.getIndexOf(a_bag.items_[i])==-1
		 && !(contains(a_bag.items_[i])))
		  {
				onlyOnceBag.add(a_bag.items_[i]);
			}
	 }

	 return onlyOnceBag;
 }


//Extra Credit:
/**
 @param a_bag to be intersected with the contents of this bag
 @return a new ArrayBag that contains the intersection of the contents
 of this bag and those of the argument a_bag. This intersection
 may contain duplicate items (e.g. if object x occurs 5 times in
 one bag and 3 times in the other, the intersection contains 3
 occurrences of that item)
 */
 template<class T>
 ArrayBag<T> ArrayBag<T> ::bagIntersection(const ArrayBag<T>& a_bag) const
{
	ArrayBag<T> intersectedBag;

	for (int i=0; i<getCurrentSize(); i++)
	{
		if ((getFrequencyOf(items_[i])<=a_bag.getFrequencyOf(items_[i]))
		&& !intersectedBag.contains(items_[i]))
		{
			for (int j=0; j<getFrequencyOf(items_[i]); j++) {
					intersectedBag.add(items_[i]);
			}
		}
	}

	for (int k=0; k<a_bag.getCurrentSize(); k++)
	{
		if ((getFrequencyOf(a_bag.items_[k])>=a_bag.getFrequencyOf(a_bag.items_[k]))
		&& !intersectedBag.contains(a_bag.items_[k])  )
		{
			for (int m=0; m<a_bag.getFrequencyOf(a_bag.items_[k]); m++) {
					intersectedBag.add(a_bag.items_[k]);
			}
		}
	}

 return intersectedBag;
}

// PRIVATE

/**
 @param target to be found in items_
 @return either the index target in the array items_ or -1,
 if the array does not containthe target.
 **/
template<class T>
int ArrayBag<T>::getIndexOf(const T& target) const
{
	bool found = false;
   int result = -1;
   int search_index = 0;

   // If the bag is empty, item_count_ is zero, so loop is skipped
   while (!found && (search_index < item_count_))
   {
      if (items_[search_index] == target)
      {
         found = true;
         result = search_index;
      }
      else
      {
         search_index++;
      }  // end if
   }  // end while

   return result;
}  // end getIndexOf
