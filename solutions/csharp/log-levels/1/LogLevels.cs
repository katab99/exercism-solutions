static class LogLine
{
    public static string Message(string logLine)
    {
        return logLine.Split(':')[1].Trim();
    }

    public static string LogLevel(string logLine)
    {
        string logLevel = logLine.Split(':')[0].Trim();
        logLevel = logLevel.Substring(1, logLevel.Length - 2);
        return logLevel.ToLower();
        
    }

    public static string Reformat(string logLine)
    {
        return $"{Message(logLine)} ({LogLevel(logLine)})";
    }
}
