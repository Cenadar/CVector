#include <math.h>

const CVector& CVector::operator +() const {
  return *this;
}

const CVector CVector::operator -() const {
  CVector v;
  v.x = -x;
  v.y = -y;
  return v;
}

CVector& CVector::operator +=(const CVector v) {
  x += v.x;
  y += v.y;
  return *this;
}

CVector& CVector::operator -=(const CVector v) {
  return *this += -v;
}

CVector& CVector::operator *=(double k) {
  x *= k;
  y *= k;
  return *this;
}

CVector& CVector::operator /=(double k) {
  x /= k;
  y /= k;
  return *this;
}

const CVector CVector::operator +(const CVector v) const {
  CVector tmp(*this);
  return tmp += v;
}

const CVector CVector::operator -(const CVector v) const {
  CVector tmp(*this);
  return tmp -= v;
}

const CVector CVector::operator *(double k) const {
  CVector tmp(*this);
  return tmp *= k;
}

const CVector CVector::operator /(double k) const {
  CVector tmp(*this);
  return tmp /= k;
}

double CVector::length() const {
  return sqrt(x*x + y*y);
}

double CVector::length_sq() const {
  return x*x + y*y;
}

const CVector operator *(double k, const CVector v) {
  return v * k;
}
