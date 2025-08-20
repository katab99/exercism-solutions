using System.Runtime.CompilerServices;

class RemoteControlCar
{
    private int distance;
    private int battery = 100;   
    public static RemoteControlCar Buy() => new RemoteControlCar(); 

    public string DistanceDisplay()
    {
        return $"Driven {this.distance} meters";
    }

    public string BatteryDisplay()
    {
        if (this.battery == 0)
        {
            return "Battery empty";       
        }

        return $"Battery at {this.battery}%";
    }

    public void Drive()
    {
        if (this.battery > 0)
        {
            this.distance += 20;
            this.battery -= 1;
        }
    }
}
