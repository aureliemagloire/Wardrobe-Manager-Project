A C++ command-line application designed to manage clothing items using custom-built data structures. This project implements a linked list with specialized stack and queue structures to coordinate clothing organization, laundry management, and outfit planning.

## 🚀 Features

- **Custom Linked List:** A hand-coded Linked List for efficient dynamic storage of garments and wardrobe sections.
- **Laundry Stack:** A Last-In, First-Out (LIFO) stack to track dirty items in a hamper.
- **Outfit Queue:** A First-In, First-Out (FIFO) queue for planning and wearing outfits in sequence.
- **CLI Interface:** A robust menu-driven interface for managing your digital closet.
- **Memory Safety:** Implementation of the Rule of Three (Destructors, Copy Constructors, and Assignment Operators) to ensure leak-free manual memory management.

## 🏗️ Architecture & Design

The project follows a hierarchical composition pattern:
1.  **Wardrobe:** The top-level manager that holds a linked list of Sections.
2.  **Section:** Logical groupings (e.g., "Tops", "Summer Wear") containing a `GarmentList`.
3.  **GarmentList:** The engine of the application, managing `Node` instances that store `Garment` objects by value.
4.  **Garment:** The base domain object storing metadata (ID, Name, Type, Color, Cleanliness).

### Data Structures Detail
- **Linked List:** Uses a "Look-Ahead" strategy for node removal to avoid the need for a previous pointer in a singly-linked structure.
- **Stack:** Used for the laundry pile because the last item thrown in is usually the first one grabbed for the wash.
- **Queue:** Used for outfit planning to ensure your Monday outfit is worn before your Tuesday outfit.

## 🛠️ Installation

1.  **Clone the repository:**

```bash
    git clone [https://github.com/yourusername/wardrobe-manager.git](https://github.com/yourusername/wardrobe-manager.git)
    ```
2.  **Navigate to the directory:**
    ```bash
    cd wardrobe-manager
    ```
3.  **Compile the project:**
    ```bash
    g++ -o wardrobe_manager main.cpp
    ```

## 📋 Usage

Run the compiled executable:
```bash
./wardrobe_manager
