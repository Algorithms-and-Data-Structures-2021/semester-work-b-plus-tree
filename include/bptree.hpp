#pragma once
#include "node.hpp"
int const MAX = 3;
namespace itis {

  struct BPTree {
   private:
    Node *root;
    void insertInternal(int, Node *, Node *);
    Node *findParent(Node *, Node *);

   public:
    BPTree();
    void search(int);
    void insert(int);
    void display(Node *);
    Node *getRoot();
  };


  void search(int x);

  void insert(int x);

  void insertInternal(int x, Node *cursor, Node *child);

  Node findParent(Node *cursor, Node *child);

  // Print the tree
  void display(Node *cursor);

  // Get the root
  Node getRoot();

}