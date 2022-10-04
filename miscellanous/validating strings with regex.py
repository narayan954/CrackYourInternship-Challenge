#!/bin/python3

from os import environ
from re import compile

#
# Write the regular expression in the blank space below
#
regularExpression = (
    # Checks if string starts and ends with same character
    r"^[a-z]$|^([a-z]).*\1$")

pattern = compile(regularExpression)

query = int(input())
result = ["False"] * query

for i in range(query):
    someString = input()

    if pattern.match(someString):
        result[i] = "True"

with open(environ["OUTPUT_PATH"], "w") as fileOut:
    fileOut.write("\n".join(result))
