// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    // TODO: Implement the interest_rate function
    if(balance < 0){
        return 3.213;
    }else if(balance < 1000){
        return 0.5;
    }else if(balance < 5000){
        return 1.621;
    }else{
        return 2.475;
    }
      
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    return balance * interest_rate(balance)/100;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    return balance + yearly_interest(balance);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    int year = 0;

    while(balance < target_balance){
        balance = annual_balance_update(balance);
        year++;
    }
    
    return year;
}