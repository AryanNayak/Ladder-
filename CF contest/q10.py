import cv2
import numpy as np
img=cv2.imread('a.jpg') 

L=img.max() 

T=150 
for i in range(m): 
    for j in range(n):
        if img[i,j]<T: 
            imagethreshold[i,j]=0
        else: 
            imagethreshold[i,j]=255
cv2.imwrite('b.png',imagethreshold) 