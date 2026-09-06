# -cpp-data-processing-utilities
# C++ Data Processing & Input Validation Utilities
## Project Overview
This repository contains a collection of command-line utility programs developed in C++ as part of my Software Development curriculum at Central Texas College. These projects focus on building robust console architectures that handle dynamic user inputs, manipulate data streams, execute core algorithms, and prevent runtime anomalies through strict exception handling.

## Core Technical Concepts Implemented 
* **Standard I/O streams:** Handled terminal inputs and system outputs safely using standard library abstractions ('std::cin', 'std::cout').
* **Input Validation Loops:** Engineered robust parsing logic using control loops ('while', 'do-while') and state flags ('cin.fail()', 'cin.clear()', 'cin.ignore()') to intercept invalid user keystrokes and anomalies before runtime execution crashes.
* **Algorithmic Processing:** Implemented multi-branch conditional structures ('if'/'else if'/'else'/, 'switch' blocks) to process data workflows dynamically based on logical parameters.
* **Compilation Environments:** Managed dependencies and compiled functional execution files directly using GNU Compiler Collection ('g++') within a Linux terminal interface and within a Integrated Development Environment ('Microsoft_Visual_Studios')

## Execution and Compilation
To clone, compile, and run these command-line programs natively on a Linux terminal or Ubuntu server environment, use the following compilation pipeline:
'''bash
# 1. Clone the repository
git clone https://github.com

# 2. Navigate to the utility directory
cd cpp-data-processing-utilities

# 3. Compile the source code using g++
g++ main.cpp -o data_processor

# 4. Execute the compiled utility binary
./data_processor
'''
