class BirdCount
{
    private int[] birdsPerDay;

    public BirdCount(int[] birdsPerDay)
    {
        this.birdsPerDay = birdsPerDay;
    }

    public static int[] LastWeek()
        => new[] { 0, 2, 5, 3, 7, 8, 4};

    public int Today() => birdsPerDay[6];

    public void IncrementTodaysCount() => birdsPerDay[6]++;

    public bool HasDayWithoutBirds() => this.birdsPerDay.Any(birdCount => birdCount == 0);
    

    public int CountForFirstDays(int numberOfDays)
    {
        int totalBirds = 0;
        
        for (int i = 0; i < numberOfDays; i++)
        {
            totalBirds += this.birdsPerDay[i];
        }
        
        return totalBirds;
    }

    public int BusyDays() => this.birdsPerDay.Count(birdCount => birdCount >= 5);
    
}
