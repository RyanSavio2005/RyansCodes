from PIL import Image
import matplotlib.pyplot as plt

# Load the image
image_path = r"C:\Users\DELL\Downloads\GfPKkmeWgAAZ5w_.jpeg"  # Replace with your image file path
image = Image.open(image_path)

# Perform scaling
# Scale down to half the size
scaled_down = image.resize((image.width // 2, image.height // 2))

# Scale up to double the size
scaled_up = image.resize((image.width * 2, image.height * 2))

# Maintain aspect ratio and resize to fit within a 300x300 box
aspect_scaled = image.copy()
aspect_scaled.thumbnail((300, 300))

# Create a figure with subplots
fig, axes = plt.subplots(1, 4, figsize=(16, 8))

# Display the original image
axes[0].imshow(image)
axes[0].set_title('Original Image')
axes[0].axis('off')

# Display the scaled-down image
axes[1].imshow(scaled_down)
axes[1].set_title('Scaled Down (50%)')
axes[1].axis('off')

# Display the scaled-up image
axes[2].imshow(scaled_up)
axes[2].set_title('Scaled Up (200%)')
axes[2].axis('off')

# Display the aspect ratio scaled image
axes[3].imshow(aspect_scaled)
axes[3].set_title('Scaled to Fit 300x300')
axes[3].axis('off')

# Adjust layout and show the plot
plt.tight_layout()
plt.show()