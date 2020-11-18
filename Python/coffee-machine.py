water_avail = 400
milk_avail = 540
coffee_avail = 120
cups_avail = 9
money_avail = 550

def main():
    choose_action()
        
def choose_action():
    action = input("What you want me to do (buy, fill, take, remaining, exit):\n")
    if action == "take":
        take()
    elif action == "buy":
        buy()
    elif action == "fill":
        fill()
    elif action == "remaining":
        remaining()
    elif action == "exit":
        exit()
    else:
        print("Please Enter (buy, fill, take, remaining, exit)\n")
        choose_action()
    

def check_resources(water, milk, coffee):
    global water_avail
    global milk_avail
    global coffee_avail
    global cups_avail
    water_after_sale = water_avail - water
    milk_after_sale = milk_avail - milk
    coffee_after_sale = coffee_avail - coffee
    cups_after_sale = cups_avail - 1
    if water_after_sale <= 0:
        return "water"
    elif milk_after_sale <= 0:
        return "milk"
    elif coffee_after_sale <= 0:
        return "coffee"
    elif cups_after_sale <= 0:
        return "cups"
    else:
        return "available"
    
def print_avail():
    global water_avail
    global milk_avail
    global coffee_avail
    global cups_avail
    global money_avail
    print("The coffee machine has:")
    print(water_avail, "of water")
    print(milk_avail, "of milk")
    print(coffee_avail, "of coffee beans")
    print(cups_avail, "of cups")
    print(money_avail, "of money")
    
def buy():
    global water_avail
    global milk_avail
    global coffee_avail
    global cups_avail
    global money_avail
    type_of_coffee = input("What do you want to buy? 1 - espresso, 2 - latte, 3 - cappuccino, back - to main menu:\n")
    if type_of_coffee == "back":
        choose_action()
    else:
        type_of_coffee = int(type_of_coffee)
    if type_of_coffee == 1:
        sell_espresso()
    elif type_of_coffee == 2:
        sell_latte()
    else:
        sell_cappuccino()
    choose_action()
        
def sell_espresso():
    global water_avail
    global milk_avail
    global coffee_avail
    global cups_avail
    global money_avail
    res = check_resources(250, 0, 16)
    if res == "available":
        print("I have enough resources, making you a coffee!")
        water_avail -= 250
        coffee_avail -= 16
        cups_avail -= 1
        money_avail += 4
    else:
        print("Sorry, not enough", res, "!")
    
def sell_latte():
    global water_avail
    global milk_avail
    global coffee_avail
    global cups_avail
    global money_avail
    res = check_resources(350, 75, 20)
    if res == "available":
        print("I have enough resources, making you a coffee!")
        water_avail -= 350
        milk_avail -= 75
        coffee_avail -= 20
        cups_avail -= 1
        money_avail += 7
    else:
        print("Sorry, not enough", res, "!")
    
def sell_cappuccino():
    global water_avail
    global milk_avail
    global coffee_avail
    global cups_avail
    global money_avail
    res = check_resources(200, 100, 12)
    if res == "available":
        print("I have enough resources, making you a coffee!")
        water_avail -= 200
        milk_avail -= 100
        coffee_avail -= 12
        cups_avail -= 1
        money_avail += 6
    else:
        print("Sorry, not enough", res, "!")
    
def take():
    global money_avail
    print("I gave you $", money_avail)
    money_avail = 0
    print_avail()
    
def fill():
    global water_avail
    global milk_avail
    global coffee_avail
    global cups_avail
    water_avail += int(input("Write how many ml of water do you want to add:\n"))
    milk_avail += int(input("Write how many ml of milk do you want to add:\n"))
    coffee_avail += int(input("Write how many grams of coffee beans do you want to add:\n"))
    cups_avail += int(input("Write how many disposable cups of coffee do you want to add:\n"))
    choose_action()
    
def remaining():
    print_avail()
    choose_action()
    
main()
