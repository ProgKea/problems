def solution(string, ending):
    diff = len(string) - len(ending)
    return string[diff:] == ending

if __name__ == '__main__':
    print(solution("abc", "bc"))
