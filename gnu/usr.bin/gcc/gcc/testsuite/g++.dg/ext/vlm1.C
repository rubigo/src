// { dg-options "" }

template <class T> struct A {};
 
struct B {
  static const int s;
  A<int[s]> a; // { dg-error "variably modified|no type" }
};
 
const int B::s=16;
 
B b;
 
