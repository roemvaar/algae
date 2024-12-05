/* This code was developed using ChatGPT 3.5 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "linked_list.h"
#include "unity.h"


void setUp(void)
{
    // Setup stuff here
    return;
}

void tearDown(void)
{
    // Clean stuff here
    return;
}

// /* Insertion Sort */
// /**********************************************************************************/

// /**********************************************************************************/
// /* Linked List */

// /* Test for list initialization */
// void test_linked_list_initialization(void)
// {
//     struct list_node* list = create_list();
//     TEST_ASSERT_NOT_NULL(list);
//     TEST_ASSERT_TRUE(is_empty(list));  // The list should be empty after creation
// }

/* Test for insertion at the beginning (prepend) */
void test_linked_list_prepend(void)
{
    struct list_node* list = NULL;
    TEST_ASSERT_TRUE(list_empty(list));             // List should be empty

    struct list_node *node = list_create_node(10);
    TEST_ASSERT_TRUE(list_prepend(&list, node));    // Insert at the beginning
    TEST_ASSERT_FALSE(list_empty(list));            // List should no longer be empty
    TEST_ASSERT_EQUAL(10, list->data);              // Check if the data matches
}

// /* Test for insertion at the end (append) */
// void test_linked_list_append(void)
// {
//     struct list_node* list = create_list();
//     TEST_ASSERT_TRUE(append(list, 20));  // Append to the end
//     TEST_ASSERT_EQUAL(20, list->data);   // Check if the data matches

//     // Add another element
//     TEST_ASSERT_TRUE(append(list, 30));
//     struct list_node* second_node = list->next;
//     TEST_ASSERT_NOT_NULL(second_node);
//     TEST_ASSERT_EQUAL(30, second_node->data);  // Check if the second element is correct
// }

// /* Test for insertion after a given node */
// void test_linked_list_insert_after(void)
// {
//     struct list_node* list = create_list();
//     TEST_ASSERT_TRUE(prepend(list, 10));  // Add first element
//     TEST_ASSERT_TRUE(append(list, 20));   // Append second element

//     struct list_node* second_node = list->next;  // Pointer to second node
//     TEST_ASSERT_TRUE(insert_after(list, second_node, 25));  // Insert after second node

//     struct list_node* third_node = second_node->next;
//     TEST_ASSERT_NOT_NULL(third_node);
//     TEST_ASSERT_EQUAL(25, third_node->data);  // Verify the inserted node
// }

// /* Test for list traversal */
// void test_linked_list_traversal(void) {
//     struct list_node* list = create_list();
//     append(list, 1);
//     append(list, 2);
//     append(list, 3);

//     // Traverse and check each element
//     struct list_node* current = list;
//     TEST_ASSERT_EQUAL(1, current->data);
//     current = current->next;

//     TEST_ASSERT_EQUAL(2, current->data);
//     current = current->next;

//     TEST_ASSERT_EQUAL(3, current->data);
//     TEST_ASSERT_NULL(current->next);  // It should be the end of the list
// }

// /* Test for node deletion */
// void test_linked_list_delete_node(void) {
//     struct list_node* list = create_list();
//     prepend(list, 10);
//     append(list, 20);
//     append(list, 30);

//     struct list_node* second_node = list->next;  // Pointer to the second node
//     delete_node(list, second_node);              // Delete the second node

//     // Verify the list structure after deletion
//     struct list_node* current = list;
//     TEST_ASSERT_EQUAL(10, current->data);
//     current = current->next;

//     TEST_ASSERT_EQUAL(30, current->data);  // The third node should be now after the head
//     TEST_ASSERT_NULL(current->next);       // The list should end here
// }

// /* Linked List */
// /**********************************************************************************/
