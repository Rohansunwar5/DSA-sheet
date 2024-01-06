if a function is a return type and if there is not return statement within the function, it will always throw a garbage value, so always make sure to give a return statement even if conditions check or not

functions are a set of code that performs certain something for you
//  functions are used to modularise code
//  functions are used to increase readability
//  functions prevent repetation of writing same code

// types =>
// void => doesnt return anything,
// return => , parameterised, non parametarised


Pass By value:

Since the function only give the value, whatever calculations are peformed within the function or returned, the original value of the variable dosen't change within the main function


pass by Reference => send the address of the original value so any change in the value within the function the original value also gets affected
void PassByReference(string &name) // the & symbol attaches the address of the original value
{
  name[0] = 'B';
  cout << name << endl;
}

when we are passing a array in the function NOTE: it will always go with reference which means the orginal value can also be changed
but apart from that in verctors , hash and all we need to pass with reference with &symbol



Time Complexicity:(dependent on system)
  O(1) constant time complexity - it does not depend on size of input. It is best
  Rate at which the time taken increase with respect to input size 

  big-Oh Notation => o(==time taken==)
  TC to be computed, worst case scenerio
  avoid constants
  avoid lower values 
  

  big -Oh(O) => worst case [upper bound]
  theta 0 => Average Complexity 
  Omega  => [lower bound]
Space Complexcity: 
  Auxaliary space (space that you take to solve the problem ) + Input Space (space that you take to store the input)

  int a , int b (cin) => input space 
  int c = a + b => auxiliary space (c);