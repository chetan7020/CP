public class Recur {
    public static void main(String[] args) {
        int sum = sumTillN(5, 0);
        System.out.println(sum);
    }

    static int sumTillN(int n, int sum){
        if (n==0) return sum;
        sum+=n;
        n--;
        return sumTillN(n , sum);
    }
}
