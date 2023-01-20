#include <stdio.h>

int main()
{
	double loan_amount,interest_rate,number_of_years,paid_total_loan_amount,monthly_paying_loan_amonut;
	
	printf("Enter Loan Amount :" );
	scanf("%lf",&loan_amount);
	
	printf("\nEnter Interest Rate :" );
	scanf("%lf",&interest_rate);
	
	printf("\nEnter Number of Loan Paying Year :" );
	scanf("%lf",&number_of_years);
	
	paid_total_loan_amount= loan_amount+((loan_amount*interest_rate)/100.00)*number_of_years;
	
	monthly_paying_loan_amonut= paid_total_loan_amount/(number_of_years*12);
	
	printf("\n\nTotal Paying Amount of loan after %0.2lf years is : \n            %0.3lf\n\n",number_of_years,paid_total_loan_amount);
	
	printf("Paying Amount of Loan Per Month : %0.2lf",monthly_paying_loan_amonut);
	
	
	
	
	
	
	return 0;
}
