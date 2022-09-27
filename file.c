int palindrome(int n) {
    int rev = 0;
    int temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main() {
    int n;
    cin >> n;
    cout << palindrome(n) << endl;
    return 0;
}
