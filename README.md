 This project was done by and me for a class project and we were inspired by (https://github.com/nhma20/FPGA_AI/blob/main/README.md). It may look the sae but the material coception was diffrent because we used a diffrent FPGA board.

# Machine_learning_on_Artix-7
This project demonstrates the implementation of machine learning on a Field-Programmable Gate Array (FPGA).
It involves training a neural network, exporting weights, synthesizing the network model, and interfacing with the hardware through a bare-metal application.

Project Structure

- Neural Network Training:

Define and train a neural network using a chosen architecture.
Preprocess training data and validate the model with a validation set.
Export trained weights and necessary information for deployment.

- Synthesis and Vivado IP Export:

Use FPGA synthesis tools, like Vivado HLS, to convert the neural network model into hardware description.
Export the synthesized model as a Vivado IP block for integration.

- Hardware Design Finalization:

Integrate the IP block into the overall hardware design.
Allocate FPGA resources based on neural network specifications.
Validate the hardware design through simulations and verification.

- Bare-Metal Application:

Develop a bare-metal application for communication with the FPGA.
Set up communication interfaces between the processor and FPGA.
Deploy the application on the target embedded system.


