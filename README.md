# basic_file

`basic_file` is a lightweight C++ header-only class for working with plain text files.  
It provides simple functions to write, read, clear, and manage file content.

## Features

- Set and get the filename
- Rewrite a file with new content
- Append data to a file
- Read file content line by line
- Read only the first line
- Clear file content

## Usage

Include the header in your project:

```cpp
#include "basic_file.hpp"

int main() {
    stdx::basic_file file("example.txt");

    file.rewrite("Hello from basic_file!\n");
    file.write("Another line.\n");

    file.read();

    return 0;
}

Installation

Just copy the include/basic_file.hpp file into your project and include it where needed.
License

This project is licensed under the MIT License - see the LICENSE file for details.
