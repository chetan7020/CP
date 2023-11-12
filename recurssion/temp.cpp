// #include <iostream>
// using namespace std;

// int main() {
//     int x = 3;
//     cout << x++ + ++x;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int x = 3;
//     cout << x++ + ++x;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5, b = 2;
//     cout << (a > b ? a++ : b++);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     cout << (0.1+0.2==0.3);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int x = 5, y = 3;
//     cout << x + y * 2;;;;;
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int x = 3, y = 7;
//     printf("%d", (x & y) | (x ^ y));
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int array[] = {1, 2, 3, 4, 5};
//     int *ptr = array;
//     ptr += 2;
//     cout << *ptr;
//     return 0;
// }

#include <iostream>
int main() {
    int x = 10;
    int y = x + 1;
    int z = y * 2;
    std::cout << x + y + z << std::endl;
    return 0;
}


#include <iostream>
int main() {
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (i % 2 == 0) ? i : -i;
    }
    std::cout << "Sum of the series is " << sum << std::endl;
    return 0;
}


#include <iostream>
int main() {
    int num = 5;
    int result = num << 2;
    std::cout << result << std::endl;
    return 0;
}


#include <iostream>
int x = 5;

int main() {
    int x = 10;
    std::cout << x << std::endl;
    std::cout << ::x << std::endl;
    return 0;
}



