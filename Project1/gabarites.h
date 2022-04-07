#pragma once

#include <iostream>

class Gabarites
{
	float length;
	float height;
	float width;

public:
	Gabarites();
	explicit Gabarites(float length, float height, float width);
	Gabarites(float num);
	Gabarites(const Gabarites& g2);

	void display();

	Gabarites& operator+=(const Gabarites& g2);

	Gabarites& operator-=(const Gabarites& g2);

	Gabarites& operator/=(const Gabarites& g2);

	Gabarites& operator*=(const Gabarites& g2);

	friend Gabarites operator+(const Gabarites& g1, const Gabarites& g2);
	friend Gabarites operator-(const Gabarites& g1, const Gabarites& g2);
	friend Gabarites operator*(const Gabarites& g1, const Gabarites& g2);
	friend Gabarites operator/(const Gabarites& g1, const Gabarites& g2);
};

Gabarites operator+(const Gabarites& g1, const Gabarites& g2);

Gabarites operator-(const Gabarites& g1, const Gabarites& g2);

Gabarites operator*(const Gabarites& g1, const Gabarites& g2);

Gabarites operator/(const Gabarites& g1, const Gabarites& g2);