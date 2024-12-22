Password Encryption and Decryption

This is a simple C program that encrypts and decrypts passwords using a basic key-based approach. It demonstrates how strings can be transformed by manipulating the ASCII values of characters.

# Features
	•	Encrypts passwords by adding a fixed key to each character in the string.
	•	Decrypts the password back to its original form by reversing the process.
	•	Simple implementation using standard C libraries.

# How It Works
	1.	The user enters a password (up to 19 characters).
	2.	The program encrypts the password using a key (default: 5).
	3.	The encrypted password is displayed.
	4.	The program then decrypts the password back to its original form and displays it.

# Example Workflow
	1.	Encryption:
	•	The input password is transformed by adding a fixed value (key) to each character’s ASCII code.
	2.	Decryption:
	•	The encrypted password is restored by subtracting the key from each character’s ASCII code.

