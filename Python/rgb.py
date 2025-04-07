import cv2
import matplotlib.pyplot as plt
import numpy as np

# Load the image
img = cv2.imread(r"C:\Users\DELL\Downloads\GfPKkmeWgAAZ5w_.jpeg")

# Convert BGR to RGB
img_rgb = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)

# Split the image into its RGB channels
r, g, b = cv2.split(img)

# Create empty images for each channel
r_img = np.zeros_like(img)
g_img = np.zeros_like(img)
b_img = np.zeros_like(img)

# Assign each channel to its respective image
r_img[:, :, 0] = r
g_img[:, :, 1] = g
b_img[:, :, 2] = b

# Create subplots
fig, axs = plt.subplots(2, 2, figsize=(10, 8))

# Display the original image
axs[0, 0].imshow(img_rgb)
axs[0, 0].set_title('Original Image')
axs[0, 0].axis('off')

# Display the red channel
axs[0, 1].imshow(r_img)
axs[0, 1].set_title('Red Channel')
axs[0, 1].axis('off')

# Display the green channel
axs[1, 0].imshow(g_img)
axs[1, 0].set_title('Green Channel')
axs[1, 0].axis('off')

# Display the blue channel
axs[1, 1].imshow(b_img)
axs[1, 1].set_title('Blue Channel')
axs[1, 1].axis('off')

plt.tight_layout()
plt.show()