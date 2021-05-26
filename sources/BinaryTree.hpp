#pragma once
#include <iostream>



namespace ariel
{
   
    template <class Type>
     
       class BinaryTree
       {
            public:
            class Node
            {
            public:
                Type value;
                Node * father;
                Node * right;
                Node * left;
            };
         
        Node * head;
        BinaryTree():head(nullptr){}
        ~BinaryTree()
        {
            delete head;
        }
         
        BinaryTree(const BinaryTree& other){}

        BinaryTree& add_root(const Type &a) // 1 input to root
        {
            return *this;
        }
        BinaryTree& add_left(const Type &a,const Type &b) // 2 input:first input already exists - second input new left child
        {
            return *this;
        }
        BinaryTree& add_right(const Type &a,const Type &b) //  2 input:first input already exists - second input new right child
        {
            return *this;
        }
        friend std::ostream& operator<< (std::ostream& output, const BinaryTree& c) // operator<< 
        {
            return output;
        }
        
       // ----------------------- iterators */-/++/++(int)/==/!= to sort by preorder -----------------------
    class preorder_iterator 
    {
        
        public:
        Node * root;
        
        preorder_iterator(Node* ptr=nullptr):root(ptr){}
        Type& operator*()
        {
            return this->root->value;
        }
        Type* operator->()
        {
            return &(this->root->value);
        }
        preorder_iterator& operator++()
        {
            return *this;
        }
        const preorder_iterator operator++(int)
        {
            return *this;
        }
        bool operator==(const preorder_iterator &itr)
        {
            return true;
        }
        bool operator!=(const preorder_iterator &itr)
        {
            return false;
        }
    };
         
         
    // ----------------------- iterators */-/++/++(int)/==/!= to sort by inorder -----------------------
    class inorder_iterator 
    {
        public:
        Node * root;
        
        inorder_iterator(Node* ptr=nullptr):root(ptr){}
        Type& operator*()
        {
            return this->root->value;
        }
        Type* operator->()
        {
            return &(this->root->value);
        }
        inorder_iterator& operator++()
        {
            return *this;
        }
        const inorder_iterator operator++(int)
        {
            return *this;
        }
        bool operator==(const inorder_iterator &itr)
        {
            return true;
        }
        bool operator!=(const inorder_iterator &itr)
        {
            return false;
        }
    };
         
         
   // ----------------------- iterators */-/++/++(int)/==/!= to sort by postorder -----------------------
         
    class postorder_iterator
    {
    
        public:
        Node * root;
        postorder_iterator(Node* ptr=nullptr):root(ptr){}
        Type& operator*()
        {
            return this->root->value;
        }
        Type* operator->()
        {
            return &(this->root->value);
        }
        postorder_iterator& operator++()
        {
            return *this;
        }
        const postorder_iterator operator++(int)
        {
            return *this;
        }
        bool operator==(const postorder_iterator &itr)
        {
            return true;
        }
        bool operator!=(const postorder_iterator &itr)
        {
            return false;
        }
    };
         
         
    // --------------------------------- begain and end preorder/inorder/postorder ----------------------------------  
         preorder_iterator begin_preorder()
        {
            return preorder_iterator{nullptr};
        }
        preorder_iterator end_preorder()
        {
            return preorder_iterator{nullptr};
        }  
        inorder_iterator begin()
        {
            return inorder_iterator{nullptr};
        }
        inorder_iterator end()
        {
            return inorder_iterator{nullptr};
        }
        inorder_iterator begin_inorder()
        {
            return inorder_iterator{nullptr};
        }
        inorder_iterator end_inorder()
        {
            return inorder_iterator{nullptr};
        }
        postorder_iterator begin_postorder()
        {
            return postorder_iterator{nullptr};
        }
        postorder_iterator end_postorder()
        {
            return postorder_iterator{nullptr};
        }
};
}

