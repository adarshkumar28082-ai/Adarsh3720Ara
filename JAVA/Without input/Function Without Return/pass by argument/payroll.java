
public class payroll {

	// Function without return that accepts arguments (pass-by-argument)
	static void calculatePayroll(String name, double hoursWorked, double hourlyRate, double allowance) {
		double gross = hoursWorked * hourlyRate + allowance;
		double tax = gross * 0.10; // 10% tax for example
		double net = gross - tax;

		System.out.println("-------------------------------");
		System.out.println("Employee: " + name);
		System.out.printf("Hours Worked: %.2f\n", hoursWorked);
		System.out.printf("Hourly Rate: %.2f\n", hourlyRate);
		System.out.printf("Allowance: %.2f\n", allowance);
		System.out.printf("Gross Pay: %.2f\n", gross);
		System.out.printf("Tax (10%%): %.2f\n", tax);
		System.out.printf("Net Pay: %.2f\n", net);
	}

	public static void main(String[] args) {
		// Example calls passing arguments to the function
		calculatePayroll("Alice", 160, 15.50, 200);
		calculatePayroll("Bob", 172.5, 18.00, 150);
		calculatePayroll("Charlie", 120, 20.00, 100);
	}
}

