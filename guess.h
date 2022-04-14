#include <iostream>
/* Developer: Justin T. Alexander
Class: CS1233-01
Project: Snowman
This class is used in collaboration with a .cpp to run the Snowman game*/
class GuessingGame
{
    int m_mistakes;
    std::string m_answer, m_revealed;

    public:
    GuessingGame(std::string answer)
    {
        m_answer = answer;
        m_revealed = "";
        m_mistakes = 0;
        for (int loop = 0; answer[loop] != '\0'; loop++)
        {
            if (answer[loop] == ' ')
                m_revealed += " ";
            else
                m_revealed += "_";
        }
        //set m_revealed to number of blanks from answer
    }

    bool isComplete()
    {
        for (int loop = 0; m_answer[loop] != '\0'; loop++)
        {
            if (std::toupper(m_revealed[loop]) != std::toupper(m_answer[loop]))   //includes " "?
            {
                return false;
            }
        }
        return true;
    }
    std::string getRevealed(  )
    {
        return m_revealed;
    }
    void makeGuess(char letter)
    {
        int correctCount = 0;
        for (int loop = 0; m_answer[loop] != '\0'; loop++)
        {
            if (std::toupper(letter) == std::toupper(m_answer[loop]))
            {
                m_revealed[loop] = (m_answer[loop]);
                ++correctCount;
            }
        }
        if (correctCount < 1)
        {
            ++m_mistakes;
        }
        //for char in answer
        //if answer = letter, revealed = letter
    }
    int getMistakes()
    {
        return m_mistakes;
    }
    std::string getAnswer( )
    {
        return m_answer;
    }
};