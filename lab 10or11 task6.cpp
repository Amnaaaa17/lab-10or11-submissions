#include <stdio.h>
struct salary {
    float pay;
    float bonus;
    float deduction;
};
struct employee {
    int id;
    char name[20];
    struct salary s;
};
float netsalary(struct employee emp) {
    float net;
    net = emp.s.pay + emp.s.bonus - emp.s.deduction;
    printf("\nThe net salary is: %.2f\n", net);
    return net;
}
void display(struct employee emp) {
    printf("\n-----EMPLOYEE DETAILS-----");
    printf("\nID: %d", emp.id);
    printf("\nName: %s", emp.name);
    printf("\nPay: %.2f", emp.s.pay);
    printf("\nBonus: %.2f", emp.s.bonus);
    printf("\nDeduction: %.2f", emp.s.deduction);
}

int main() {
    struct employee e;

    printf("\nEnter details of employee:");
    printf("\nEnter ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Pay: ");
    scanf("%f", &e.s.pay);

    printf("Enter Bonus: ");
    scanf("%f", &e.s.bonus);

    printf("Enter Deduction: ");
    scanf("%f", &e.s.deduction);

    display(e);

    netsalary(e);

    return 0;
}

