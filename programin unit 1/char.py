# -*- coding: utf-8 -*-
"""
Created on Wed May 27 10:33:33 2020

@author: erick
"""


import re 
  

ini_string = input("")
  
# printing initial string 
print ("initial string : ", ini_string) 
  
# function to demonstrate removal of characters 
  
result = re.sub('[\W_]+', '', ini_string) 
  
# printing final string 
print ("final string", result) 