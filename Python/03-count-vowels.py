"""Count vowels in the text entered by the user."""

text = input("Enter some text: ").lower()
vowels = "aeiou"
count = 0

for character in text:
    if character in vowels:
        count += 1

print("Vowel count:", count)
