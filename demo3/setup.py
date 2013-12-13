#!/usr/bin/env python

"""
setup.py file for SWIG example
"""

from distutils.core import setup, Extension


example_module = Extension('_example',
                           include_dirs=['.'],
                           sources=['example_wrap.cxx', 'example.cpp'],
                           )

setup (name = 'example',
       author      = "Jay Parikh",
       description = """anything""",
       ext_modules = [example_module],
       py_modules = ["example"],
       )
