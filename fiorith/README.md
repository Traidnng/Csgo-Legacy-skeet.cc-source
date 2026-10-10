# Fiorith

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B20-blue.svg" alt="Language" />
  <img src="https://img.shields.io/badge/Platform-Windows%20x86-red.svg" alt="Platform" />
  <img src="https://img.shields.io/badge/IDE-Visual%20Studio%202022-purple.svg" alt="IDE" />
  <img src="https://img.shields.io/badge/License-MIT-green.svg" alt="License" />
</p>

Fiorith is a modern C++ library and hook framework designed for CS:GO / Source Engine modification, custom UI overlay injection, runtime patching, and binary recompilation.

---

## 🚀 Features

- **DirectX 9 / Engine Hooking:** High-performance render hooks, custom animations, gradients, and overlay rendering.
- **Dynamic Import Resolution & IAT Rebuilding:** Fast runtime PE analysis and mapping.
- **VM & Bytecode Recompilation:** Built-in handler processing and execution engine.
- **Custom Theme & Config System:** Integrated persistent configuration manager and custom themes.
- **String Encryption & Obfuscation:** Compile-time `skCrypter` and runtime string protection routines.

---

## 📁 Project Structure

```
fiorith/
├── .gitignore
├── README.md
├── fiorith.sln                   # Visual Studio Solution
└── fiorith/
    ├── dllmain.cpp               # Entry point and console initialization
    ├── fiodev.cpp / fiodev.h     # Core engine mapping & renderer hooks
    ├── fiodevutils.h             # Utility helpers & string decoding
    ├── saver.cpp                 # Configuration & settings management
    ├── Binary/                   # Embedded resources, fonts, and headers
    ├── SkeetSDK/                 # SDK interfaces & UI definitions
    ├── MinHook/                  # Native x86 API hooking library
    ├── Json/                     # JSON parser
    └── VM/                       # Recompilation and VM elements
```

---

## 🛠️ Building from Source

### Requirements
- **Visual Studio 2022** (v143 toolset)
- **Desktop development with C++** workload installed
- **Windows SDK** (10.0 or later)

### Compilation Steps
1. Clone the repository:
   ```bash
   git clone https://github.com/<your-username>/fiorith.git
   ```
2. Open `fiorith.sln` in Visual Studio.
3. Set build configuration to **Release | x86** (Win32).
4. Build the solution (`Ctrl + Shift + B` or `Build > Build Solution`).
5. The compiled output (`fiorith.dll`) will be generated in the output directory.

---

## ⚠️ Disclaimer

This project is created strictly for **educational and reverse-engineering research purposes only**. The authors are not responsible for any misuse or damages caused by this software.

---

## 📄 License

This project is open-source under the [MIT License](LICENSE).
