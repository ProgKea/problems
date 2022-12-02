def remove_character(string, index):
    return string[:index] + string[index + 1:]

def duplicate_count(text):
    duplicates = 0

    for i in range(len(text)):
        for j in range(len(text)):
            if (text[i] == text[j]):
                print(text[i])
                text = remove_character(text, i)
                duplicates += 1

if __name__ == "__main__":
    print(duplicate_count("Indivisibilities"))
