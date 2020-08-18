

import matplotlib.pyplot as plt
import numpy as np

map_grid = np.full((20,20), int(10))

x = [i for i in range(2,5)]
y = [i for i in range(2,5)]


map_grid[2:5, 3:8] = 5
map_grid[7, 0:10]  = 1


plt.imshow(map_grid, cmap=plt.cm.hot, interpolation='nearest', vmin=0, vmax=6)
plt.colorbar()

plt.xlim(-1,20)
plt.ylim(-1,20)

x_ticks = np.arange(0,20,1) 
y_ticks = np.arange(0,20,1) 

plt.xticks(x_ticks)
plt.yticks(y_ticks)
plt.grid(True)
plt.show()

