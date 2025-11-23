Abstract

The Alumni Management System is a console-based application developed in the C programming language using file handling techniques. The main objective of this project is to efficiently store, manage, and retrieve alumni information in a structured manner. The system uses a binary file (alumni.txt) to maintain alumni records, which ensures fast access and secure data storage.

The application provides essential operations such as adding new alumni details, displaying all stored records, searching for a specific alumni by ID, updating existing records, and deleting unwanted entries. These operations are implemented using fundamental file handling functions like fopen, fread, fwrite, fseek, remove, and rename. A structured data type (struct Alumni) is used to organize the information, making data processing easier and more reliable.

This system demonstrates how C programming can be used to build real-time data management applications without the need for external databases. It is simple, lightweight, and effective for learning file handling concepts and CRUD operations. The program can be easily extended with additional features such as sorting, login authentication, or exporting data.



Functional Requirements
1. Add Alumni Record

The system must allow the user to enter alumni details such as:

ID

Name

Year of passing

Department

Phone number

The system must store the entered record in a file (alumni.txt) using binary writing.

The system must confirm successful addition of the record.

2. Display All Alumni Records

The system must read all alumni records from the file.

The system must display each record in a clear and formatted manner.

If no records exist, the system must display an appropriate message.

3. Search Alumni by ID

The system must allow the user to input an Alumni ID to search.

The system must search the file sequentially for a matching ID.

If a matching record is found, it must be displayed to the user.

If no matching record exists, the system must notify the user.

4. Update Alumni Record

The system must allow the user to input the ID of the alumni to be updated.

The system must find the record and allow the user to modify:

Name

Year

Department

Phone

The modified record must overwrite the old record using fseek().

The system must confirm successful update.

5. Delete Alumni Record

The system must allow the user to input the ID of the record to delete.

The system must copy all other records into a temporary file.

The system must delete the original file and rename the temporary file.

If the record is found and removed, the system must confirm deletion.

If not found, an appropriate message must be displayed.

6. Exit the System

The system must allow the user to exit the application safely.

The program must terminate without errors.

7. User Input Validation (Basic)

The system must accept only valid integer values for ID and Year.

The system must accept character strings for Name, Department, and Phone.

Invalid menu choices must trigger an “Invalid Choice” message.

8. Persistent Storage

All alumni records must be permanently stored in alumni.txt.

Records must remain available even after the program is closed.



Features of Alumni Management System
1. Add Alumni Information

Allows the user to input and store new alumni details.

Stores data permanently in a binary file (alumni.txt).

Supports fields like ID, Name, Year of passing, Department, and Phone number.

2. Display All Alumni Records

Reads and displays all saved alumni records.

Shows details in a clean, structured format.

Automatically checks if no data exists and notifies the user.

3. Search Alumni by ID

Lets the user search for a specific alumni using their unique ID.

Displays the full record if found.

Notifies the user if the record does not exist.

4. Update Existing Alumni Records

Enables modifying details of an existing alumni record.

Uses file pointer repositioning (fseek()) to overwrite the exact record.

Updates Name, Year, Department, and Phone.

5. Delete Alumni Records

Deletes a particular alumni record using a temporary file method.

Copies only the remaining records to a new file.

Ensures accurate and safe deletion.

Confirms successful deletion.

6. Menu-Driven Interface

Provides a simple and user-friendly text menu.

Supports continuous operations using an infinite loop.

Allows easy navigation through options.

7. File-Based Data Storage

Uses binary file handling for storing all alumni information.

Ensures data persists even after the program exits.

Supports fast and efficient record access.

8. Structured Data Management

Uses struct Alumni to organize data clearly.

Makes handling and manipulating records easy and consistent.

9. Error Handling

Displays message if file does not exist during reading.

Shows “Record Not Found” messages for invalid search, update, or delete attempts.

Handles invalid menu choices gracefully.



How to Run the Project

Follow these steps to compile and execute the Alumni Management System on any system that supports C programming.

Step 1: Install a C Compiler

You need a C compiler like:

GCC (Linux, Mac, Windows – via MinGW)

Turbo C / TDM-GCC

Code::Blocks (with GCC built-in)

Dev-C++

If you are on Windows, the easiest options are Code::Blocks or MinGW GCC.

Step 2: Save the Source Code

Create a new file named main.c

Copy the entire C program into that file.

Save the file.

Your project folder will look like:

Alumni Management System/
│── main.c
│── alumni.txt (auto-created after running)

Step 3: Compile the Program
Using GCC (Recommended)

Open terminal or command prompt in the folder and type:

gcc main.c -o alumni


If there are no errors, an executable named alumni or alumni.exe will be created.

Step 4: Run the Program
Windows
alumni.exe

Linux / Mac
./alumni

Step 5: Use the Menu

After running, you'll see:

===== ALUMNI MANAGEMENT SYSTEM =====
1. Add Alumni
2. Display All Alumni
3. Search Alumni
4. Update Alumni
5. Delete Alumni
6. Exit
Enter your choice:


Choose a number to perform operations.

Step 6: File Creation

The system automatically creates a file named alumni.txt

All records (Add, Update, Delete) are saved permanently

You don’t need to create or edit the file manually.

Step 7: Exit

When finished, select 6 to exit the program safely.



 ALUMNI MANAGEMENT SYSTEM 

<img width="486" height="214" alt="Screenshot 2025-11-23 094228" src="https://github.com/user-attachments/assets/c6f47127-65f7-48df-89cf-9c10b6ac6792" />




 Add Alumni

<img width="571" height="187" alt="Screenshot 2025-11-23 094515" src="https://github.com/user-attachments/assets/f0f45138-1d61-4c8d-9f7e-e8884b64c433" />





 Display All Alumni

<img width="505" height="341" alt="Screenshot 2025-11-23 094614" src="https://github.com/user-attachments/assets/f32a81bd-1151-494e-ba95-510aa0eb1645" />





 Search Alumni

<img width="551" height="236" alt="Screenshot 2025-11-23 094733" src="https://github.com/user-attachments/assets/273bf525-d161-44ff-a181-00e7ebe87f49" />
