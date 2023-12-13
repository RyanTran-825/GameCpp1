#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class Vector
{
    public:
        float X, Y;
    public:
        Vector(float x=0, float y=0): X(x), Y(y){}
    public:
        //addition +
        inline Vector operator+(const Vector& v2) const{
               return Vector(X + v2.X, Y+ v2.Y);
        }
        //difference -
        inline Vector operator-(const Vector& v2) const{
               return Vector(X - v2.X, Y- v2.Y);
        }
        //multiplication *
        inline Vector operator-(const float scalar) const{
               return Vector(X*scalar, Y*scalar);
        }

        void Log(std::string msg = ""){
            std::cout<<msg<<"(X Y) - ("<< X<<" "<<Y<<")"<<std::endl;
        }


};

#endif // VECTOR_H
