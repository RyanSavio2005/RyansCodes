import cv2
import numpy as np
import matplotlib.pyplot as plt

# Load the image in grayscale
image = cv2.imread(r"C:\Users\DELL\Downloads\GfPKkmeWgAAZ5w_.jpeg", cv2.IMREAD_GRAYSCALE)
// Change to path of your image

# Apply Sobel edge detection
sobel_x = cv2.Sobel(image, cv2.CV_64F, 1, 0, ksize=3)  # Sobel filter in X direction
sobel_y = cv2.Sobel(image, cv2.CV_64F, 0, 1, ksize=3)  # Sobel filter in Y direction

# Compute the magnitude of the gradient
sobel_combined = cv2.magnitude(sobel_x, sobel_y)

# Normalize the result to the range [0, 255] for visualization
sobel_combined = cv2.convertScaleAbs(sobel_combined)

# Plot the original image and edge-detected image side-by-side
plt.figure(figsize=(10, 5))

# Original image
plt.subplot(1, 2, 1)
plt.title("Original Image")
plt.imshow(image, cmap='gray')
plt.axis('off')

# Sobel edge-detected image
plt.subplot(1, 2, 2)
plt.title("Sobel Edge Detection")
plt.imshow(sobel_combined, cmap='gray')
plt.axis('off')

# Show the plots
plt.tight_layout()
plt.show()
