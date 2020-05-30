import matplotlib.pyplot as plt
import numpy as np

y = np.loadtxt('datos.dat', dtype= None)
plt.plot(y[:,0],y[:,1]) 
plt.ylabel("Altura[m]")
plt.xlabel("Tiempo[s]")
plt.savefig("01_grafica.pdf")