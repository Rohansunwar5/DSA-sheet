extracting the digits 

when we for example take a number 7789 and modulo it with 10 it returns us the last digit of the number 

7789 % 10 = 9;

further diving it by 10 we can get the next target for the extraction 
for ex 7789 / 10 => 778.9 so taking the round value of this number we get 778 and so on we can extrat the next following numbers 

while (N > 0){
  last digit = n % 10; returns last digit 
  n = n/10; removes last digit
}

when the logic is depending on the division , then the tc becomes log

all the factorscan be found in the sqrt(n)

when this is a modulo operation going  on the tc will always include Log