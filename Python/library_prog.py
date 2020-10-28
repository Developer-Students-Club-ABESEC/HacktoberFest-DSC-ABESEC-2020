class Library:
    def __init__(self,libraryname,booklist):
        self.lend_book={}
        self.library_name=libraryname
        self.booklist=booklist

        for book in self.booklist:
            self.lend_book[book] = None

    def add_books(self,book_name):
        self.booklist.append(book_name)
        self.lend_book[book_name]=None


    def lendz_books(self,book,author):
        if book in self.booklist:
            if self.lend_book[book] is None:
                self.lend_book[book]=author
            else:
                print("the book is already taken")
        else:
            print("wrong book name entered:")


    def return_books(self,book,author):
        if book in self.booklist:
            if self.book[book] is not None:
                self.booklist.append(book)
                self.lend_book[book] = None




    def delete_books(self,book_name):
        if book_name in self.booklist:
            self.booklist.remove(book_name)
            self.lend_book.pop(book_name)
        else:
            print("the book is not the list")

    def print_details(self):
        return f"the book's list is {self.booklist} and library name is {self.library_name}"

if __name__ == "__main__":
    list_books = ['Cookbook', 'Motu Patlu', 'Chacha_chaudhary', 'Rich Dad and Poor Dad']
    Library_name = 'Harry'
    secret_key = 123456

    harry = Library( Library_name,list_books)




    print("welcome to the library system\n There are various function in this library")


    print("to add books 'a'\n to lend book 'l'\nto return the book 'r'\nto delete the book 'd'\to print the book list 'p' :")



    Exit=False
    while(Exit is not True):
        input_1 = input("options:")

        if input_1 == 'a':
            input_2 = input("enter the book name you want to enter:")
            harry.add_books(input_2)

        elif input_1 == 'l':
            input_2 = input("enter the book name you want to lend:")
            input_3 = input("enter your name :")
            harry.lendz_books(input_2, input_3)

        elif input_1 == "r":
            input_2 = input("enter the book name you want to return")
            input_3 = input("enter your name :")
            harry.return_books(input_2, input_3)

        elif input_1 == 'd':
            input_2 = input("enter the book you want to delete:")
            secret = input("enter the secret key to get access:")
            if secret == secret_key:
                harry.delete_books(input_2)

            else:
                print("key is wrong")
        elif input_1 == 'p':
            print(harry.print_details())
