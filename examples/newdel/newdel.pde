// -*- mode: c++ -*-

// This code is in the public domain.

#include <newdel.h>

// Our custom class:
class Foo
{
public:
  Foo();
  ~Foo();
};

// Constructor:
Foo::Foo()
{
  Serial.println("Foo created.");
}

// Destructor:
Foo::~Foo()
{
  Serial.println("Foo destroyed.");
}

void setup()
{

  // Initialize serial communication:
  Serial.begin(9600);
  delay(1000);

}

void loop()
{

  // Create a Foo object:
  Foo *foo = new Foo;
  delay(1000);

  // Destroy the object:
  delete foo;
  delay(1000);

}

// jl
