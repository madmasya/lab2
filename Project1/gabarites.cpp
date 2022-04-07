#include "gabarites.h"

using std::cout;
using std::cin;
using std::endl;

Gabarites::Gabarites()
	{
		cout << "������� ������: ";
		cin >> width;
		cout << "������� ������: ";
		cin >> height;
		cout << "������� �������: ";
		cin >> length;
	}

Gabarites::Gabarites(float length, float height, float width) : length(length), width(width), height(height) 
{}

Gabarites::Gabarites(float num) : length(num), width(num), height(num) {}

Gabarites::Gabarites(const Gabarites& g2)
{
	length = g2.length;
	width = g2.width;
	height = g2.height;
}

void Gabarites::display()
{
	cout << "������: " << width << endl;
	cout << "������: " << height << endl;
	cout << "�������: " << length << endl;
}

Gabarites& Gabarites::operator+=(const Gabarites& g2)
{
	length += g2.length;
	width += g2.width;
	height += g2.height;
	return *this;
}

Gabarites& Gabarites::operator-=(const Gabarites& g2)
{
	length -= g2.length;
	width -= g2.width;
	height -= g2.height;
	return *this;
}

Gabarites& Gabarites::operator/=(const Gabarites& g2)
{
	length /= g2.length;
	width /= g2.width;
	height /= g2.height;
	return *this;
}

Gabarites& Gabarites::operator*=(const Gabarites& g2)
{
	length *= g2.length;
	width *= g2.width;
	height *= g2.height;
	return *this;
}

Gabarites operator+(const Gabarites& g1, const Gabarites& g2)
{
	return Gabarites(g1.length + g2.length, g1.height + g2.height, g1.width + g2.width);
}

Gabarites operator-(const Gabarites& g1, const Gabarites& g2)
{
	return Gabarites(g1.length - g2.length, g1.height - g2.height, g1.width - g2.width);
}

Gabarites operator*(const Gabarites& g1, const Gabarites& g2)
{
	return Gabarites(g1.length * g2.length, g1.height * g2.height, g1.width * g2.width);
}

Gabarites operator/(const Gabarites& g1, const Gabarites& g2)
{
	return Gabarites(g1.length / g2.length, g1.height / g2.height, g1.width / g2.width);
}