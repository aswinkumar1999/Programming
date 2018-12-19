#include <Python.h>

static PyObject* helloworld(PyObject* self) {
   return Py_BuildValue("s", "Hello, Python extensions!!");
}

static char helloworld_docs[] =
   "helloworld( ): Any message you want to put here!!\n";

static PyMethodDef helloworld_funcs[] = {
   {"helloworld", (PyCFunction)helloworld,
      METH_NOARGS, helloworld_docs},
      {NULL}
};

void inithelloworld(void) {
   return PyModule_Create(&helloworld_funcs);
}
