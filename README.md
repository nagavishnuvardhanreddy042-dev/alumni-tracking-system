Alumni Management System (C Language – File Handling)

This project is a simple Alumni Management System written in C language using file handling.
It allows you to Add, Display, Search, Update, and Delete Alumni records, which are stored in a binary file (alumni.txt).

📌 Features
✅ 1. Add Alumni

Takes input for: ID, Name, Year, Department, Phone

Stores record in alumni.txt using fwrite()

✅ 2. Display All Alumni

Reads all stored records and displays them using fread()

✅ 3. Search Alumni

Searches a specific Alumni by ID

Uses sequential reading through file

✅ 4. Update Alumni

Searches for a record and updates fields

Uses fseek() to modify the exact record location

Overwrites old data with fwrite()

✅ 5. Delete Alumni

Copies all records except the one to delete into a temporary file

Replaces original file with updated file

✅ 6. Exit Program
📂 File Structure
Alumni Management/
│── alumni.txt      (Automatically created after running program)
│── main.c          (Your C source code)
│── README.md       (Project documentation)

🛠 Technologies Used

C Programming Language

File Handling (fopen, fwrite, fread, fseek, rename, remove)

Structure (struct Alumni)

📌 How To Run
Step 1: Compile
gcc main.c -o alumni

Step 2: Run
./alumni

🧱 Data Structure Used
struct Alumni {
    int id;
    char name[50];
    int year;
    char dept[50];
    char phone[20];
};
