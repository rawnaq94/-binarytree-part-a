  
#include "doctest.h"

#include "BinaryTree.hpp"
#include <iostream>
#include <stdexcept>

using namespace doctest;
using namespace std;
using namespace ariel;




// ---------------------------- test for int value -----------------------------
TEST_CASE("tree_of_ints")
{
    BinaryTree<int> tree_of_ints;
    CHECK_NOTHROW(tree_of_ints.add_root(1));
    CHECK_NOTHROW(tree_of_ints.add_left(1, 9));
    CHECK_NOTHROW(tree_of_ints.add_left(1, 4));
    CHECK_THROWS(tree_of_ints.add_left(6, 4));  // 6 does not exist in the tree
    CHECK_THROWS(tree_of_ints.add_left(0, 4));  // 0 does not exist in the tree
    CHECK_THROWS(tree_of_ints.add_left(8, 4));  // 8 does not exist in the tree
    CHECK_NOTHROW(tree_of_ints.add_right(1, 3));
    CHECK_NOTHROW(tree_of_ints.add_right(1, 5));
    CHECK_THROWS(tree_of_ints.add_right(6, 4));  // 6 does not exist in the tree
    CHECK_THROWS(tree_of_ints.add_right(0, 4));  // 0 does not exist in the tree
    CHECK_THROWS(tree_of_ints.add_right(8, 4));  // 8 does not exist in the tree
    CHECK_NOTHROW(tree_of_ints.add_root(2));   //exchange
    CHECK_NOTHROW(tree_of_ints.add_root(4));   //exchange
    CHECK_NOTHROW(tree_of_ints.add_root(3));   //exchange
  
}






// ---------------------------- test for string value -----------------------------
TEST_CASE("tree_of_strings") {
    BinaryTree<string>tree_of_strings;
    CHECK_NOTHROW(tree_of_strings.add_root("root"));
    CHECK_NOTHROW(tree_of_strings.add_left("root", "left"));
    CHECK_NOTHROW(tree_of_strings.add_left("root", "new left"));
    CHECK_THROWS(tree_of_strings.add_left("yes", "no"));   // yes does not exist in the tree
    CHECK_THROWS(tree_of_strings.add_left("today", "no"));  // today does not exist in the tree
    CHECK_THROWS(tree_of_strings.add_left("ok", "no"));      // ok does not exist in the tree
    CHECK_NOTHROW(tree_of_strings.add_right("root", "right"));
    CHECK_NOTHROW(tree_of_strings.add_right("root", "new right"));
    CHECK_THROWS(tree_of_strings.add_right("yes", "no"));    // yes does not exist in the tree
    CHECK_THROWS(tree_of_strings.add_right("today", "no"));  // today does not exist in the tree
    CHECK_THROWS(tree_of_strings.add_right("ok", "no"));      // ok does not exist in the tree
    CHECK_NOTHROW(tree_of_strings.add_root("new root"));
    CHECK_NOTHROW(tree_of_strings.add_root("small root"));
    CHECK_NOTHROW(tree_of_strings.add_root("big root"));
  
}
