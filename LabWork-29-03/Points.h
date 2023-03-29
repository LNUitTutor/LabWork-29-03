#pragma once
#include <iostream>

template <typename TNum>
class CPoint
{
	TNum x, y;
public:
	CPoint(TNum a, TNum b) :x(a), y(b) {}
	CPoint() :x(0), y(0) {} // TNum(0) ???
	TNum get_x() const { return x; }
	TNum get_y() const { return y; }
	void print_on(std::ostream& os) const
	{
		os << '(' << x << "; " << y << ')';
	}
	double distance(const CPoint& p) const;
	CPoint operator+(const CPoint& p) const
	{
		return CPoint(this->x + p.x, this->y + p.y);
	}
	CPoint operator-(const CPoint& p) const
	{
		return CPoint(this->x - p.x, this->y - p.y);
	}
};

template<typename TNum>
inline double CPoint<TNum>::distance(const CPoint& p) const
{
	TNum _y = y - p.y;
	return sqrt(pow(x - p.x, 2) + (double)_y*_y);
}

template<typename TNum>
std::ostream& operator<<(std::ostream& os, const CPoint<TNum>& A)
{
	A.print_on(os); return os;
}
template<typename TNum>
CPoint<TNum> operator*(const CPoint<TNum>& p, TNum n)
{
	return CPoint<TNum>(p.get_x() * n, p.get_y() * n);
}