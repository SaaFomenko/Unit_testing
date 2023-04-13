#ifndef TWO_LINK_LIST_H
#define TWO_LINK_LIST_H

struct ListNode
{
  ListNode(int value, ListNode* prev = nullptr, ListNode* next = nullptr);
	virtual ~ListNode();

  int value;
  ListNode* prev;
  ListNode* next;
};


class List
{
  ListNode* extractPrev(ListNode* node);

  ListNode* m_head;
  ListNode* m_tail;
  unsigned long m_size;

public:
  List();
  virtual ~List();

  bool Empty();
  unsigned long Size();
  void PushFront(int value);
  void PushBack(int value);
  int PopFront();
  int PopBack();
  void Clear();
};

#endif
