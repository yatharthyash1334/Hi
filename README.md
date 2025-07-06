# MathUtils Library

`MathUtils` is a simple C++ library providing basic mathematical operations such as addition, subtraction, multiplication, division, and square root — bundled into a shared library (`.dll`) for easy reuse.

---

## 📁 Folder Structure

.
├── MathUtils.cpp # Source file (builds into DLL)
├── MathUtils.h # Header file (shared with users)
├── main.cpp # Example usage
├── CMakeLists.txt # CMake build config
├── build/ # (Created after building)
└── user_build/ # Optional: user's usage example

yaml
Copy
Edit

---

## 🛠️ Build Instructions (Windows with CMake + Visual Studio)

### ✅ Requirements
- CMake >= 3.10
- Visual Studio with “Desktop Development with C++” workload

### 🧭 Build Steps

1. Open **x64 Native Tools Command Prompt for VS 2022**
2. Clone or download this repo
3. Run:

```cmd
cd path\to\project
mkdir build
cd build
cmake ..
cmake --build .
This will generate:

MathUtils.dll — Shared library

MathUtils.lib — Import library

MathUtilsApp.exe — Demo app using the library

🚀 How to Use (as a User of the Library)
👨‍💻 You only need:
MathUtils.h — Header

MathUtils.dll — Shared library (must be placed with your .exe)

MathUtils.lib — (Optional, for linking)

✅ Sample Usage (user_main.cpp)
cpp
Copy
Edit
#include "MathUtils.h"
#include <iostream>

int main() {
    MathUtils::print_version();

    int sum = MathUtils::add(10, 5);
    double root = MathUtils::sqrt(25.0);

    std::cout << "Sum: " << sum << ", Root: " << root << std::endl;
    return 0;
}
✅ Build the user app:
c
Copy
Edit
g++ user_main.cpp -I. -L. -lMathUtils -o UserApp.exe
Make sure MathUtils.dll is in the same folder as UserApp.exe at runtime.

📦 Shipping the Library
You can distribute your library as:

swift
Copy
Edit
/MathUtilsSDK/
├── MathUtils.h
├── MathUtils.dll
└── libMathUtils.lib (optional)
The user only needs the .h and .dll.
