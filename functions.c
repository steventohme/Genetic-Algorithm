// Include everything necessary here 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double generate_random(double min, double max)
{
    // implement a function to return a value between min and max
    int BtweenMinMax = rand() / (max + min);
    return BtweenMinMax;
}

unsigned int generate_int()
{
    // implement the function to return a random integer value
    int randomInt = rand();
    return randomInt;
}

// Function to initialize a random population
void generate_population(int POPULATION_SIZE, int NUM_VARIABLES, double population[POPULATION_SIZE][NUM_VARIABLES], double Lbound[NUM_VARIABLES], double Ubound[NUM_VARIABLES])
{
    // randomly initialize for all values in "population[i][j]""
    for (int i = 0; i < POPULATION_SIZE; i++)
    {
        for (int j = 0; j < NUM_VARIABLES; j++)
        {
            double randomFloat = (double)rand() / (double)RAND_MAX;
            // RAND_MAX is the maximum value returned by rand() making randomFloat between 0 and 1
            double randomFloatBetween = Lbound[j] + randomFloat * (Ubound[j] - Lbound[j]);
            population[i][j] = randomFloatBetween;
        }
    }
    
}

// Function to compute the objective function for each member of the population
void compute_objective_function(int POPULATION_SIZE, int NUM_VARIABLES, double population[POPULATION_SIZE][NUM_VARIABLES], double fitness[POPULATION_SIZE])
{

    /* compute "fitness[i]"" for each set of decision variables (individual) or each row in "population"
    by calling "Objective_function" */
    printf("hi");
}

void crossover(int POPULATION_SIZE, int NUM_VARIABLES, double fitness[POPULATION_SIZE], double new_population[POPULATION_SIZE][NUM_VARIABLES], double population[POPULATION_SIZE][NUM_VARIABLES], double crossover_rate)
{
    /* Implement the logic of crossover function here based on "fitness_probs" or each set
    of decision variables (individual) or each row in "population".
    And save the new population in "new_population"*/
    printf("hi");
}

void mutate(int POPULATION_SIZE, int NUM_VARIABLES, double new_population[POPULATION_SIZE][NUM_VARIABLES], double population[POPULATION_SIZE][NUM_VARIABLES], double Lbound[NUM_VARIABLES], double Ubound[NUM_VARIABLES], double mutate_rate)
{
    /*Implement the logic of mutation on "new_population" and then copy everything into "population"*/
    printf("hi");
}