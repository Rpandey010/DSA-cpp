import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib.animation import FuncAnimation

# Create the figure and the 3D axis
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Generate the data for the spinning top shape
theta = np.linspace(0, 2 * np.pi, 100)
z = np.linspace(-1, 1, 100)
theta, z = np.meshgrid(theta, z)
r = 0.5 * (1 - z ** 2)
x = r * np.sin(theta)
y = r * np.cos(theta)

# Plot the surface
surf = ax.plot_surface(x, y, z, color='green', edgecolor='k')

# Animation function
def update(frame):
    ax.view_init(elev=20., azim=frame)

# Create animation
ani = FuncAnimation(fig, update, frames=np.arange(0, 360, 2), interval=50)

# Show the plot
plt.show()
