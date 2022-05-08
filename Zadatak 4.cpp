int netSalary = 7000;
int expenses = 7000;

void main() {
 if(netSalary > expenses) {
   print("You have saved ${netSalary - expenses} this month");
 } else if (expenses > netSalary) {
   print("You have lost ${expenses - netSalary} this month");
 } else {
   print("Your balance havent changed");
 }
}