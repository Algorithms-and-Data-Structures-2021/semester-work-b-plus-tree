#pragma once
namespace itis {
  struct Node {
   private:
    bool IS_LEAF;
    int *key, size;
    Node **ptr;
    friend struct BPTree;

   public:
    Node();
  };
}