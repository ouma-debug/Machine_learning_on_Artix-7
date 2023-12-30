We have changed the file uart_test_nn.py
make sure to install the right the libraries and also check if the cable driver is installed.
if you have run into the same issue when began to use Vivado Design tool or Vitis  : Could not find FPGA device on the board for connection 'local'. ( Hardware Manager - unconnected ) that means that  the cable driver is not properly installed. The solution is quite simple:

1. cd to the folder where the install_script is in, (e.g. for Vivado 2020.2, its /opt/Xilinx/Vivado/2020.2/data/xicom/cable_drivers/lin64/install_scripts/install_drivers)
2. sudo ./install_drivers
 the error is gone

 
