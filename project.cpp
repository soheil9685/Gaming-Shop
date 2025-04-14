#include <iostream>
#include <string>
#include <vector>
using namespace std;

// A class for products
class Product
{
private:
    vector<string> Name;
    vector<double> Price;
    vector<int> Quantity;
    vector<string> Category;

public:
    // Setter
    void setName(string name)
    {
        Name.push_back(name);
    }

    void setPrice(double price)
    {
        Price.push_back(price);
    }

    void setQuantity(int quantity)
    {
        Quantity.push_back(quantity);
    }

    void setCategory(string category)
    {
        Category.push_back(category);
    }

    // Getter
    vector<string> getName()
    {
        return Name;
    }

    vector<double> getPrice()
    {
        return Price;
    }

    vector<int> getQuantity()
    {
        return Quantity;
    }

    vector<string> getCategory()
    {
        return Category;
    }

    // Sizes
    int nameSize()
    {
        return Name.size();
    }

    int priceSize()
    {
        return Price.size();
    }

    int quantitySize()
    {
        return Quantity.size();
    }

    int categorySize()
    {
        return Category.size();
    }

    // Delete
    void removeName(int i)
    {
        Name.erase(Name.begin() + i);
    }

    void removePrice(int i)
    {
        Price.erase(Price.begin() + i);
    }

    void removeQuantity(int i)
    {
        Quantity.erase(Quantity.begin() + i);
    }

    void removeCategory(int i)
    {
        Category.erase(Category.begin() + i);
    }
};


// A class for admin
class Admin
{
private:
    double Wallet = 500;

public:
    // Setter
    void setWallet(double wallet)
    {
        Wallet = wallet;
    }

    // Getter
    double getWallet()
    {
        return Wallet;
    }
};

class Customer
{
    private:
    double Wallet = 100;

public:
    // Setter
    void setWallet(double wallet)
    {
        Wallet = wallet;
    }

    // Getter
    double getWallet()
    {
        return Wallet;
    }
};

// Objects (Declare objects in global scope)
Product globalProduct;
Admin globalAdmin;

Customer globalCustomer;
Product CustomerProduct;

// main Functions
void Menu();
void IncreaseWallet();

//admin functions
void AdminLogin();
void AdminMenu();
void AddProduct();
void RemoveProduct();
void SearchProduct();
void ShowAll();
void Wallet();

//customer functions
void CustomerMenu();
void ShowAllCustomer();
void SearchProductCustomer();
void addProductToCart();
void CustomerWallet();
void IncreaseWalletCustomer();

// First menu
void Menu()
{
    cout << "========== Welcome! ==========" << endl;
    cout << "1. Admin" << endl;
    cout << "2. Customer" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter the number: " << endl;

    int userChioce;
    cin >> userChioce;

    // if structure for user choice
    if (userChioce == 1)
    {
        // Admin Login
        AdminLogin();
    }
    else if (userChioce == 2)
    {
        CustomerMenu();
    }
    else if (userChioce == 3)
    {
        cout << "See ya later...!" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        Menu();
    }
};

// Admin login
void AdminLogin()
{
    cout << "========== Admin Login ==========" << endl;
    cout << "Enter your password: ";

    string adminPassword;
    cin >> adminPassword;

    // if structure for admin login
    if (adminPassword == "123456")
    {
        // Admin Menu
        AdminMenu();
    }
    else
    {
        cout << "Incorrect password...!" << endl;
        AdminLogin();
    }
}

// Admin menu
void AdminMenu()
{
    cout << "========== Admin Menu ==========" << endl;
    cout << "1. Add product" << endl;
    cout << "2. Remove product" << endl;
    cout << "3. Search" << endl;
    cout << "4. Show All" << endl;
    cout << "5. Wallet" << endl;
    cout << "6. Increase Wallet Value" << endl;
    cout << "7. Exit to menu" << endl;
    cout << "Enter a number: ";

    int adminChoice;
    cin >> adminChoice;

    // if structure for admin menu
    if (adminChoice == 1)
    {
        // Add product
        AddProduct();
    }
    else if (adminChoice == 2)
    {
        // Remove product
        RemoveProduct();
    }
    else if (adminChoice == 3)
    {
        // Search
        SearchProduct();
    }
    else if (adminChoice == 4)
    {
        // Show all
        ShowAll();
    }
    else if (adminChoice == 5)
    {
        // Wallet
        Wallet();
    }
    else if (adminChoice == 6)
    {
        // Exit
        Menu();
    }
    else
    {
        cout << "Invalid input...!" << endl;
        AdminMenu();
    }
}

// Customer menu
void CustomerMenu(){
    cout << "1. View  All Products" << endl;
    cout << "2. Search Products" << endl;
    cout << "3. View Cart" << endl;
    cout << "4. Check wallet" << endl;
    cout << "5. Increase Wallet Value" << endl;
    cout << "6. Exit to menu" << endl;

    int Choice;
    cin >> Choice;

    if (Choice == 1){
        ShowAllCustomer();
    }
    else if (Choice == 2){
        addProductToCart();
    }
    else if (Choice == 3){
        ShowAllCustomer();
    }
    else if (Choice == 4){
        CustomerWallet();
    }
    else if (Choice == 5){
        IncreaseWalletCustomer();
    }
    else if (Choice == 6){
        Menu();
    }
    else{
        cout << "Invalid choice" << endl;
        CustomerMenu();
    }
}

// Add product(admin)
void AddProduct()
{
    cout << "========== Add Product ==========" << endl;

    cout << "Name: ";
    string name;
    cin >> name;

    cout << "Price: ";
    double price;
    cin >> price;

    cout << "Quantity: ";
    int quantity;
    cin >> quantity;

    cout << "Category: (Monitor , Headset , Console)";
    string category;
    cin >> category;

    // if structure for category
    if (category == "Monitor")
    {
        // Save product to array
        globalProduct.setName(name);
        globalProduct.setPrice(price);
        globalProduct.setQuantity(quantity);
        globalProduct.setCategory(category);

        cout << "Product successfully added" << endl;
        AdminMenu();
    }
    else if (category == "Headset")
    {
        // Save product to array
        globalProduct.setName(name);
        globalProduct.setPrice(price);
        globalProduct.setQuantity(quantity);
        globalProduct.setCategory(category);

        cout << "Product successfully added" << endl;
        AdminMenu();
    }
    else if (category == "Console")
    {
        // Save product to array
        globalProduct.setName(name);
        globalProduct.setPrice(price);
        globalProduct.setQuantity(quantity);
        globalProduct.setCategory(category);

        cout << "Product successfully added" << endl;
        AdminMenu();
    }
    else
    {
        cout << "Incorrect category" << endl;
        AddProduct();
    }
}

// Add to Cart / customer search 
void addProductToCart()
{
        int Quantity = 0;
        int choice = 0;
        cout << "========== Add Product ==========" << endl;
        cout << "Do you want to buy any of products? \n 1.yes \n 2.no "; 
        cin >> choice;
        if (choice == 1){
            cout << "Enter the name of the product you want to add to  the cart: ";
            string name;
            cin >> name;    
            for (int i = 0; i < globalProduct.nameSize(); i++)
            {
                if (name == globalProduct.getName()[i])
                {
                    cout << "Enter the quantity: ";
                    cin >> Quantity;
                    if (Quantity > globalProduct.getQuantity()[i])
                    {
                        cout << "Not enough available!" << endl;
                        CustomerMenu();
                    }
                    else
                    {
                        if(Quantity * globalProduct.getPrice()[i] > globalCustomer.getWallet())
                        {
                            cout << " your wallet doesn't have enough money "<< endl;
                            CustomerMenu();
                        }
                        else 
                        {
                            globalCustomer.setWallet(Quantity * globalProduct.getPrice()[i] + globalCustomer.getWallet());
                            globalAdmin.setWallet( globalAdmin.getWallet() - Quantity * globalProduct.getPrice()[i]);

                            cout << "You have added " << name << " to your cart." << endl;
                            CustomerProduct.setName(globalProduct.getName()[i]);
                            CustomerProduct.setPrice(globalProduct.getPrice()[i]);
                            CustomerProduct.setQuantity(globalProduct.getQuantity()[Quantity]);
                            CustomerProduct.setCategory(globalProduct.getCategory()[i]);

                            cout << "Price: " << globalProduct.getPrice()[i] << endl;   
                            cout << "Quantity: " << globalProduct.getQuantity()[i] << endl;
                            cout << "Category: " << globalProduct.getCategory()[i] << endl;
                            CustomerMenu();
                        }
                        
                    }
                    
                }
                else
                {
                    cout << "There's no product by this name...!" << endl;
                    CustomerMenu();
                }
            }
            
        }
        else if (choice == 2)
        {
            CustomerMenu();
        }
        
        else
        {
            cout << "Invalid input...!" << endl;
            CustomerMenu();
        }
}

// Remove product(admin)
void RemoveProduct()
{
    cout << "========== Remove Product ==========" << endl;
    cout << "Name: ";

    string name;
    cin >> name;

    // Look for the product to remove
    if (globalProduct.nameSize() == 0)
    {
        cout << "There's no to remove!" << endl;
        AdminMenu();
    }
    else
    {
        for (int i = 0; i < globalProduct.nameSize(); i++)
        {
            if (name == globalProduct.getName()[i])
            {
                globalProduct.removeName(i);
                globalProduct.removePrice(i);
                globalProduct.removeQuantity(i);
                globalProduct.removeCategory(i);

                cout << "The product successfully removed...!" << endl;
                break;
            }
            else
            {
                cout << "There's no product by this name...!" << endl;
                AdminMenu();
            }
        }
    }
}

// Search for a product
void SearchProduct()
{
    cout << "========== Search Product ==========" << endl;
    cout << "Enter the name: ";

    string name;
    cin >> name;

    // Find the productw
    if (globalProduct.nameSize() == 0)
    {
        cout << "There's no product in the shop!" << endl;
    }
    else
    {
        bool status = false;
        for (int i = 0; i < globalProduct.nameSize(); i++)
        {
            if (name == globalProduct.getName()[i])
            {
                cout << "Name: " << globalProduct.getName()[i] << endl;
                cout << "Price: " << globalProduct.getPrice()[i] << endl;
                cout << "quantity: " << globalProduct.getQuantity()[i] << endl;
                cout << "Category: " << globalProduct.getCategory()[i] << endl;

                status = true;

                AdminMenu();
            }
        }
        if (!status)
        {
            cout << "There's no product by this name...!" << endl;
            AdminMenu();
        }
    }
}

// Show all products
void ShowAllCustomer()
{
    int choice;
    cout << "========== Show All Products ==========" << endl;

    if (globalProduct.nameSize() == 0)
    {
        cout << "There's no product in the shop yet...!" << endl;
        CustomerMenu();
    }
    else
    {
        for (int i = 0; i < globalProduct.nameSize(); i++)
        {
            cout << "Name: " << globalProduct.getName()[i] << endl;
            cout << "Price: " << globalProduct.getPrice()[i] << endl;
            cout << "Quantity: " << globalProduct.getQuantity()[i] << endl;
            cout << "Category: " << globalProduct.getCategory()[i] << endl;
            cout << "* ---------- *" << endl;
        }
        /// Ask if the user wants to buy a product
        addProductToCart();
    }

}

// Show all products in cart
void ShowCart()
{
    int choice;
    cout << "========== Show All Products ==========" << endl;

    if (CustomerProduct.nameSize() == 0)
    {
        cout << "There's no product in the shop yet...!" << endl;
        CustomerMenu();
    }
    else
    {
        for (int i = 0; i < CustomerProduct.nameSize(); i++)
        {
            cout << "Name: " << CustomerProduct.getName()[i] << endl;
            cout << "Price: " << CustomerProduct.getPrice()[i] << endl;
            cout << "Quantity: " << CustomerProduct.getQuantity()[i] << endl;
            cout << "Category: " << CustomerProduct.getCategory()[i] << endl;
            cout << "* ---------- *" << endl;
        }
        /// Ask if the user wants to buy a product
    }

}

// Show all products
void ShowAll()
{
    cout << "========== Show All Products ==========" << endl;

    if (globalProduct.nameSize() == 0)
    {
        cout << "There's no product in the shop yet...!" << endl;
        AdminMenu();
    }
    else
    {
        for (int i = 0; i < globalProduct.nameSize(); i++)
        {
            cout << "Name: " << globalProduct.getName()[i] << endl;
            cout << "Price: " << globalProduct.getPrice()[i] << endl;
            cout << "Quantity: " << globalProduct.getQuantity()[i] << endl;
            cout << "Category: " << globalProduct.getCategory()[i] << endl;
            cout << "* ---------- *" << endl;
        }
        AdminMenu();
    }
}

// outputs the Admins wallet value
void Wallet()
{
    cout << "========== Wallet ==========" << endl;
    cout << "Credit of wallet: " << globalAdmin.getWallet() << endl;
    AdminMenu();
}


// outputs the customers wallet value
void CustomerWallet()
{
    cout << "========== Wallet ==========" << endl;
    cout << "Credit of wallet: " << globalCustomer.getWallet() << endl;
    CustomerMenu();
}


void IncreaseWalletCustomer()
{
    double increaseValue;
    cout << "Enter the amount you want to add to your wallet: ";
    cin >> increaseValue;
    if (increaseValue < 0 || increaseValue > 10000)
    {
        cout << "Invalid amount. Please enter a positive value." << endl;
        CustomerMenu();
    }

    globalCustomer.setWallet(globalCustomer.getWallet() + increaseValue);
    cout << "New wallet value: " << globalCustomer.getWallet() << endl;
    CustomerMenu();
}

void IncreaseWalletAdmin()
{
    double increaseValue;
    cout << "Enter the amount you want to add to your wallet: ";
    cin >> increaseValue;
    if (increaseValue < 0 || increaseValue > 10000)
    {
        cout << "Invalid amount. Please enter a positive value." << endl;
        AdminMenu();
    }

    globalAdmin.setWallet(globalAdmin.getWallet() + increaseValue);
    cout << "New wallet value: " << globalAdmin.getWallet() << endl;
    AdminMenu();
}

int main()
{
    Menu();
    return 0;
}