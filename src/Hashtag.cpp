

#include "Hashtag.h"


namespace Hashtag
{
std::string hashTagizer(std::string sourceString)
{
    int sourceLength = sourceString.size();
    char *source = (char *)malloc(sizeof(char) * sourceLength);
    strcpy(source, sourceString.data());
    char *res = (char *)malloc(sizeof(char) * sourceLength);

    int i = 0;
    int j = 1;
    res[0] = '#';

    removePunctuation(source, sourceLength);

    //First letter (different case just for now)
    if (isLowerCase(source[0]))
    {
        res[1] = capitalize(source[0]);
        j++;
        i++;
    }
    //Complete word
    while (i < sourceLength)
    {
        //Everything different from spaces is copied
        //(there are only letters and numbers thx to the removePunctuation above)
        if (source[i] != ' ')
        {
            res[j++] = source[i];
        }
        else
        {
            //If after a space, there's a letter, capitalize it and copy it
            if (isLowerCase(source[i + 1]))
            {
                res[j++] = capitalize(source[i + 1]);
                i++; // Skip one cycle, otherwise the letter would be copied twice, once capitalized and once not
            }
        }
        i++;
    }
    res[j] = '\0';

    return std::string(res);
}
}; // namespace Hashtag