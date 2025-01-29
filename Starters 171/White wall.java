import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		
		
		Scanner sc = new Scanner(System.in);
		
		int e = sc.nextInt();
		
		while(e>0){
		    
		    int n = sc.nextInt();
		    
		    String s = sc.next();
		    
            String arr[] = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
		    
		    int res = n;
		    
		    for(int i=0;i<6;i++){
		        
		        String color = arr[i];
		        
		        int rem = n%3;
		        
		        int till = n-rem;
		        
		        int cnt = 0;
		        
		        for(int j=0;j<n-3;j++){
		            
		            char a = s.charAt(j);
		            char b = s.charAt(j+1);
		            char c = s.charAt(j+2);
		            
		            if(color.charAt(0)!=a){
		                cnt++;
		            }
		             if(color.charAt(1)!=b){
		                cnt++;
		            }
		             if(color.charAt(2)!=c){
		                cnt++;
		            }
		            
		            j+=2;
		            
		        }
		        
		        if(rem==1){
		            
		            if(color.charAt(0)!=s.charAt(n-1)){
		                cnt++;
		            }
		        }else if(rem==2){
		            
		              if(color.charAt(0)!=s.charAt(n-2)){
		                cnt++;
		            }
		              if(color.charAt(1)!=s.charAt(n-1)){
		                cnt++;
		            }
		            
		        }else{
		            
		            
		              if(color.charAt(0)!=s.charAt(n-3)){
		                cnt++;
		            }
		              if(color.charAt(1)!=s.charAt(n-2)){
		                cnt++;
		            }
		             if(color.charAt(2)!=s.charAt(n-1)){
		                cnt++;
		            }
		            
		        }
		        
		        if(cnt<res){
		            res = cnt;
		        }
		        
		    }
		    
		    System.out.println(res);
		    e--;
		}
		
		

	}
}
