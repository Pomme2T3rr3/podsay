# Podsay

Podsay is a small program that displays a random quote with a custom ASCII art.

## 📦 Dependencies

Before installing `podsay`, make sure you have the following programs installed:

- `fortune`
- `cowsay`

### 🔧 Installing Dependencies

#### **Linux (Debian/Ubuntu)**
```sh
sudo apt install fortune cowsay
```

### **Linux (Arch/pacman)**
```sh
sudo pacman -S fortune-mod cowsay
```

### **Linux(Fedora)**
```sh
sudo dnf install fortune-mod cowsay
```

### **Linux(Ubuntu)**
```sh
sudo apt update
sudo apt install fortune cowsay -y
```

### **macOS(Homebrew)**
make sure you have homebrew installed on your system :
```sh
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```
and install fortune and cowsay with it :
```sh
brew install cowsay fortune
```

### **Windows (Git Bash or Cygwin)
```sh
choco install fortune cowsay
```

## 🚀 Installation
```sh
git clone https://github.com/your-user/podsay.git
cd podsay
make install
```

If necessary, add ~/.local/bin to your PATH :
```sh
export PATH=$HOME/.local/bin:$PATH
```

## 🐄 Usage
```sh
podsay
```

## ❓ Troubleshooting
If you get an error about fortune or cowsay not being installed, check the installation instructions above.
You can also open a ticket if you need, i will respond as soon as possible.
