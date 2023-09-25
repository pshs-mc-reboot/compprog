# Competitive Programming Division Problem Repository

This repository aims to serve as a problem repository. In particular, for each problem used in Reboot's Competitive Programming Division's training, the problem statement, its solution, and its writeup will be included.

## Usage

All of the following commands assume that you are in the repository directory.

To be able to run Python3.10 files within the repository, first run the following command:

```bash
chmod +x venv/bin/activate
. venv/bin/activate
```

To be able to run C++ files within the repository, first run the following command:

```bash
sudo apt install gcc -y
```

To run Python3.10 files, run the following command:

```bash
python3.10 <problem-code>/solution.py
```

To run C++ files, run either of the following commands:

```bash
chmod +x run.sh
```

- To run a file with stdin and stdout:
  ```bash
  ./run-cpp.sh 
  ```
- To run a file with `input.txt` as stdin, and stdout:
  ```bash
  ./run-cpp.sh in
  ```
- To run a file with stdin and `output.txt` as stdout:
  ```bash
  ./run-cpp.sh out
  ```
- To run a file with `input.txt` as stdin and `output.txt` as stdout:
  ```bash
  ./run-cpp.sh in-out
  ```

## Directory tree formatting

```
.
└── problem-code/
    ├── input.txt
    ├── output.txt
    ├── output.exe    # Won't be pushed to the repository
    ├── solution.cpp
    ├── solution.py
    ├── statement.md
    └── writeup.md
```
