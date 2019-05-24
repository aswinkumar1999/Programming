import numpy as np
import matplotlib.pyplot as plt
import scipy.fftpack

# Number of samplepoints
N = 600
# sample spacing
T = N/16000000
x = np.linspace(0.0, N*T, N)
y = np.random.random_sample((N))*5
yf = scipy.fftpack.fft(y)
xf = np.linspace(0.0, 1.0/(2.0*T), N/2)
fig,bx = plt.subplots()
bx.plot(x,y)
plt.show()
fig, ax = plt.subplots()
ax.plot(xf, 2.0/N * np.abs(yf[:N//2]))
plt.show()
