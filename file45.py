a, lst = int(input()), input().split()
lst = [int(ch) for ch in lst]


def is_modal(a, lst):
    i = 1
    for i in range(i, a):
        if not (lst[i - 1] < lst[i]):
            break
    else:
        return "yes"

    for i in range(i, a):
        if not (lst[i - 1] == lst[i]):
            break
    else:
        return "yes"

    for i in range(i, a):
        if not (lst[i - 1] > lst[i]):
            return "no"
    else:
        return "yes"

print(is_modal(a, lst
