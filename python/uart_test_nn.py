import serial
import os
import random
import cv2
import numpy as np
import struct
import time
import sys
def main():
args = sys.argv[1:]
if len(args) == 2 and args[0] == '-port':
port = str(args[1])


dims = (10,10) # dimensions of images to train/test with

randomint = random.randrange(10)
read_dir = '/home/user/Téléchargements/MNIST_JPG_testing/' + str(randomint) + '/'
read_file = random.choice(os.listdir(read_dir)) # choose random test image
img = cv2.imread(os.path.join(read_dir,read_file),0) # read img as grayscale
img = cv2.resize(img, dims, interpolation = cv2.INTER_AREA) # resize img to fit dims
img = np.asarray((img / 255)).astype('float32')
print("Label: ", str(randomint), " Filename: ", read_file, " Serialport: ", port) # print test image label
# define serial connection
ser = serial.Serial(port, 9600, serial.EIGHTBITS, serial.PARITY_NONE, serial.STOPBITS_ONE)

for i in range(dims[1]):
for j in range(dims[0]):
values = bytearray(struct.pack("f", img[i][j])) # turn pixel values into bytearray
ser.write(values) # send bytearray over UART


if __name__=="__main__":
main()