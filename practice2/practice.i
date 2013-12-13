
%module practice
%{

#include "practice.h"

%}

%include "std_vector.i"
%include "std_string.i"
%include "practice.h"

%template(vector_string) std::vector<std::string>;
