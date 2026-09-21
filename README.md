🚀 Mini HTTP Server in C (Winsoc

📌 Overview

This project is a lightweight HTTP web server built using C programming language and Winsock API on Windows.

It demonstrates how real web servers work internally using socket programming, including:

TCP connection handling
HTTP request parsing
Route-based response generation

The server listens on a port, accepts browser requests, and returns HTML responses for different routes.

⚙️ Features
Built using raw TCP socket programming
Handles HTTP GET requests
Supports routing:
/home → Home page
/about → About page
Any other route → 404 Not Found
Sends proper HTTP response headers
Continuous server loop (handles multiple requests sequentially)
Beginner-friendly networking project
🛠️ Tech Stack

C Programming Language
Winsock2 API
TCP/IP Protocol
HTTP Protocol Basics
GCC / MinGW Compiler
Windows Operating System
Web Browser (Testing)
📁 Project Structure
MiniHttpServer/
│
├── server.c          # Main HTTP server code
├── README.md         # Project documentation
⚙️ How It Works
Initialize Winsock library
Create a TCP socket
Bind socket to port 8080
Listen for incoming connections
Accept client request
Read HTTP request from browser
Parse request path (/home, /about)
Generate HTTP response
Send response back to browser
Close client connection
▶️ How to Run
1️⃣ Compile the Code
gcc server.c -o server -lws2_32
2️⃣ Run Server
server.exe

You will see:

Server running on port 8080...
3️⃣ Open in Browser
http://localhost:8080/home
http://localhost:8080/about
http://localhost:8080/anything
📌 Example Output
🏠 Home Page
Home Page 🏠
📄 About Page
About Page 📄
This is about section
❌ Invalid Route
404 Page Not Found ❌
🧠 Learning Outcomes
Socket programming in C
HTTP protocol fundamentals
Client-server architecture
Request-response lifecycle
Winsock API usage on Windows
How web servers work internally
🚀 Future Improvements
Multi-threading support (handle multiple clients simultaneously)
Serve HTML files instead of hardcoded strings
Add JSON REST API support
Logging system for requests
Advanced routing system
Better error handling and performance optimization
⚠️ Limitations
Handles only one client at a time (no concurrency)
Basic HTTP implementation (no full HTTP spec support)
No file serving (only hardcoded responses)

👨‍💻 Author
Nandini
B.Tech CSE Student

⭐ Note

This project is built for learning purposes to understand low-level web server architecture using sockets in C.

⭐ If you like this project

Give it a ⭐ on GitHub and feel free to improve it further!
