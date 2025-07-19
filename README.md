# Student-Management-System
Overview: 
The CSE Student Record Management System is a C++ console application designed to manage basic academic data for students in the CSE department.

What Problem Does It Solve?

Educational institutions (and students learning development) often face:
- Messy Excel sheets and manual data handling.
- Too complex student management systems for beginners.
- No clear project to learn C++ and system thinking together.



This tool was created to:
- Help CSE departments manage student and mark records easily.
- Give beginners a fully documented, practical system to learn from.
- Simulate real-life login-based workflows without needing web or database layers.



Solution:
- A full menu-based flow like a real admin panel.
- Role-based login access: Admin, Faculty, Student, Proctor.
- Mark entry system with result display.
- Editable student records.

💬Simple, clean C++ logic to help learners understand everything line-by-line



It allows:
- Admins to add new students.
- Faculty to assign and view marks.
- Students to update their personal information.
- Proctors to access their own (coming soon) panel.
- Admins to view full data with access control.

* This system is ideal for beginner programmers who want to understand real-world application design using C++, especially focusing on array management, input handling, menu-driven logic, and modular code structuring.



Features: 
- Add Students   -> Admin can input up to 20 students' names, registration numbers, and roll IDs.
- Student Login  -> Students can view and update their own name.
- Faculty Login  -> Faculty can enter marks and view them in a table format.
- Admin Panel	   -> Secure access to view complete student records with marks.
- Modular Design ->	Each major functionality is encapsulated into independent functions.
- Extendable	   -> Easy to scale and improve (e.g., add file saving, or authentication).


Where Can You Use This Code?
- College projects, lab records.
- Mini system design practice (backend simulation).
- Resume project for C++ learners.
- Extend into full-stack system.

Data Architecture: 
- string nameIr[MAX];    // Student Names  
- string regr[MAX];      // Registration Numbers  
- string rollId[MAX];    // Roll Numbers  
- string marksId[MAX];   // Faculty-entered Marks  
- int choosecount = 0;   // Number of active students

* This is in-memory storage —> no files yet. But you can easily add fstream to save/load data later.


What You See in:

==== Main Menu ====
1. Add Students
2. Student Login
3. Faculty Login
4. Proctor Login
5. Admin View
6. Exit

Password/Keys : 

- Faculty	-> Subject Code: CSE2.
- Admin	  -> Password: Admin.
- Student	-> No login: menu-based access.
- Proctor	-> Coming soon.

What You'll Learn:
- C++ Basics	    -> cin, getline, if, switch, arrays.
- Modular Code	  -> Breaking logic into separate reusable functions.
- System          -> Thinking	Real-world use case of data roles and access levels.
- Architecture	  -> Backend logic flow without any external tools.
- Input Handling	-> How to safely take, clean, and use user input.

Need help understanding, modifying, or scaling this?
- LinkedIn: 
- GitHub: bijansayantan
- Email: banerjeebijan14@gmail.com


Written by Sayantan Banerjee.

