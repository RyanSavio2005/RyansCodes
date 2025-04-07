from PIL import Image
import matplotlib.pyplot as plt
import numpy as np
# Load an image
image = Image.open("C:\\Users\\DELL\\Downloads\\GdKLT7hbUAATYqd.jpeg")
# Resize the image (e.g., 300x300 pixels)
resized_image = image.resize((300, 300))
# Save the resized image
resized_image.save('resized_image_pillow.jpg')
# Display the resized image
plt.show()