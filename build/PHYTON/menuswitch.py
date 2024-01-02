def restaurant_menu():
    menu = {
        "burger": 10.99,
        "pizza": 12.99,
        "pasta": 8.99,
    }
    item_name = input("Enter the food item name: ")
    price = menu.get(item_name, None)

    if price is not None:
        print("The price of {} is ${}.".format(item_name, price))
    else:
        print("We don't have that item in our menu.")
restaurant_menu()

