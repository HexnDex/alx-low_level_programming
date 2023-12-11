# File I/O in C - README

## Overview

This project is a simple guide to understand File Input/Output (I/O) operations in the C programming language, focusing on system calls. The guide covers fundamental concepts such as file descriptors, standard file descriptors, system calls (open, close, read, write, dprintf), flags (O_RDONLY, O_WRONLY, O_RDWR), file permissions, and the distinction between functions and system calls.

## Table of Contents

1. [Introduction](#introduction)
2. [File Descriptors](#file-descriptors)
3. [Standard File Descriptors](#standard-file-descriptors)
4. [System Calls](#system-calls)
    - [open](#open)
    - [close](#close)
    - [read](#read)
    - [write](#write)
    - [dprintf](#dprintf)
5. [Flags](#flags)
    - [O_RDONLY](#o_rdonly)
    - [O_WRONLY](#o_wronly)
    - [O_RDWR](#o_rdwr)
6. [File Permissions](#file-permissions)
7. [Understanding System Calls](#understanding-system-calls)
8. [Function vs System Call](#function-vs-system-call)

## Introduction

File I/O in C involves interacting with files through system calls to perform operations such as creating, opening, reading, writing, and closing files. This guide aims to provide a concise overview of key concepts related to File I/O in the C programming language.

## File Descriptors

In Unix-like operating systems, file descriptors are small, non-negative integers used to identify opened files within a process. Understanding file descriptors is crucial for efficient file manipulation.

## Standard File Descriptors

The C library uses three standard file descriptors:

- **0 (stdin):** Standard input
- **1 (stdout):** Standard output
- **2 (stderr):** Standard error

These standard file descriptors facilitate communication between a program and the operating system.

## System Calls

### open

The `open` system call is used to open a file and create a file descriptor. It returns a file descriptor or an error code.

### close

The `close` system call is used to close a file descriptor, releasing system resources associated with the file.

### read

The `read` system call is used to read data from a file into a buffer.

### write

The `write` system call is used to write data from a buffer to a file.

### dprintf

The `dprintf` system call is similar to `printf`, but it writes formatted data to a file descriptor.

## Flags

### O_RDONLY

The flag `O_RDONLY` is used with the `open` system call to indicate that the file should be opened for reading only.

### O_WRONLY

The flag `O_WRONLY` is used with the `open` system call to indicate that the file should be opened for writing only.

### O_RDWR

The flag `O_RDWR` is used with the `open` system call to indicate that the file should be opened for both reading and writing.

## File Permissions

File permissions control who can read, write, or execute a file. When creating a file using the `open` system call, permissions can be set using octal notation (e.g., 0644).

## Understanding System Calls

A system call is a mechanism used by an application program to request service from the operating system's kernel. System calls provide an interface to the services made available by the operating system.

## Function vs System Call

A function is a block of code designed to perform a specific task, while a system call is a request for a service from the operating system. Functions are executed in user space, while system calls transition from user space to kernel space for privileged operations.

Feel free to explore the sample code and examples provided in the project to gain hands-on experience with File I/O in C using system calls.
