#include <stdio.h>
#include <string.h>

struct stud {
    char name[20];
    int roll;
};

int main() {
    struct stud s[10];
    int a, ch, i, h, m, n, bh, new, flag = 1, de;
    printf("Enter the number of students: ");
    scanf("%d", &a);
    do {
        printf("MENU\n1.INSERT\n2.DISPLAY\n3.UPDATE\n4.DELETE\n5.addsize\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the name of students and roll no:\n");
                for (i = 0; i < a; i++) {
                    scanf("%s %d", s[i].name, &s[i].roll);
                }
                break;
            case 2:
                for (i = 0; i < a; i++) {
                    printf("%s\n%d\n", s[i].name, s[i].roll);
                }
                break;
            case 3:
                printf("MENU\n1.Name \n2.Roll\n");
                scanf("%d", &bh);
                switch (bh) {
                    case 1:
                        printf("Enter the roll no of the name you want to change: ");
                        scanf("%d", &new);
                        flag = 0;
                        for (i = 0; i < a; i++) {
                            if (s[i].roll == new) {
                                printf("Enter the new name: ");
                                scanf("%s", s[i].name);
                                flag = 1;
                                break;
                            }
                        }
                        if (flag == 0) {
                            printf("Invalid roll no.\n");
                        }
                        break;
                    case 2:
                        printf("Enter The Roll Number To Modify: ");
                        scanf("%d", &new);
                        flag = 0;
                        for (i = 0; i < a; i++) {
                            if (s[i].roll == new) {
                                printf("Enter the new roll no.: ");
                                scanf("%d", &s[i].roll);
                                flag = 1;
                                break;
                            }
                        }
                        if (flag == 0) {
                            printf("Invalid roll no.\n");
                        }
                        break;
                }
                break;
            case 4:
                printf("Enter the roll no. you want to delete: ");
                scanf("%d", &de);
                flag = 0;
                for (i = 0; i < a; i++) {
                    if (s[i].roll == de) {
                        for (int j = i; j < a - 1; j++) {
                            strcpy(s[j].name, s[j + 1].name);
                            s[j].roll = s[j + 1].roll;
                        }
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    printf("Invalid roll no.\n");
                } else {
                    a--;
                }
                break;

                case 5:
                printf("Enter the name of students and roll no for adding array:\n");
                for (i = new; i < a; i++) {
                    scanf("%s %d", s[i].name, &s[i].roll);
                }
                break;
        }
    } while (ch != 6);

    return 0;
}