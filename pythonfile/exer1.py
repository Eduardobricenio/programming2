  
# -*- coding: utf-8 -*-
"""
****** Write a Python program to read an entire text file ******
"""

def file_read(fname):
        txt = open(fname)
        print(txt.read())

file_read('eduardo.txt')