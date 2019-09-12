/** @file main.cpp
 *  @brief Simple example of OOP using C++.
 * 
 *  @author Ao Y. Yu 
 *  @bug No known bugs.
 */

#define PI 3.141592653589793238462643383279502884

#include <iostream>
 
using namespace std;

enum COLOR_ENUM{
	BLACK,
	RED,
	YELLOW,
	GREEN
};
// Base class
class Shape {
	public:
		virtual float getArea(){};
      	void setName(std::string n){
      		name = n;
      	}
      	void setColor(COLOR_ENUM c){
      		color = c;
      	}
      	std::string getName(){
      		return name;
      	}
      	COLOR_ENUM getColor(){
      		return color;
      	}
	protected:
    	string name;
    	COLOR_ENUM color;
};

// Derived class
class Rectangle: public Shape {
   	public:
      float getArea(){ 
        return (width * height); 
      }
    	void setWidth(float w){
    		width = w;
    	}
    	void setHeight(float h){
    		height = h;
    	}
    private:
    	float width = 0;
    	float height = 0;
};
// Derived class
class Triangle: public Shape {
   	public:
		void setBase(float b){
			base = b;
		}
		void setHeight(float h){
			height = h;
		}
		float getArea() { 
			return (0.5 * base * height); 
		}
    private:
    	float base = 0;
    	float height = 0;
};
// Derived class
class Circle: public Shape {
   	public:
		void setRadius(float r){
			radius = r;
		}
		float getArea() { 
			return (PI * radius * radius); 
		}
    private:
    	float radius = 0;
};

int main(int argc, char *argv[]) {
   Rectangle Rect;
   Rect.setWidth(5);
   Rect.setHeight(7);
   Rect.setColor(BLACK);
   // Print the area of the object.
   cout << "=============================================" << endl;
   cout << "Rectangle Area: " << Rect.getArea() << endl;
   cout << "Rectangle Color Enumeration: " << Rect.getColor() << endl;
   cout << "=============================================" << endl;

   Triangle *Tri = new Triangle();
   Tri->setBase(5);
   Tri->setHeight(7);
   Tri->setColor(RED);
   // Print the area of the object.
   cout << "=============================================" << endl;
   cout << "Triangle Area: " << Tri->getArea() << endl;
   cout << "Triangle Color Enumeration: " << Tri->getColor() << endl;
   cout << "=============================================" << endl;

   Circle Cir;
   Cir.setRadius(5);
   Cir.setColor(GREEN);
   // Print the area of the object.
   cout << "=============================================" << endl;
   cout << "Circle Area: " << Cir.getArea() << endl;
   cout << "Circle Color Enumeration: " << Cir.getColor() << endl;
   cout << "=============================================" << endl;

   return 0;
}