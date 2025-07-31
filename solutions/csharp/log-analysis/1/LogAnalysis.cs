using Xunit.v3;

public static class LogAnalysis 
{
    public static string SubstringAfter(this string str, string delimiter) => str.Split(delimiter)[1];

    
    public static string SubstringBetween(this string str, string start, string end) => str.Split(new string[] {start, end}, StringSplitOptions.None)[1];
    
    public static string Message(this string str) => SubstringAfter(str, ":").Trim();
    
    public static string LogLevel(this string str) => SubstringBetween(str, "[", "]");
   
}