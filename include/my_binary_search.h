#ifndef MY_BINARY_SEARCH_H_
#define MY_BINARY_SEARCH_H_

/*
 * Binary Search test if a value exists in a sorted sequence.
 * Returns true if any element in the range [first, last) is
 * equivalent to val, and false otherwise.
 * 
 * Elements are compared using operator "<" for the first version,
 * and "comp" for the second version.Two elements, a and b are considered
 * equivalent if (!(a < b) && !(b < a)) or if (!comp(a, b) && !comp(b, a)).
 * 
 * The elements in the range shall already be sorted according to this same
 * criterion (operator "<" or "comp").
 *
 */

#include <vector>

/*
 * The elements are compared using operator "<"
 * template< class ForwardIt, class T >
 * constexpr bool binary_search( ForwardIt first, ForwardIt last,
 *                               const T& value );
 */

template< class ForwardIt, class T >
bool my_binary_search( ForwardIt first, ForwardIt last, const T& value);

bool binary_search(std::vector<int>& nums, int target);


/*
 * The elements are compared using "comp"
 * template< class ForwardIt, class T>
 * constexpr bool binary_search( ForwardIt first, ForwardIt last,
 *                               const T& value );
 */


#endif // MY_BINARY_SEARCH_H_
