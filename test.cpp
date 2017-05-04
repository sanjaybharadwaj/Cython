#include<iostream>
#include<Python.h>
#include"derived.h"
using namespace std;

int main(){
 
  Py_Initialize();

  if (PyErr_Occurred()) {
	cout << "Python initialization failed!\n";
        PyErr_Print();
    }

  PyObject* path = PySys_GetObject("path");
  PyObject* result = PyObject_CallMethod(path,"append","(s)",".");
  Py_XDECREF(result);

  PyObject* m = PyInit_derived();
  if (m==NULL) {
    cout << "Module initialization failed!\n";
    if (PyErr_Occurred()) {
        PyErr_Print();
    }
}
  cout << calc(12, 16, 0) <<endl;
  Py_Finalize();
  return 0;
}

