


import java.io.BufferedReader;
import java.io.InputStreamReader;


class TestClass {
    public static void main(String args[] ) throws Exception {
      
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        int T = Integer.parseInt(line);
        double p,ans,time;
        for(int i=0;i<T;i++)
        {
        	 String[] s=br.readLine().split(" ");
        	 time=Integer.parseInt(s[1]);
        	 p=Float.parseFloat(s[0]);
        	 if(p!=0)
        	 ans= 1-Math.pow(1-p,time/1440);
        	 else
        	 ans=0.0;
        	 System.out.format("%.4f%n", ans);
        	 
        }
       
       

   
    }
}

