#include<stdio.h>
#include<string.h>
int mobno,age, travel, fare,add,dist,money;
void timer() {
    char time[4][6] = {"5AM","10AM","3PM","8PM"};
    char inputime[6];
    printf("\nNOTE: Clock is 24hrs based\n");
    printf("AVAILABLE TRAINS ARE:\n");  

    for (int t = 0; t < 4; t++) {
        printf("%s ", time[t]);
    }
    printf("\nSelect The Time of Booking: ");
    scanf("%s", inputime, (unsigned)sizeof(inputime));

    int found = 0; 
    for (char t = 0; t < 4; t++) {
            if (strcmp(inputime, time[t]) == 0) {
            printf("Your Ticket Has Been successfully booked\nHAPPY JOURNEY!!!\n");
            printf("Time of train: ");
            printf("%s\n", inputime);
            found = 1;
            break;
        }
    }
    if (!found) { 
        printf("NO TRAINS AVAILABLE, SORRY \n");
        exit(0);
    }
}

int meal() {
    int select;
    printf("Would you like to include meal to your journey \n 1.YES \n 2.NO\n");
    scanf("%d", &select);
    if (select == 1)
    {   adds:
        money = money + 100;
        int menu;
        printf("Select VEG OR NON VEG :\n1.VEG(Rs100)(includes veg cheese sandwich and coke)\n2.NONVEG(Rs100)(includes chicken sandwich and coke)\n");
        scanf("%d", &menu);
        if (menu == 1)
        {
            printf("Your meal contains veg cheese sandwich and coke\n");
        }
        else if (menu == 2) {
            printf("Your meal contains chicken sandwich and coke\n");
        }
        else
        {
            exit(0);
        }
        printf("Do you want to add more items?\n1.YES\n2.NO\n");
        scanf("%d", &add);
        if (add == 1) {
            goto adds;
        }
    }
    return money;
}

int main()
{    
    char name[30];
    printf("RAILWAY TICKET FARE CALCULATOR\n");
    printf("Enter your name\n");
    scanf("%30s", &name);
    remobno :
    printf("Enter your mobile number :\n");
    scanf("%10d", &mobno);
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("FARE RATE : \n0-15yrs = 5Rs\n16-30 = 15Rs\n31-60 = 20Rs\nAbove 60 = 10Rs\n");
    if (age <= 15) {
        fare = 5;
    }
    else if (age > 15 && age <= 30) {
        fare = 15;
    }
    else if (age > 30 && age <= 60) {
        fare = 20;
    }
    else {
        fare = 10;
    }
    destinations:
    printf("Enter your travel destinations :\n1. PUNE-NASHIK(200km)\n2. NASHIK-PUNE(200km)\n3. PUNE-MUMBAI(150km)\n4. MUMBAI-PUNE(150km)\n5. NASHIK-MUMBAI(150km)\n6. MUMBAI-NASHIK(150km)\nFROM - TO \n");
    scanf("%d", &travel);
    switch (travel) {
    case 1:
        dist = 200;
        money = fare * dist;
        timer();
        meal();
        printf("Your fare from PUNE to NASHIK is %dRs", money);
        break;
    case 2:
        dist = 200;
        money = fare * dist;
        timer();
        meal();
        printf("Your fare from NASHIK to PUNE is %dRs", money);
        break;
    case 3:
        dist = 150;
        money = fare * dist;
        timer();
        meal();
        printf("Your fare from PUNE to MUMBAI is %dRs", money);
        break;
    case 4:
        dist = 150;
        money = fare * dist;
        timer();
        meal();
        printf("Your fare from MUMBAI to PUNE is %dRs", money);
        break;
    case 5:
        dist = 150;
        money = fare * dist;
        timer();
        meal();
        printf("Your fare from NASHIK to MUMBAI is %dRs", money);
        break;
    case 6:
        dist = 150;
        money = fare * dist;
        timer();
        meal();
        printf("Your fare from MUMBAI to NASHIK is %dRs", money);
        break;
    default:
        printf("INVALID INPUT! Please select your choice between 1-6\n");
        goto destinations;
    }
    return 0;
}