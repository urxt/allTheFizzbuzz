#!/usr/bin/env python3 

def main():
    
    for i in range(1, 101):

        if i % 3 == 0 and i % 5 == 0:
            print("Fizz Buzz")
            continue

        elif i % 3 == 0:
            print("Fizz")
            continue

        elif i % 5 == 0:
            print("Buzz")
            continue

        else: 
            print(i)


if __name__ == "__main__":
    main()


