#ifndef ELEMENT_H
#define ELEMENT_H

// include C/C++ header libraries
#include<iostream>  // std::cout

class Element {
public:
  // public data

  // public methods
  void internalForce(void);

  void stiffness(void);

protected:
  // protected data

  // protected methods

private:
  // private data
  Section* m_sections;
  Element* m_subElements;

  // private methods

}; // Element

#endif // ELEMENT_H
