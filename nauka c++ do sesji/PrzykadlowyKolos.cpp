#include <iostream>
#include <cmath>
template <typename T>
class Vector {
public:
    virtual double lenght() const = 0;
    virtual void normalize() = 0;
    friend std::ostream& operator<<(std::ostream& os, const Vector<T>& vec) {
        vec.print(os);
        return os;
    }
protected:
    virtual void print(std::ostream& os) const = 0;
};
template <typename T>
class Vector2D : public Vector<T> {
protected:
    T x, y;
public:
    Vector2D(T x, T y) : x(x), y(y) {}
    double lenght() const override {
        return std::sqrt(static_cast<double>(x * x + y * y));
    }
    void normalize() override {
        double len = lenght();
        if (len > 0) {
            x /= len;
            y /= len;
        }
    }
protected:
    void print(std::ostream& os) const override {
        os << "(" << x << ", " << y << ")";
    }
};
template <typename T>
class Vector3D : public Vector2D<T> {
protected:
    T z;
public:
    Vector3D(T x, T y, T z) : Vector2D<T>(x, y), z(z) {}
    double lenght() const override {
        return std::sqrt(static_cast<double>(this->x * this->x + this->y * this->y + z * z));
    }
    void normalize() override{
        double len = lenght();
        if(len > 0){
            this->x /= len;
            this->y /= len;
            z /= len;
        }
    }
protected:
    void print(std::ostream& os) const override {
        os << "(" << this->x << ", " << this->y << ", " << z << ")";
    }
};
int main() {
    Vector2D<double> W2D(5.3, 10.1);
    std::cout << "Vector: " << W2D << std::endl;
    std::cout << "Length: " << W2D.lenght() << std::endl;
    Vector3D<double> W3D(13.5, 42.1, 5.6);
    std::cout << "Vector: " << W3D << std::endl;
    std::cout << "Length: " << W3D.lenght() << std::endl;
    return 0;
};