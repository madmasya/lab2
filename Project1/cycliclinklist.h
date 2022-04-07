#pragma once

#include <iostream>

class Element
{
public:
	int value;
	Element* next;
	size_t index;
public:
	Element(int value, Element* next, size_t index);
};

class CyclicLinkList
{
private:
	Element* first;
	Element* last;
	size_t size_of_list;
	static int count_of_elements;
public:
	CyclicLinkList();

	CyclicLinkList(const CyclicLinkList& l1);

	~CyclicLinkList();

	void AddElement();

	void RemoveElement();

	void display();

	CyclicLinkList& operator++();
	CyclicLinkList& operator++(int);

	friend CyclicLinkList& operator--(CyclicLinkList&);
	friend CyclicLinkList& operator--(CyclicLinkList&, int);
};

CyclicLinkList& operator--(CyclicLinkList& l1);
CyclicLinkList& operator--(CyclicLinkList& l1, int);