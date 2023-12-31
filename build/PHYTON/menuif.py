def restaurant_menu():
    item_name = input("Enter the food item name: ")

    if item_name == "burger":
        price = 10
    elif item_name == "pizza":
        price = 12
    elif item_name == "pasta":
        price = 8
    else:
        print("We don't have that item in our menu.")
        return

    print("The price of " + item_name + " is $" + str(price) )

# Example usage:
restaurant_menu()
