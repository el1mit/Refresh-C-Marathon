int mx_factorial_iter(int n) {
    int result = 1;
    
    if (n > 12 || n < 0) {
        return 0;
    }

    for (int i = 0; i <= n; i++) {
        result *= i;
    }
    return result;
}

