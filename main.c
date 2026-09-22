#include<stdio.h>
#include<conio.h>

int main()
{
    int q;
    printf("Welcome to QuizUp");
    printf("\n\n");
    printf("what type of quiz do you want \n");
    printf("1) COMPUTER SCIENCE 2)MATH 3) PHYSICS 4) GENERAL SCIENCE");
    scanf("%d", &q);

    if (q==1)
   {
    int score = 0; // Variable to track the score
    int answer;    // Variable to store user input

    printf("Welcome to the Programming Quiz!\n");
    printf("Answer each question by entering the corresponding number (1-4).\n\n");

    // Question 1
    printf("1. What is the correct syntax to display output in Python?\n");
    printf("1) print \"Hello\"\n");
    printf("2) echo \"Hello\"\n");
    printf("3) cout << \"Hello\";\n");
    printf("4) print(\"Hello\")\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 4) score++;

    // Question 2
    printf("\n2. Which of the following is a valid variable name in most programming languages?\n");
    printf("1) 123variable\n");
    printf("2) my-variable\n");
    printf("3) myVariable\n");
    printf("4) my variable\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Question 3
    printf("\n3. What is the output of the following Python code?\n");
    printf("x = 10, y = 3.5\n");
    printf("print(type(x + y))\n");
    printf("1) <class 'int'>\n");
    printf("2) <class 'float'>\n");
    printf("3) <class 'str'>\n");
    printf("4) <class 'bool'>\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 4
    printf("\n4. What will be the output of the following code snippet in C++?\n");
    printf("int x = 5;\nif (x > 3) { cout << \"Yes\"; } else { cout << \"No\"; }\n");
    printf("1) Yes\n");
    printf("2) No\n");
    printf("3) Error\n");
    printf("4) None\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 5
    printf("\n5. How many times will the following Python loop execute?\n");
    printf("for i in range(0, 5):\n    print(i)\n");
    printf("1) 4\n");
    printf("2) 5\n");
    printf("3) 6\n");
    printf("4) Infinite\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 6
    printf("\n6. What is the purpose of a function in programming?\n");
    printf("1) To store data persistently.\n");
    printf("2) To define reusable blocks of code.\n");
    printf("3) To iterate over a collection.\n");
    printf("4) To display output on the screen.\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 7
    printf("\n7. What will the following Python code output?\n");
    printf("text = \"programming\"\nprint(text[0:4])\n");
    printf("1) pro\n");
    printf("2) prog\n");
    printf("3) programming\n");
    printf("4) gram\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 8
    printf("\n8. Which of the following best describes an array?\n");
    printf("1) A data structure that stores multiple values of different data types.\n");
    printf("2) A collection of key-value pairs.\n");
    printf("3) A data structure that stores multiple values of the same data type.\n");
    printf("4) A single variable that holds a single value.\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Question 9
    printf("\n9. In OOP, what does \"inheritance\" mean?\n");
    printf("1) A function calling itself.\n");
    printf("2) A class acquiring properties and behaviors of another class.\n");
    printf("3) Writing multiple methods with the same name.\n");
    printf("4) Overriding a method in a child class.\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 10
    printf("\n10. What does debugging mean in programming?\n");
    printf("1) Writing the program code.\n");
    printf("2) Finding and fixing errors in the program.\n");
    printf("3) Optimizing the program for speed.\n");
    printf("4) Converting source code into machine code.\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Display the final score
    printf("\nQuiz Completed!\n");
    printf("Your final score is: %d/10\n", score);

    if (score == 10) {
        printf("Excellent! You got a perfect score.\n");
    } else if (score >= 7) {
        printf("Great job! Keep it up.\n");
    } else if (score >= 4) {
        printf("Not bad, but you can do better.\n");
    } else {
        printf("Keep practicing to improve your programming knowledge.\n");
     }
   }


   else if (q==2)
    {
    int score = 0; // Variable to track the score
    int answer;    // Variable to store user input

    printf("Welcome to the Math Quiz!\n");
    printf("Answer each question by entering the corresponding number (1-4).\n\n");

    // Question 1
    printf("1. What is the value of 5 + 3 * 2?\n");
    printf("1) 16\n");
    printf("2) 11\n");
    printf("3) 13\n");
    printf("4) 10\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 2
    printf("\n2. Simplify: (8/4) + (6*2)\n");
    printf("1) 14\n");
    printf("2) 16\n");
    printf("3) 12\n");
    printf("4) 18\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 3
    printf("\n3. What is the square root of 144?\n");
    printf("1) 10\n");
    printf("2) 11\n");
    printf("3) 12\n");
    printf("4) 13\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Question 4
    printf("\n4. Solve for x: 2x + 5 = 15\n");
    printf("1) 5\n");
    printf("2) 10\n");
    printf("3) 7\n");
    printf("4) 6\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 5
    printf("\n5. What is 15%%4?\n");
    printf("1) 3\n");
    printf("2) 2\n");
    printf("3) 1\n");
    printf("4) 4\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 6
    printf("\n6. If a circle has a radius of 7, what is its area? (Use pi = 3.14)\n");
    printf("1) 154\n");
    printf("2) 150\n");
    printf("3) 148\n");
    printf("4) 156\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 7
    printf("\n7. What is the value of 2^5 (2 raised to the power of 5)?\n");
    printf("1) 16\n");
    printf("2) 32\n");
    printf("3) 64\n");
    printf("4) 128\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 8
    printf("\n8. What is the value of | -7 | (absolute value of -7)?\n");
    printf("1) -7\n");
    printf("2) 7\n");
    printf("3) 0\n");
    printf("4) None of the above\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 9
    printf("\n9. Simplify: (9 - 3) * (8 / 2)\n");
    printf("1) 20\n");
    printf("2) 24\n");
    printf("3) 30\n");
    printf("4) 18\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Question 10
    printf("\n10. What is the perimeter of a rectangle with length 8 and width 6?\n");
    printf("1) 28\n");
    printf("2) 24\n");
    printf("3) 32\n");
    printf("4) 36\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Display the final score
    printf("\nQuiz Completed!\n");
    printf("Your final score is: %d/10\n", score);

    if (score == 10) {
        printf("Excellent! You got a perfect score.\n");
    } else if (score >= 7) {
        printf("Great job! Keep it up.\n");
    } else if (score >= 4) {
        printf("Not bad, but you can do better.\n");
    } else {
        printf("Keep practicing to improve your math skills.\n");
      }
    }


    else if (q==3)
        {
    int score = 0; // Variable to track the score
    int answer;    // Variable to store user input

    printf("Welcome to the Physics Quiz!\n");
    printf("Answer each question by entering the corresponding number (1-4).\n\n");

    // Question 1
    printf("1. What is the speed of light in a vacuum?\n");
    printf("1) 3 � 10^8 m/s\n");
    printf("2) 3 � 10^6 m/s\n");
    printf("3) 3 � 10^5 m/s\n");
    printf("4) 3 � 10^9 m/s\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 2
    printf("\n2. What is Newton's Second Law of Motion?\n");
    printf("1) F = ma\n");
    printf("2) F = mv\n");
    printf("3) F = mg\n");
    printf("4) F = m/a\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 3
    printf("\n3. What is the SI unit of power?\n");
    printf("1) Joule\n");
    printf("2) Watt\n");
    printf("3) Newton\n");
    printf("4) Pascal\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 4
    printf("\n4. Which of the following is a scalar quantity?\n");
    printf("1) Velocity\n");
    printf("2) Force\n");
    printf("3) Acceleration\n");
    printf("4) Temperature\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 4) score++;

    // Question 5
    printf("\n5. What is the formula for kinetic energy?\n");
    printf("1) KE = mv\n");
    printf("2) KE = 1/2 mv^2\n");
    printf("3) KE = mg\n");
    printf("4) KE = mgh\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 6
    printf("\n6. What is the value of acceleration due to gravity on Earth?\n");
    printf("1) 9.8 m/s^2\n");
    printf("2) 10 m/s^2\n");
    printf("3) 9.8 km/s^2\n");
    printf("4) 10 km/s^2\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 7
    printf("\n7. What is the work done if a force of 10 N moves an object by 5 meters?\n");
    printf("1) 15 J\n");
    printf("2) 50 J\n");
    printf("3) 5 J\n");
    printf("4) 10 J\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 8
    printf("\n8. What does Ohm's Law state?\n");
    printf("1) V = IR\n");
    printf("2) P = IV\n");
    printf("3) E = mc^2\n");
    printf("4) F = ma\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 9
    printf("\n9. What is the frequency of a wave if its period is 0.01 seconds?\n");
    printf("1) 100 Hz\n");
    printf("2) 10 Hz\n");
    printf("3) 50 Hz\n");
    printf("4) 0.01 Hz\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    // Question 10
    printf("\n10. Which of the following phenomena is responsible for the blue color of the sky?\n");
    printf("1) Diffraction\n");
    printf("2) Reflection\n");
    printf("3) Scattering\n");
    printf("4) Refraction\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Display the final score
    printf("\nQuiz Completed!\n");
    printf("Your final score is: %d/10\n", score);

    if (score == 10) {
        printf("Excellent! You got a perfect score.\n");
    } else if (score >= 7) {
        printf("Great job! Keep it up.\n");
    } else if (score >= 4) {
        printf("Not bad, but you can do better.\n");
    } else {
        printf("Keep practicing to improve your physics knowledge.\n");
      }
    }



    else if (q==4){
    int score = 0; // Variable to track the score
    int answer;    // Variable to store user input

    printf("Welcome to the General Science Quiz!\n");
    printf("Answer each question by entering the corresponding number (1-4).\n\n");

    // Question 1
    printf("1. What is the chemical symbol for water?\n");
    printf("1) H\n");
    printf("2) H2O\n");
    printf("3) O2\n");
    printf("4) HO\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 2
    printf("\n2. Which planet is known as the Red Planet?\n");
    printf("1) Earth\n");
    printf("2) Mars\n");
    printf("3) Jupiter\n");
    printf("4) Venus\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 3
    printf("\n3. What is the powerhouse of the cell?\n");
    printf("1) Nucleus\n");
    printf("2) Mitochondria\n");
    printf("3) Ribosome\n");
    printf("4) Endoplasmic Reticulum\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 4
    printf("\n4. What is the hardest natural substance on Earth?\n");
    printf("1) Gold\n");
    printf("2) Iron\n");
    printf("3) Diamond\n");
    printf("4) Platinum\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Question 5
    printf("\n5. What gas do plants primarily absorb for photosynthesis?\n");
    printf("1) Oxygen\n");
    printf("2) Nitrogen\n");
    printf("3) Carbon Dioxide\n");
    printf("4) Methane\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Question 6
    printf("\n6. What is the main component of the Sun?\n");
    printf("1) Oxygen\n");
    printf("2) Carbon\n");
    printf("3) Hydrogen\n");
    printf("4) Helium\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Question 7
    printf("\n7. What type of energy is produced by moving objects?\n");
    printf("1) Potential Energy\n");
    printf("2) Kinetic Energy\n");
    printf("3) Thermal Energy\n");
    printf("4) Chemical Energy\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 8
    printf("\n8. Which organ in the human body is primarily responsible for filtering blood?\n");
    printf("1) Heart\n");
    printf("2) Liver\n");
    printf("3) Kidney\n");
    printf("4) Lungs\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Question 9
    printf("\n9. What causes tides on Earth?\n");
    printf("1) Sun's Gravity\n");
    printf("2) Moon's Gravity\n");
    printf("3) Earth's Rotation\n");
    printf("4) Wind Patterns\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    // Question 10
    printf("\n10. What is the most abundant gas in Earth's atmosphere?\n");
    printf("1) Oxygen\n");
    printf("2) Carbon Dioxide\n");
    printf("3) Nitrogen\n");
    printf("4) Hydrogen\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    // Display the final score
    printf("\nQuiz Completed!\n");
    printf("Your final score is: %d/10\n", score);

    if (score == 10) {
        printf("Excellent! You got a perfect score.\n");
    } else if (score >= 7) {
        printf("Great job! Keep it up.\n");
    } else if (score >= 4) {
        printf("Not bad, but you can do better.\n");
    } else {
        printf("Keep practicing to improve your general science knowledge.\n");
     }
    }

    return 0;
}
