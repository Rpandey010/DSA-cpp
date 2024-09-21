import numpy as np;

my_list = [1, 2, 3, 4, 5]

array = np.array(my_list)

print(type(array))

print(array)

# Multidimestional array 
my_list1 = [1, 2, 3, 4, 5]
my_list2 = [6, 7, 8, 9, 10]
my_list3 = [11, 12, 13, 14, 15]

TwoDarray = np.array([my_list1, my_list2, my_list3])

print(TwoDarray)

print(TwoDarray.shape)

print(TwoDarray[0:2, 0:2])

print(TwoDarray[1: , 2:4])

print(TwoDarray[1, 1:4])
