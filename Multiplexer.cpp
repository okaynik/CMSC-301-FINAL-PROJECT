#include "Multiplexer.h"

/**
 * Default / typical use constructor
 */
Multiplexer::Multiplexer()
{
}

/**
 * Set the control line for the multiplexer. 0 = choice1, 1 = choice2
 * 
 * @param control int control line value
 */
void Multiplexer::setControl(int control)
{
    // TODO: input validation
    this->control = control;
}

/**
 * Sets both choices
 * 
 * @param choice1 string value (usually binary) for choice 1
 * @param choice2 string value (usually binary) for choice 2
 */
void Multiplexer::setChoices(string choice1, string choice2)
{
    // TODO: input validation
    this->choice1 = choice1;
    this->choice2 = choice2;
}

/**
 * Decide and return decision
 */
string Multiplexer::get()
{

    // Make decision and set output
    this->decide();

    return this->output;
}

/**
 * Choice choice1 or choice2 based on control line
 */
void Multiplexer::decide()
{

    // Set output according to control
    if (control == 0)
    {
        this->output = this->choice1;
    }

    if (control == 1)
    {
        this->output = this->choice2;
    }
}