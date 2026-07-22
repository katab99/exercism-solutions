public static class Languages
{
    public static List<string> NewList() => new List<string>();

    public static List<string> GetExistingLanguages() => ["C#", "Clojure", "Elm"];

    public static List<string> AddLanguage(List<string> languages, string language) 
    { 
        languages.Add(language);
        return languages;
    }

    public static int CountLanguages(List<string> languages) => languages.Count;

    public static bool HasLanguage(List<string> languages, string language) => languages.Contains(language);

    public static List<string> ReverseList(List<string> languages)
    {
        languages.Reverse();
        return languages;
    }
    
    public static bool IsExciting(List<string> languages)
    {
        if (CountLanguages(languages) > 0)
        { 
            return languages[0] == "C#" || (languages[1] == "C#" && CountLanguages(languages) >= 2 && CountLanguages(languages) <= 3);
        }

        return false;
    }

    public static List<string> RemoveLanguage(List<string> languages, string language)
    {
        languages.Remove(language);
        return languages;
    }

    public static bool IsUnique(List<string> languages)
    {
        var uniqueLangs = new List<string>();

        for (int i = 0; i < CountLanguages(languages); i++)
        {
            if (HasLanguage(uniqueLangs, languages[i]))
            {
                return false;
            }
            AddLanguage(uniqueLangs, languages[i]);
        }
        
        return true;
    }
}
