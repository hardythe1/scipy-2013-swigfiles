#!/usr/bin/env python

"""
setup.py file for SWIG example
"""

from distutils.core import setup, Extension


practice_module = Extension('_practice',
                           sources=['practice_wrap.c', 'practice.c'],
                           )

setup (name = 'practice',
       version = '0.1',
       author      = "Jay Parikh",
       description = """power and display function""",
       ext_modules = [practice_module],
       py_modules = ["practice"],
       )
