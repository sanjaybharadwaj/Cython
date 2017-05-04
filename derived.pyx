from base cimport recip

cdef extern from "Point.h":
  cdef cppclass Point:
    Point() except +
    Point(double, double) except +
    double getDist()

cpdef public double calc(double a, double b):
  cdef Point P = Point(a, b)
  return recip(int(P.getDist()))
