#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    float marks;
};

void decrement_marks(struct Student st[]);
void display(struct Student st);

int main() {
    struct Student stu[2] = { {"ram", 20, 29.33}, {"baun", 12, 39.33} }; 
    decrement_marks(stu);

    for(int i = 0; i < 2; i++) {
        display(stu[i]);
    }

    return 0; 
}

void decrement_marks(struct Student st[]) { 
    for(int i = 0; i < 2; i++) {
        st[i].marks -= 5;
    }
}

void display(struct Student st) { 
    printf("%s,%d, %.2f\n", st.name, st.age, st.marks); 
}
