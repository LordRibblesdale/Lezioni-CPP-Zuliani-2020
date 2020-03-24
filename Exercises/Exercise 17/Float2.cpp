//
// Created by Green on 19/03/2020.
//

/* Creare una classe Float2 che rappresenti un vettore bidimensionale di numeri float.
 * Fare l'overload di tutti gli operatori ( vettore + vettore, vettore + scalare, vettore + scalare,...)
 * implementare anche prodotti scalari/vettoriali/normalizzazione...
 * Testare tutti gli operatori in un main a parte.
 */

#include <cmath>
#include "Float2.h"

Float2::Float2() : x(0), y(0) {}

Float2::Float2(const float& x, const float& y) : x(x), y(y) {}

Float2::~Float2() {
   x = 0;
   y = 0;
}

//TODO assenza di "+=" e "-="

Float2 Float2::operator+(const Float2& point) {
   return Float2(x + point.getX(), y + point.getY());
}

Float2 Float2::operator-(const Float2& point) {
   return Float2(x - point.getX(), y - point.getY());
}

Float2 Float2::operator*(const float& scalar) {
   return Float2(scalar*x, scalar*y);
}

float Float2::dotProduct(const Float2& point) const {
   return x * point.getX() + y * point.getY();
}

Float2 Float2::crossProduct() const {
   return Float2(y, -x);
}

float Float2::getX() const {
   return x;
}

float Float2::getY() const {
   return y;
}

void Float2::setX(const float& x) {
   Float2::x = x;
}

void Float2::setY(const float& y) {
   Float2::y = y;
}

float Float2::l2Norm() const {
   return sqrtf(x*x + y*y);
}

Float2 Float2::normalize() {
   float norm = l2Norm();
   x /= norm;
   y /= norm;

   return *this;
}

ostream& operator<<(ostream& stream, const Float2& point) {
   return stream << "Punto (" << point.getX() << ", " << point.getY() <<")";
}


Float2 operator*(const float& scalar, const Float2& point) {
   return Float2(point.getX()*scalar, point.getY()*scalar);
}


