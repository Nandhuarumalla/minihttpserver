# 🚀 Mini HTTP Server in C (Winsock)

![C](https://img.shields.io/badge/language-C-blue.svg)
![Platform](https://img.shields.io/badge/platform-Windows-lightgrey.svg)
![Status](https://img.shields.io/badge/status-Completed-brightgreen.svg)
![Networking](https://img.shields.io/badge/networking-TCP%2FIP-orange.svg)

---

## 📌 Overview
This project is a lightweight HTTP web server built using **C programming language** and **Winsock API on Windows**.

It demonstrates how web servers work internally using socket programming:
- TCP connection handling  
- HTTP request parsing  
- Route-based response generation  

---

## ⚙️ Features
- TCP socket programming
- HTTP GET request handling
- Routing support:
  - `/home` → Home page
  - `/about` → About page
  - others → 404 page
- HTTP response headers
- Continuous server loop

---

## 🛠️ Tech Stack
- C Programming Language  
- Winsock2 API  
- TCP/IP Protocol  
- HTTP Protocol Basics  
- GCC / MinGW  
- Windows OS  

---

## 📁 Project Structure
---
```
MiniHttpServer/
│
├── server.c
├── index.html
├── README.md
```

## ⚙️ How It Works
1. Initialize Winsock  
2. Create socket  
3. Bind to port 8080  
4. Listen for connections  
5. Accept client request  
6. Read HTTP request  
7. Parse route  
8. Send response  
9. Close connection  

---

## ▶️ How to Run

### Compile
```bash
gcc server.c -o server -lws2_32
Run
server.exe
Open Browser
http://localhost:8080/home
http://localhost:8080/about
📌 Example Output
/home → Home Page 🏠
/about → About Page 📄
invalid → 404 Page ❌
🧠 Learning Outcomes
Socket programming
HTTP protocol basics
Client-server architecture
Winsock API usage
🚀 Future Improvements
Multi-threading support
File-based HTML serving
REST API support
Logging system
👨‍💻 Author
Nandini
