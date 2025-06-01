## ✅ Updated: 3.7 Lab – Switch Statements in C (for GitHub Codespaces)

### **Introduction**

In this lab, you'll create a simple menu-driven calculator using `switch` statements in C. This version is tailored for GitHub Codespaces, so there's no setup required—just write, compile, and run your C code in the browser.

---

### **Objectives**

* Understand the `switch` statement structure.
* Control program flow based on user choices.
* Compile and run the C program inside GitHub Codespaces using `gcc`.
* Explore the use of `case`, `break`, and `default` statements.

---

### **Lab Steps**

---

### **Step 1: Open the GitHub Codespace**

1. In your GitHub repo, click the green **Code** button.
2. Select **Codespaces > Create codespace on main**.
3. Wait for the development environment to launch (VS Code in the browser).

---

### **Step 2: Create and Edit Your C File**

1. In the left **Explorer** panel, click **New File** and name it: `switch_statements.c`
2. Paste the following code:

```c
#include <stdio.h>

int main() {
    int choice, a, b, result;

    // Display the menu
    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%d %d", &a, &b);
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
            break;
        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%d %d", &a, &b);
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
            break;
        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%d %d", &a, &b);
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
            break;
        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%d %d", &a, &b);
            if (b != 0) {
                result = a / b;
                printf("Result: %d / %d = %d\n", a, b, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Enter two numbers to find the remainder (modulus): ");
            scanf("%d %d", &a, &b);
            if (b != 0) {
                result = a % b;
                printf("Result: %d %% %d = %d\n", a, b, result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a number between 1 and 5.\n");
    }

    return 0;
}
```

---

### **Step 3: Compile the Program**

In the terminal inside GitHub Codespaces, run:

```bash
gcc switch_statements.c -o switch_statements
```

Check for the executable with:

```bash
ls
```

You should see: `switch_statements`

---

### **Step 4: Run the Program**

Execute your compiled program:

```bash
./switch_statements
```

Try out different options (1–5) and invalid ones (e.g., 0 or 6) to test error handling.

---

### **Step 5: Experiment**

Try:

* Valid operations like 1 (add), 4 (divide)
* Division or modulus by 0
* Invalid input like 7

---

### **Summary**

In this GitHub Codespaces-based lab, you:

* Practiced using `switch`, `case`, `break`, and `default`
* Handled user input and basic arithmetic operations
* Compiled and ran a C program using `gcc` in a cloud-based dev environment
