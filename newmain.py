def finding_rot_k_cipher(S, T, U):
    K = ord(T[0]) - ord(S[0])
    if K < 0:
        K += 26

    def rot_k(char, k):
        return chr((ord(char) - ord('a') + k) % 26 + ord('a'))

    result = ''.join(rot_k(char, K) for char in U)
    return result


def main():
    t = int(input())

    for _ in range(t):
        N = int(input())
        S = input().strip()
        T = input().strip()
        U = input().strip()

        result = finding_rot_k_cipher(S, T, U)
        print(result)



main()
