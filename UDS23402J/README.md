# Advanced Computing with Python and GCP - [UDS23402J]

## 📌 Introduction
This directory contains programs for the **Advanced Computing with Python and GCP** subject (subject code **UDS23402J**).

## ⚙️ Prerequisites
- Linux environment based on Debian (WSL can be used on Windows)
- GCC compiler
- OpenMPI or MPICH for MPI program

## 🖥️ System Setup
To run these programs, ensure you have the following packages installed:
```bash
sudo apt update && sudo apt install gcc mpich -y
```

## 🚀 Program 1: Google Cloud Console Project Setup
This experiment involves setting up a project in Google Cloud Console and exploring essential cloud computing concepts such as **IAM Roles**, **Cloud Storage**, **VPC**, **VM Instances**, **Zones**, and **Firewall Security**.


## 🚀 Program 2: Parallel Thread Printing using OpenMP

This program demonstrates creating and printing "Hello" messages from multiple parallel threads using OpenMP.

### 🔹 How to compile?
```bash
gcc program_2.c -fopenmp -o omp_program
```
### 🔹 How to run?
```bash
./omp_program
```


## 🚀 Program 3: MPI Communication Example

This program demonstrates inter-process communication using MPI, where one process sends a message to another process.

### 🔹 How to compile?
```bash
mpicc program_3.c -o mpi_program
```
### 🔹 How to run?
```bash
mpirun -np 2 ./mpi_program
```
