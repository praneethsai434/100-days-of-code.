//Print all enum names and integer values using a loop.
#include <stdio.h>

enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    printf("User Roles with their integer values:\n");

    for (role = ADMIN; role <= GUEST; role++) {
        printf("%d -> ", role);

        switch (role) {
            case ADMIN:  printf("ADMIN\n"); break;
            case USER:   printf("USER\n"); break;
            case GUEST:  printf("GUEST\n"); break;
        }
    }

    return 0;
}
