int sum_natural_no(int num); // declare function outside the main function
int
 main()
{
    int num, sum = 0; // declare local variable
    printf("Enter any positive number to calculate the sum of natural no. ");
    scanf("%d", &num); // take an input from the user

    sum = sum_natural_no(num); // call the function

    printf("Sum of the first %d natural number is: %d", num, sum); // print the sum of natural number
    return 0;
}
int sum_natural_no(int num)
{
    if( num == 0) // define if condition
    {
        return num;
    }
    else
    {   // return the else condition
        return( num + sum_natural_no( num - 1));
    }
}
