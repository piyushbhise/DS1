#include <iostream>
using namespace std;
#define SIZE 10
struct Product
{ 
 int id;
 string name;
 float price;
 Product* next;
};
Product* table[SIZE] = {NULL};
// Add Product
void addProduct() {
 Product* p = new Product;
 cout << "Enter Product ID: ";
 cin >> p->id;

 cout << "Enter Product Name: ";
 cin >> p->name;

 cout << "Enter Price: ";
 cin >> p->price;

 int index = p->id % SIZE;

 p->next = table[index];
 table[index] = p;

 cout << "Product Added Successfully!\n";
}

// Display Products
void displayProducts() {
 for(int i = 0; i < SIZE; i++) {
 Product* temp = table[i];

  while (temp != NULL) {
   cout << "\nID: " << temp->id;
   cout << "\nName: " << temp->name;
   cout << "\nPrice: " << temp->price << endl;

    temp = temp->next;
}
}
}

// Search Product
void searchProduct() {
 int id;
 cout << "Enter Product ID: ";
 cin >> id;

 int index = id % SIZE;
 Product* temp = table[index];

 while (temp != NULL) {
 if (temp->id == id) {
 cout << "Product Found!\n";
 cout << "Name: " << temp->name;
 cout << "\nPrice: " << temp->price << endl;
 return;
}
 temp = temp->next;
}

 cout << "Product Not Found!\n";
}

// Update Product
void updateProduct() {
 int id;
 cout << "Enter Product ID: ";
 cin >> id;

 int index = id % SIZE;
 Product* temp = table[index];

 while (temp != NULL) {
 if (temp->id == id) {
 cout << "Enter New Name: ";
 cin >> temp->name;

 cout << "Enter New Price: ";
 cin >> temp->price;

 cout << "Product Updated!\n";
 return;
}
 temp = temp->next;
}

 cout << "Product Not Found!\n";
}

// Remove Product
void removeProduct() {
 int id;
 cout << "Enter Product ID: ";
 cin >> id;

 int index = id % SIZE;

 Product* temp = table[index];
 Product* prev = NULL;

 while (temp != NULL) {
   if (temp->id == id) {
     if (prev == NULL)
       table[index] = temp->next;
 else
   prev->next = temp->next;

 delete temp;
 cout << "Product Removed!\n";
return;
}

 prev = temp;
 temp = temp->next;
}

 cout << "Product Not Found!\n";
}

int main() {
int choice;

do {
        cout << "\n--- PRODUCT CATALOG ---";
        cout << "\n1. Add Product";
        cout << "\n2. Update Product";
        cout << "\n3. Remove Product";
        cout << "\n4. Display Products";
        cout << "\n5. Search Product";
        cout << "\n6. Exit";

cout << "\nEnter Choice: ";
cin >> choice;
switch (choice) {
case 1: addProduct(); break;
case 2: updateProduct(); break;
case 3: removeProduct(); break;
case 4: displayProducts(); break;
case 5: searchProduct(); break;
case 6: cout << "Exiting...";
break;
default: cout << "Invalid Choice!";
}
} while (choice != 6);
 return 0;
