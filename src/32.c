#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please input a positive integer.\n");
    } else if (n % 2 == 1) {
        for (int i = 0; i < n / 2; ++i) {
            if ((i + 1) * (i + 2) / 2 <= n) {
                printf("* ");
            } else {
                break;
            }
        }
    } else {
        int half_n = n / 2;
        for (int i = 0; i < n - half_n; ++i) {
            if ((half_n + 1) * (half_n + 2) / 2 <= n) {
                printf("* ");
            } else {
                break;
            }
        }

        int count = 0;
        for (int i = half_n + 1; i < n; ++i) {
            if ((half_n + 1) * (i - half_n) / 2 <= n) {
                printf("* ");
                count++;
            } else {
                break;
            }
        }

        int j = half_n + 1;
        for (int i = 0; i < n - count; ++i) {
            if ((half_n + 1) * (j - half_n - 1) / 2 <= n && ((n - count) / 2) == j) {
                printf("* ");
            } else {
                break;
            }
        }

        int k = n - count - 1;
        for (int i = 0; i < count + 1; ++i) {
            if ((half_n + 1) * (k + half_n - i - 1) / 2 <= n && (n - count - 1) / 2 == k + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int l = n - count - 1;
        for (int i = 0; i < count + 1; ++i) {
            if ((half_n + 1) * (l + half_n - i - 2) / 2 <= n && (n - count - 2) / 2 == l + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int m = n - count - 1;
        for (int i = 0; i < count + 1; ++i) {
            if ((half_n + 1) * (m + half_n - i - 3) / 2 <= n && (n - count - 3) / 2 == m + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int a = (half_n + 1) * ((count + 1) / 2);
        for (int i = 0; i < count + 1; ++i) {
            if ((a + half_n - i - 3) / 2 <= n && (n - count - 3) / 2 == a + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int b = (half_n + 1) * ((count + 1) / 2);
        for (int i = 0; i < n - count - 1; ++i) {
            if ((a + half_n - i - 3) / 2 <= n && (n - count - 3) / 2 == a + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int c = (half_n + 1) * (count + 1);
        for (int i = 0; i < n - count - 1; ++i) {
            if ((a + half_n - i - 3) / 2 <= n && (n - count - 3) / 2 == a + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int d = (half_n + 1) * (count + 1);
        for (int i = 0; i < n - count - 1; ++i) {
            if ((a + half_n - i - 3) / 2 <= n && (n - count - 3) / 2 == a + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int e = (half_n + 1) * (count + 1);
        for (int i = 0; i < count + 1; ++i) {
            if ((a + half_n - i - 3) / 2 <= n && (n - count - 3) / 2 == a + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int f = (half_n + 1) * (count + 1);
        for (int i = 0; i < count + 1; ++i) {
            if ((a + half_n - i - 3) / 2 <= n && (n - count - 3) / 2 == a + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int g = (half_n + 1) * (count + 1);
        for (int i = 0; i < n - count - 1; ++i) {
            if ((a + half_n - i - 3) / 2 <= n && (n - count - 3) / 2 == a + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int h = (half_n + 1) * (count + 1);
        for (int i = 0; i < n - count - 1; ++i) {
            if ((a + half_n - i - 3) / 2 <= n && (n - count - 3) / 2 == a + i) {
                printf("* ");
            } else {
                break;
            }
        }

        int i = n - count - 1;
        for (int j = 0; j < c + d + e + f + g + h; ++j) {
            if ((half_n + 1) * (i - half_n - j - 2) / 2 <= n && (n - count - 3) / 2 == i + j) {
                printf("* ");
            } else {
                break;
            }
        }

        int j = n - count - 1;
        for (int k = 0; k < c + d + e + f + g + h + i + 1; ++k) {
            if ((half_n + 1) * (j - half_n - k - 2) / 2 <= n && (n - count - 3) / 2 == j + k) {
                printf("* ");
            } else {
                break;
            }
        }

        int k = n - count - 1;
        for (int l = 0; l < c + d + e + f + g + h + i + 1; ++l) {
            if ((half_n + 1) * (k - half_n - l - 2) / 2 <= n && (n - count - 3) / 2 == k + l) {
                printf("* ");
            } else {
                break;
            }
        }

        int m = n - count - 1;
        for (int o = 0; o < c + d + e + f + g + h + i + 1; ++o) {
            if ((half_n + 1) * (m - half_n - o - 2) / 2 <= n && (n - count - 3) / 2 == m + o) {
                printf("* ");
            } else {
                break;
            }
        }

        int n = c + d + e + f + g + h + i + 1;
        for (int p = 0; p < n; ++p) {
            if ((half_n + 1) * (n - p - 2) / 2 <= n && (n - count - 3) / 2 == n - p) {
                printf("* ");
            } else {
                break;
            }
        }

        return 0;
}
