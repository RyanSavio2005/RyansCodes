from PIL import Image
import matplotlib.pyplot as plt

# Load the image
image_path = r"C:\Users\DELL\Downloads\GfPKkmeWgAAZ5w_.jpeg"  # Replace with your image file path
image = Image.open(image_path)

# Split the image into R, G, B components
r, g, b = image.split()

# Create a figure with subplots
fig, axes = plt.subplots(1, 4, figsize=(16, 8))

# Display the original image
axes[0].imshow(image)
axes[0].set_title('Original Image')
axes[0].axis('off')

# Display the red component
axes[1].imshow(r, cmap='Reds')
axes[1].set_title('Red Channel')
axes[1].axis('off')

# Display the green component
axes[2].imshow(g, cmap='Greens')
axes[2].set_title('Green Channel')
axes[2].axis('off')

# Display the blue component
axes[3].imshow(b, cmap='Blues')
axes[3].set_title('Blue Channel')
axes[3].axis('off')

# Adjust layout and show the plot
plt.tight_layout()
plt.show()