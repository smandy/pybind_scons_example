// main.cpp
#include <pybind11/pybind11.h>
// #include <pybind11/complex.h>

#include "mycomplex.cpp"

namespace py = pybind11;

PYBIND11_MODULE(pybind_complex, m) {
    py::class_<ComplexNumber>(m, "ComplexNumber")
        .def(py::init<double, double>())
        .def_property("real", &ComplexNumber::real, &ComplexNumber::set_real)
        .def_property("imag", &ComplexNumber::imag, &ComplexNumber::set_imag);
}
