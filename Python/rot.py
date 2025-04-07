import cv2
import matplotlib.pyplot as plt
img = cv2.imread(r"C:\Users\DELL\Downloads\GfPKkmeWgAAZ5w_.jpeg")
row, col, height = img.shape
def rotate_image(image, angle):
    center = (row / 2, col / 2)
    scale = 1.0
    rotate_matrix = cv2.getRotationMatrix2D(center, angle, scale)
    rotated_image = cv2.warpAffine(image, rotate_matrix, dsize=(col, row))
    return rotated_image

rotated_image1 = rotate_image(img, 45)
rotated_image2 = rotate_image(img, 90)
rotated_image3 = rotate_image(img, 135)
fig, axs = plt.subplots(2, 2)
axs[0, 0].imshow(img)
axs[0, 0].set_title("Real Image")
axs[0, 1].imshow(rotated_image1)
axs[0, 1].set_title("Rotated Image 45°")
axs[1, 0].imshow(rotated_image2)
axs[1, 0].set_title("Rotated Image 90°")
axs[1, 1].imshow(rotated_image3)
axs[1, 1].set_title("Rotated Image 135°")
plt.show()