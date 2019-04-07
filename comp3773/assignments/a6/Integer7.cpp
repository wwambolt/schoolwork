#include <iostream>
#include "Integer7.h"
using namespace std;

Integer7::Integer7(int value)
{
	value_ = value;
}

int Integer7::get() const
{
	return value_;
}

void Integer7::set(int value)
{
	value_ = value;
}

// member operators
    
// ... from the plus family
Integer7& Integer7::operator+=(const Integer7& i)
{
    this->value_ += i.value_;
    return * this;
}
Integer7& Integer7::operator+=(int v)
{
    this->value_ += v;
    return * this;
}

// .. from the multiply family
Integer7& Integer7::operator*=(const Integer7& i)
{
    this->value_ *= i.value_;
    return * this;
}
Integer7& Integer7::operator*=(int v)
{
    this->value_ *= v;
    return * this;
}
       
// .. from the increment family
Integer7& Integer7::operator++()  // prefix; member of Integer7
{
    value_++;
    return * this;   
}
Integer7 Integer7::operator++(int) //postfix; also a member; dummy parameter!
{
    Integer7 temp = * this;
    ++ * this;
    return temp;
}

// helpers
// ... from the plus family      // note the parameter types!
Integer7 operator+(int v, Integer7 j)  // (int, value)
{
    return Integer7(v + j.get());
}
Integer7 operator+(Integer7 j, int v)  // (value, int)
{
    return Integer7(j.get() + v);
}
Integer7 operator+(Integer7 j, const Integer7& i)  // (value, const ref)!
{
    return Integer7(j.get() + i.get());
}

// .. from the times family
Integer7 operator*(int v, Integer7 j)  // (int, value)
{
    return Integer7(v * j.get());
}
Integer7 operator*(Integer7 j, int v)  // (value, int)
{
    return Integer7(j.get() * v);
}
Integer7 operator*(Integer7 j, const Integer7& i)  // (value, const ref)!
{
    return Integer7(j.get() * i.get());
}

// ... the input/output operators
istream& operator>>(istream& is, Integer7& i)
{
    is >> i;
    return is;
}
ostream& operator<<(ostream& os, const Integer7& i)
{
    return os << i.get() << endl;
}

// ... from the equality family
inline bool operator==(const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() == rhs.get());
}
inline bool operator!=(const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() != rhs.get());
}

// ... from the less-than family
inline bool operator< (const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() < rhs.get());
}
inline bool operator> (const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() > rhs.get());
}
inline bool operator<=(const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() <= rhs.get());
}
inline bool operator>=(const Integer7& lhs, const Integer7& rhs)
{
    return (lhs.get() >= rhs.get());
}