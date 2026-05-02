# CSV Reader 📄

A simple and lightweight C console application that reads data from CSV (Comma-Separated Values) files and displays it in a formatted, easy-to-read manner on the console.

## 📖 What is a CSV File?

A **CSV (Comma-Separated Values)** file is a plain text file that contains a list of data. These files are often used for exchanging data between different applications, such as databases and spreadsheets. Each line of the file is a data record, and each record consists of one or more fields, separated by commas.

## 🎯 Project Purpose

The main objective of this project is to demonstrate basic file handling, string manipulation, and command-line argument processing in C.

When a user runs the application with a CSV file:
1. It **validates** that a file path was provided.
2. It **opens** the specified file safely.
3. It **reads** the file line by line.
4. It **parses** each line using `strtok` to separate the fields by the comma delimiter.
5. It **outputs** the fields side-by-side, separated by a hyphen (` - `), making the raw CSV data much easier to visually scan.

## 🚀 How to Run

Follow these steps to compile and run the application on your local machine:

### Prerequisites
- A C compiler such as `gcc` (MinGW/GCC) must be installed on your system.

### Steps
1. **Clone the repository** (or download the source code):
   ```bash
   git clone <repository-url>
   ```
2. **Navigate to the project directory**:
   ```bash
   cd CsvReader
   ```
3. **Compile the application**:
   ```bash
   gcc reader.c -o reader
   ```
4. **Run the application**:
   Provide the name of the CSV file you want to read as a command-line argument.
   
   **On Windows:**
   ```cmd
   reader.exe <file_to_read.csv>
   ```
   *Example: `reader.exe students.csv`*
   
   **On Linux/macOS:**
   ```bash
   ./reader <file_to_read.csv>
   ```
   *Example: `./reader examples/data.csv`*

## 📄 License

This project is licensed under the [MIT License](LICENSE). See the `LICENSE` file for details.
