#include <boost/python.hpp>

char const* greet()
{
   return "hello, world";
}

BOOST_PYTHON_MODULE(conanical_04)
{
    using namespace boost::python;
    def("greet", greet);
}
