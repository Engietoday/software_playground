
##################################################
## Simple example of OOP using python.
##################################################
## Free for non-commercial use.
##################################################
## Author: A. Yu
## Copyright: Copyright 2019
## Credits: [Ao Yu]
## License: GPL
## Version: 0.0.1
## Mmaintainer: A. Yu
## Email: engietoday@gmail.com
## Status: Alive
##################################################

import math

color = {'BLACK':0, 'RED':1, 'YELLOW':2, 'GREEN':3}

class Shape:
	def __init__(self):
		self.name = ''
		self.color = ''

	def setName(self, n):
		self.name = n

	def setColor(self, c):
		self.color = c

	def getName(self):
		return self.name

	def getColor(self):
		return self.color

	def getArea(self):
		print('ERROR: Called from parent class.')

class Rectangle(Shape):
	def __init__(self):
		self.width = 0
		self.height = 0
	
	def setWidth(self, w):
		self.width = w

	def setHeight(self, h):
		self.height = h

	def getArea(self):
		return self.width * self.height

class Triangle(Shape):
	def __init__(self):
		self.base = 0
		self.height = 0
	
	def setBase(self, b):
		self.base = b

	def setHeight(self, h):
		self.height = h

	def getArea(self):
		return 0.5* self.base * self.height

class Circle(Shape):
	def __init__(self):
		self.radius = 0
	
	def setRadius(self, r):
		self.radius = r

	def getArea(self):
		return math.pi * self.radius * self.radius

def main():
	print('PYTHON: ')

	Rect = Rectangle()
	Rect.setWidth(5)
	Rect.setHeight(7)
	Rect.setColor(color['BLACK'])
	print("=============================================")
	print('Rectangle Area: '+ str(Rect.getArea()))
	print('Rectangle Color Enumeration: ' + str(Rect.getColor()))
	print("=============================================")

	Tri = Triangle()
	Tri.setBase(5)
	Tri.setHeight(7)
	Tri.setColor(color['RED'])
	print("=============================================")
	print('Triangle Area: '+ str(Tri.getArea()))
	print('Triangle Color Enumeration: ' + str(Tri.getColor()))
	print("=============================================")

	Cir = Circle()
	Cir.setRadius(5)
	Cir.setColor(color['GREEN'])
	print("=============================================")
	print('Circle Area: '+ str(Cir.getArea()))
	print('Circle Color Enumeration: ' + str(Cir.getColor()))
	print("=============================================")


if __name__ == "__main__":
	main()