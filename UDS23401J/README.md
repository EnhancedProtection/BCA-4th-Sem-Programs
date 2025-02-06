# Deep Learning - [UDS23401J]

## 📌 Introduction
This directory contains programs for the Deep Learning course, subject code UDS23401J.

## ⚙️ Prerequisites
- Linux environment based on Debian (You can also use Windows)
- Python3 >= 3.10
- Jupyter Notebook for easy visualization (Optional)

## 🖥️ System Setup
To run these programs, ensure you have the following packages installed:
```bash
sudo apt update && sudo apt install python3-full -y
python3 -m venv venv
source venv/bin/activate
pip install tensorflow
```

## 🚀 Program 1: ReLU Activation Function
This program demonstrates the use of the ReLU activation function in a basic neural network.

### 🔹 How to run?

```bash
python program_1.py
```

### 🔹 Output:

```
Model: "sequential"

| Layer (type)    | Output Shape | Param # |
| --------------- | ------------ | ------- |
| dense (Dense)   | (None, 32)   | 352     |
| dense_1 (Dense) | (None, 1)    | 33      |

Total params: 385 (1.50 KB)
Trainable params: 385 (1.50 KB)
Non-trainable params: 0 (0.00 B)
```

## 🚀 Program 2: Simple Artificial Neural Network
This program builds a simple artificial neural network with one layer and one neuron.
- The model is trained on the equation y = 5x - 3.
- For x = -2, the expected output is y = -13.

### 🔹 How to run
```bash
python3 program_2.py
```

### 🔹 Output:

```
Training the model...
Model training complete.
1/1 ━━━━━━━━━━━━━━━━━━━━ 0s 86ms/step
Predicted y for x=-2.0: -12.943925857543945
Learned weight: 4.998344898223877
Learned bias: -2.9472365379333496
```
