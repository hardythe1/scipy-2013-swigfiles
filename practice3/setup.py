
from distutils.core import Extension,setup

practice_module = Extension('_practice',
                    sources=['practice.cpp','practice_wrap.cxx']      

)


setup(name='practice',
    author='jay parikh',
    description='I am now good in swig',
    ext_modules=[practice_module],
    py_modules=['practice']
)
