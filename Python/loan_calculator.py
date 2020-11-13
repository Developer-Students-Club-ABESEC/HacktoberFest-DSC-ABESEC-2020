from math import log, ceil

print("""What do you want to calculate?
type "n" for number of monthly payments,
type "a" for annuity monthly payment amount,
type "p" for loan principal:""")
type_ = input("> ")

if type_ == "n":
    p = int(input("Enter the loan principal:\n"))
    a = float(input("Enter the monthly payment:\n"))
    i = float(input("Enter the loan interest:\n")) / 1200
    n = ceil(log(a / (a - i * p), 1 + i))
    years_number = n // 12
    months_number = n - years_number * 12
    it = "It will take"
    month_text = f"and {months_number} months" if months_number > 1 else f"and {months_number} month"
    year_text = f"{years_number} years" if years_number > 1 else f"{years_number} year"
    to = "to repay this loan!"
    print(
        f"{it} {year_text} {to}" if years_number > 0 and months_number == 0
        else f"{it} {year_text} {month_text} {to}" if years_number > 0
        else f"{it} {month_text} {to}"
    )

elif type_ == "a":
    p = int(input("Enter the loan principal:\n"))
    n = int(input("Enter the number of periods:\n"))
    i = float(input("Enter the loan interest:\n")) / 1200
    a = ceil(p * i / (1 - (1 + i) ** -n))
    print(f"Your monthly payment is {a}!")

elif type_ == "p":
    a = float(input("Enter the annuity payment:\n"))
    n = int(input("Enter the number of periods:\n"))
    i = float(input("Enter the loan interest:\n")) / 1200
    p = round(a * (1 - (1 + i) ** -n) / i)
    print(f"Your loan principal {p}!")
