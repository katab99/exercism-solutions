static class Badge
{
    public static string Print(int? id, string name, string? department)
    {   
        string idPart = id.HasValue ? $"[{id}] - " : "";
        string departmentPart = department?.ToUpper() ?? "OWNER";
        return $"{idPart}{name} - {departmentPart}";
    }
}
