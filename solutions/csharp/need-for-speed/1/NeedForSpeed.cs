using System.Runtime.CompilerServices;

class RemoteControlCar
{
    private int battery = 100;
    private int distanceDriven = 0;
    private int speed;
    private int batteryDrain;
    
    
    public RemoteControlCar(int speed, int batteryDrain)
    {
        this.speed = speed;
        this.batteryDrain = batteryDrain;
    }

    public bool BatteryDrained() => battery - batteryDrain < 0;
    

    public int DistanceDriven() => distanceDriven;
    
    public void Drive()
    {
        if (BatteryDrained()) return;
        this.battery -= batteryDrain;
        this.distanceDriven += speed;
    }

    public static RemoteControlCar Nitro() => new RemoteControlCar(50, 4);
    
}

class RaceTrack
{
    private int distance;

    public RaceTrack(int distance)
    {
        this.distance = distance;
    }

    public bool TryFinishTrack(RemoteControlCar car)
    {
        if(car.DistanceDriven() >= distance) return true;
        if(car.BatteryDrained()) return false;
        
        car.Drive();
        
        return TryFinishTrack(car);
    }
}
