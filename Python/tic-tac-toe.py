gameInput = "_________"
grid = []
winners = []
for i in range(3):
    grid.append(list(gameInput[3 * i:3 * i + 3]))
def print_grid():
    global grid
    print("---------")
    print("| " + grid[0][0] + " " + grid[0][1] + " " + grid[0][2] + " |")
    print("| " + grid[1][0] + " " + grid[1][1] + " " + grid[1][2] + " |")
    print("| " + grid[2][0] + " " + grid[2][1] + " " + grid[2][2] + " |")
    print("---------")

# There can be more than one three in a row, this function stores all the occurance in the winners variable.
def three_in_row(grid):
    global winners
    for row in grid:
        if len(set(row)) == 1:
            winners.append(row[0])
    for i in range(3):
        if grid[0][i] is grid[1][i] is grid[2][i]:
            winners.append(grid[0][i])
    if (grid[0][0] is grid[1][1] is grid[2][2]) or (grid[2][0] is grid[1][1] is grid[0][2]):
        winners.append(grid[1][1])

def wins(winners):
    if winners[0] is "X":
        print("X wins")
    else:
        print("O wins")
        
def countxo(grid):
    x_count = 0
    o_count = 0
    for i in range(3):
        x_count += grid[i].count("X")
        o_count += grid[i].count("O")
    return [x_count, o_count]
        
def impossible(count, winners):
    if abs(count[0] - count[1]) > 1 or len(winners) > 1:
        return True
    return False
    
def not_finished(grid):
    x_count = 0
    o_count = 0
    for i in range(3):
        x_count += grid[i].count("X")
        o_count += grid[i].count("O")
    if (x_count + o_count) < 9:
        return True
    else:
        return False
def result():
    global grid
    global winners
    count = countxo(grid)
    three_in_row(grid)
    if impossible(count, winners):
        print("Impossible")
    elif len(winners) > 0:
        wins(winners)
    elif not_finished(grid):
        print("Game not finished")
    else:
        print("Draw")

def input1(count):
    x, y = input("Enter the Cordinates: > ").split()
    if not x.isnumeric() or  not y.isnumeric():
        print("You should enter numbers!")
        input1(count)
    elif int(x) not in range(1 , 4) or int(y) not in range(1 , 4):
        print("Coordinates should be from 1 to 3!")
        input1(count)
    else:
        if count % 2 == 0:
            fill_to_grid(x, y, "X")
        else:
            fill_to_grid(x, y, "O")
        
    
def fill_to_grid(x, y, inp):
    global grid
    xcord = abs(int(y)-3)
    ycord = int(x) - 1
    # cell is occupied
    if grid[xcord][ycord] == "X" or grid[xcord][ycord] == "O":
        print("This cell is occupied! Choose another one!")
        input1()
    else:
        grid[xcord][ycord] = inp
        print_grid()
        print(xcord, ycord)


def main():
    print_grid()
    count = 0
    while not_finished(grid):
        input1(count)
        count += 1
    result()
    
main()
