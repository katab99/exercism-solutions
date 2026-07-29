public class Lasagna {
    public int expectedMinutesInOven(){
        return 40;
    }

    public int remainingMinutesInOven(int minsInOven){
        return expectedMinutesInOven() - minsInOven;
    }

    public int preparationTimeInMinutes(int layers){
        return layers * 2;
    }

    public int totalTimeInMinutes(int layers, int minsInOven){
        return preparationTimeInMinutes(layers) + minsInOven;
    }
}
