class CVector {
 public:
  CVector(const double x, const double y): x(x), y(y) {}
  CVector(): x(0.0), y(0.0) {}

  const CVector& operator +() const;
  const CVector operator -() const;  
  CVector& operator +=(CVector v);
  CVector& operator -=(CVector v);
  CVector& operator *=(double k);
  CVector& operator /=(double k);
  const CVector operator +(CVector v) const;
  const CVector operator -(CVector v) const;
  const CVector operator *(double k) const;
  const CVector operator /(double k) const;
  double length() const;
  double length_sq() const;

  double x, y;
 private:
  friend const CVector operator *(double k, CVector v);
};

#include "CVector.cpp"
