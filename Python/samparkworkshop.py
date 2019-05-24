import numpy
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

start=0
end=100000
interval=2

def f(x):
	return x*x
def g(x):
	return x*x*x

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
x = numpy.arange(start,end, interval)
y = f(x)
z = g(x)
ax.plot(x,y,z)
# default is line plot , also available (Scatter , wireframe , surface , Contour plot)
# https://matplotlib.org/mpl_toolkits/mplot3d/tutorial.html
plt.show()





# start=0
# end=100
# interval=2
#
# def f(x):
# 	return x*x
# import numpy
# from matplotlib import pyplot as plt
# x = numpy.arange(start,end, interval)
# y = f(x)
# plt.plot(x,y)
# plt.scatter(x,y)
# plt.show()


#
#
# import numpy
# def f(x):
# 	return x*x
#
# a = numpy.arange(0,5)
# y = f(a)
# print(y)
