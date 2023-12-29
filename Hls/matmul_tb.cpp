#include <stdio.h>
#include <iostream>
#include "matmul.hpp"

int main() {

float input_img[n_inputs] = {0.0, 0.0, 0.0, 0.0, 0.003921569, 0.003921569, 0.015686275, 0.019607844, 0.003921569, 0.0,
		0.0, 0.0, 0.0, 0.003921569, 0.0, 0.02745098, 0.13725491, 0.015686275, 0.007843138, 0.0,
		0.0, 0.0, 0.0, 0.003921569, 0.003921569, 0.34117648, 0.6, 0.015686275, 0.015686275, 0.0,
		0.0, 0.0, 0.0, 0.011764706, 0.007843138, 0.60784316, 0.54509807, 0.015686275, 0.007843138, 0.0,
		0.0, 0.0, 0.0, 0.007843138, 0.13725491, 0.9490196, 0.19607843, 0.019607844, 0.003921569, 0.0,
		0.0, 0.0, 0.0, 0.007843138, 0.4627451, 0.627451, 0.019607844, 0.007843138, 0.007843138, 0.0,
		0.0, 0.0, 0.0, 0.011764706, 0.68235296, 0.2901961, 0.0, 0.0, 0.0, 0.0,
		0.0, 0.0, 0.0, 0.02745098, 0.7529412, 0.0627451, 0.0, 0.0, 0.0, 0.0,
		0.0, 0.0, 0.0, 0.02745098, 0.6901961, 0.11372549, 0.0, 0.0, 0.0, 0.0,
		0.0, 0.0, 0.0, 0.007843138, 0.015686275, 0.007843138, 0.0, 0.0, 0.0, 0.0}; // 1
int pred = nn_inference(input_img);
std::cout << std::endl;
std::cout << "NN Prediction: " << pred << std::endl;
std::cout << std::endl;


float input_img1[n_inputs] = {0.007843138, 0.007843138, 0.007843138, 0.007843138, 0.011764706, 0.011764706, 0.019607844, 0.011764706, 0.011764706, 0.0,
		0.003921569, 0.007843138, 0.02745098, 0.12941177, 0.18431373, 0.21960784, 0.09019608, 0.015686275, 0.003921569, 0.0,
		0.011764706, 0.007843138, 0.25490198, 0.8509804, 0.84705883, 0.88235295, 0.6745098, 0.019607844, 0.003921569, 0.0,
		0.0, 0.0, 0.023529412, 0.10980392, 0.05882353, 0.40784314, 0.74509805, 0.023529412, 0.007843138, 0.0,
		0.0, 0.003921569, 0.003921569, 0.050980393, 0.52156866, 0.9411765, 0.5647059, 0.019607844, 0.015686275, 0.0,
		0.003921569, 0.003921569, 0.003921569, 0.2509804, 0.7254902, 0.53333336, 0.9137255, 0.15294118, 0.003921569, 0.0,
		0.015686275, 0.011764706, 0.007843138, 0.011764706, 0.023529412, 0.03137255, 0.88235295, 0.2901961, 0.015686275, 0.0,
		0.011764706, 0.011764706, 0.043137256, 0.21960784, 0.34117648, 0.5529412, 0.8745098, 0.12941177, 0.011764706, 0.0,
		0.015686275, 0.015686275, 0.3019608, 0.9098039, 0.88235295, 0.6392157, 0.1764706, 0.011764706, 0.003921569, 0.0,
		0.007843138, 0.011764706, 0.019607844, 0.003921569, 0.007843138, 0.007843138, 0.0, 0.0, 0.0, 0.0}; // 3
int pred1 = nn_inference(input_img1);
std::cout << std::endl;
std::cout << "NN Prediction: " << pred1 << std::endl;
std::cout << std::endl;


float input_img2[n_inputs] = {0.003921569, 0.007843138, 0.003921569, 0.007843138, 0.003921569, 0.007843138, 0.003921569, 0.007843138, 0.003921569, 0.0,
		0.003921569, 0.023529412, 0.1254902, 0.003921569, 0.003921569, 0.003921569, 0.007843138, 0.003921569, 0.003921569, 0.0,
		0.011764706, 0.011764706, 0.6745098, 0.023529412, 0.007843138, 0.003921569, 0.11372549, 0.05490196, 0.003921569, 0.0,
		0.011764706, 0.043137256, 0.7058824, 0.043137256, 0.011764706, 0.019607844, 0.49411765, 0.34901962, 0.007843138, 0.0,
		0.007843138, 0.21176471, 0.85490197, 0.6039216, 0.44705883, 0.5882353, 0.654902, 0.36862746, 0.011764706, 0.0,
		0.007843138, 0.5411765, 0.2509804, 0.05882353, 0.0627451, 0.023529412, 0.35686275, 0.37254903, 0.007843138, 0.0,
		0.007843138, 0.05490196, 0.019607844, 0.0, 0.0, 0.003921569, 0.31764707, 0.53333336, 0.003921569, 0.0,
		0.011764706, 0.015686275, 0.015686275, 0.0, 0.0, 0.003921569, 0.1764706, 0.67058825, 0.007843138, 0.0,
		0.007843138, 0.007843138, 0.007843138, 0.0, 0.0, 0.0, 0.07058824, 0.6, 0.007843138, 0.0,
		0.0, 0.0, 0.0, 0.0, 0.0, 0.003921569, 0.011764706, 0.023529412, 0.011764706, 0.0}; // 4
int pred2 = nn_inference(input_img2);
std::cout << std::endl;
std::cout << "NN Prediction: " << pred2 << std::endl;
std::cout << std::endl;

return 0;
}