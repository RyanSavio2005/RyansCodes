import cv2
import matplotlib.pyplot as plt

img = cv2.imread(r"C:\Users\DELL\Downloads\GfPKkmeWgAAZ5w_.jpeg")
resize1 = cv2.resize(img, (50, 50))


fig, ax = plt.subplots(1, 2)


ax[0].imshow(img)
ax[0].set_title("real image")
ax[1].imshow(resize1)
ax[1].set_title("resized image")

plt.show() # Display the plot