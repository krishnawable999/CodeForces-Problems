import cv2
import pytesseract

# Load image
img = cv2.imread('download.jpeg')

# Convert to grayscale
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Apply threshold to remove noise
thresh = cv2.threshold(gray, 0, 255, cv2.THRESH_BINARY + cv2.THRESH_OTSU)[1]

# Apply morphology to remove noise
kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (3,3))
morph = cv2.morphologyEx(thresh, cv2.MORPH_OPEN, kernel)

# Apply blur to improve OCR accuracy
blur = cv2.GaussianBlur(morph, (3,3), 0)

# Apply OCR with Tesseract
text = pytesseract.image_to_string(blur, config='--psm 11')

# Print the detected text
print(text)
