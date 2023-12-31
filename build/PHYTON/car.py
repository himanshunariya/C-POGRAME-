# Initialize the dictionary with car prices
car_prices = {
    'venue': 10,
    'honda': 10,
    'creta': 20,
    'i20': 8,
    'swift': 12
}

# Add a new car 'benz' with a price of 35
car_prices['benz'] = 35
print("---------------------------------------------------------------------------------------")

# Print the number of cars
print("Number of cars:", len(car_prices))
print("---------------------------------------------------------------------------------------")

# Print the cost of 'creta'
print("Cost of creta:", car_prices['creta'])
print("---------------------------------------------------------------------------------------")

# Update the price of 'creta' to 18
car_prices['creta'] = 18

# Print the cost of 'bmw' if it exists, else 30 (using get method)
print("Cost of bmw:", car_prices.get('bmw', 30))
print("---------------------------------------------------------------------------------------")

# Print all car names and their costs
print("All car costs and names:")
for car, price in car_prices.items():
    print(f"{car}: {price}")
    print("---------------------------------------------------------------------------------------")

# Find the costliest car in the dictionary
costliest_car = max(car_prices, key=car_prices.get)
print("Costliest car:", costliest_car, "Cost:", car_prices[costliest_car])
print("---------------------------------------------------------------------------------------")

# Remove the costliest car from the dictionary
del car_prices[costliest_car]

# Print the updated dictionary
print("Updated dictionary:", car_prices)
print("---------------------------------------------------------------------------------------")

# Print 'yes' if the dictionary is not empty else 'no'
print("yes" if car_prices else "no")
print("---------------------------------------------------------------------------------------")

# Check if 'honda' is present in the dictionary
print("Is 'honda' present?", 'honda' in car_prices)
print("---------------------------------------------------------------------------------------")

# Print the name of the car(s) with a price of 10
print("Car(s) with a price of 10:")
for car, price in car_prices.items():
    if price == 10:
        print(car)
        print("---------------------------------------------------------------------------------------")
