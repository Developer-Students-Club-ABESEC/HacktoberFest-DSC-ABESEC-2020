import math
from fractions import Fraction

nu1, de1 = int(input("numerator: ")), int(input("denominator: "))
ls = []


def egfrac(nu, de):
    if nu <= 1 or de <= 1:
        print("not possible")
    else:
        first = math.ceil(de / nu)
        ls.append(Fraction(1, first))
        second = Fraction(nu, de) - Fraction(1, first)
        if second.numerator == 1:
            ls.append(second)
        else:
            egfrac(second.numerator, second.denominator)
    return ls


egfrac(nu1, de1)
for x in ls:
    print(x)
