#include "cycliclinklist.h"

using std::cout;
using std::cin;
using std::endl;

Element::Element(int value, Element* next, size_t index) : value(value), next(next), index(index)
{}

CyclicLinkList::CyclicLinkList()
{
	cout << "Введите размер списка: "; cin >> size_of_list;
	first = new Element(0, nullptr, 0);
	first->next = first;
	last = first;
	int i = 0;
	while (i++ != size_of_list - 1)
	{
		Element* temp = new Element(0, first, i);
		last->next = temp;
		last = temp;
	}
}

CyclicLinkList::CyclicLinkList(const CyclicLinkList& l1)
{
	int* mass = new int[l1.size_of_list]{};
	Element* temp = l1.first;
	size_t index = 0;
	for (int i = 0; i < l1.size_of_list; i++)
	{
		mass[index++] = temp->value;
		temp = temp->next;
	}
	first = new Element(mass[0], nullptr, 0);
	first->next = first;
	last = first;
	size_of_list = l1.size_of_list;
	int i = 1;
	while (i++ < size_of_list)
	{
		Element* temp = new Element(mass[i - 1], first, i - 1);
		last->next = temp;
		last = temp;
	}
	delete[] mass;
}

CyclicLinkList::~CyclicLinkList()
{
	Element* temp = first;
	for (int i = 0; i < size_of_list; i++)
	{
		temp = temp->next;
		delete first;
		first = temp;
	}
}

void CyclicLinkList::AddElement()
{
	if (count_of_elements == size_of_list)
	{
		cout << "Список полон!\n";
		return;
	}
	int value; size_t position;
	cout << "Введите элемент: "; cin >> value;
	cout << "Введите позицию для добавления элемента: "; cin >> position;
	if (position >= size_of_list || position < 0)
	{
		cout << "Введена некорректная позиция элемента! Размер списка: " << size_of_list << endl;
		return;
	}
	Element* temp = first;
	do
	{
		temp = temp->next;
	} while (temp->index != position);
	temp->value = value;
	cout << "\nЭлемент успешно добавлен!\n\n";
	count_of_elements++;
}

void CyclicLinkList::RemoveElement()
{
	if (count_of_elements == 0)
	{
		cout << "Список пуст!\n"; return;
	}

	size_t position;
	cout << "Введите позицию для извлечения элемента: "; cin >> position;

	if (position >= size_of_list || position < 0)
	{
		cout << "Введена некорректная позиция элемента! Размер списка: " << size_of_list << endl;
		return;
	}

	Element* temp = first;
	do
	{
		temp = temp->next;
	} while (temp->index != position);

	if (temp->value == 0)
	{
		cout << "Элемента с этим индексом в списке нет!\n"; return;
	}

	cout << "Извлечен элемент: " << temp->value << endl;
	temp->value = 0;
	count_of_elements--;
}

void CyclicLinkList::display()
{
	if (count_of_elements <= 0)
	{
		cout << "Список пуст!\n"; return;
	}
	Element* temp = first;
	do
	{
		cout << temp->value << endl;
		temp = temp->next;
	} while (temp != last->next);
}

CyclicLinkList& CyclicLinkList::operator++()
{
	this->AddElement();
	return *this;
}

CyclicLinkList& CyclicLinkList::operator++(int)
{
	this->AddElement();
	this->AddElement();
	return *this;
}

int CyclicLinkList::count_of_elements = 0;

CyclicLinkList& operator--(CyclicLinkList& l1)
{
	l1.RemoveElement();
	return l1;
}

CyclicLinkList& operator--(CyclicLinkList& l1, int)
{
	if (l1.count_of_elements == 0)
	{
		cout << "Список пуст!\n"; 
		return l1;
	}

	size_t position;
	cout << "Введите позицию для извлечения элемента и следующего за ним: "; cin >> position;

	if (position >= l1.size_of_list || position < 0)
	{
		cout << "Введена некорректная позиция элемента! Размер списка: " << l1.size_of_list << endl;
		return l1;
	}

	Element* temp = l1.first;
	do
	{
		temp = temp->next;
	} while (temp->index != position);

	if (temp->value == 0)
	{
		cout << "Элемента с индексом " << position << " в списке нет!\n";
		return l1;
	}

	cout << "Извлечен элемент: " << temp->value << endl;
	temp->value = 0;
	cout << "Извлечен элемент: " << temp->next->value << endl;
	if(temp->next->value == 0)
		l1.count_of_elements--;
	else l1.count_of_elements -= 2;
	temp->next->value = 0;
	return l1;
}