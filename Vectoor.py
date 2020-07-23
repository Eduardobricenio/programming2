
In [1]: import numpy as np
In [2]: a = np.array([[1, 2], [3, 4]])
In [3]: a + a
Out[3]:
array([[2, 4],
       [6, 8]])
In [4]: m = np.matrix([[1, 2], [3, 4]])
In [5]: m + m
Out[5]:
matrix([[2, 4],
        [6, 8]])
In [6]: a + m # Podemos sumar arrays y matrices
Out[6]:
matrix([[2, 4],
        [6, 8]])
In [7]: 2 * a # Producto por un escalar
Out[7]:
array([[2, 4],
       [6, 8]])
In [8]: -m
Out[8]:
matrix([[-1, -2],
        [-3, -4]])
