int main()
{
    int marks;
    printf("Enter your marks to identify grade: ");
    scanf("%d", &marks);
    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("Grade: A\n");
        if (marks > 95)
            printf("Great, you topped the class");
        break;
    case 8:
    case 7:
        printf("Grade: B");
        break;
    case 6:
        printf("Grade: C");
        break;
    case 5:
        printf("Grade: D");
        break;
    default:
        printf("Fail\n");
        printf("Practice hard to sustain");
        break;
    }

    return 0;
}