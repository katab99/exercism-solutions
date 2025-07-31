public static class PhoneNumber
{
    public static (bool IsNewYork, bool IsFake, string LocalNumber) Analyze(string phoneNumber)
    {
        string[] numberList = phoneNumber.Split('-');
        bool isNewYork = false;
        bool isFake = false;
        
        if(numberList[0] == "212"){
            isNewYork = true;
        }

        if(numberList[1] == "555"){
            isFake = true;
        }

        return (IsNewYork : isNewYork, IsFake : isFake, LocalNumber : numberList[2]);
    }

    public static bool IsFake((bool IsNewYork, bool IsFake, string LocalNumber) phoneNumberInfo)
    {
        return phoneNumberInfo.IsFake;
    }
}
