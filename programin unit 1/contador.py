# -*- coding: utf-8 -*-
"""
Created on Thu May 28 21:51:34 2020

@author: erick
"""
import re #Importamos la funcion
from collections import Counter #Funcion para poder contar cuantas letras hay
p=input("Introduce el texto")
p_minuscula=p.lower()  #Para convertirlo en minusculas
if not re.search("[@*#$%&]",p_minuscula): #Para comprobar que no es un caracter especial
    Counter(p_minuscula) #Cuenta las letras
    print(Counter(p_minuscula)) #Imprime el contador