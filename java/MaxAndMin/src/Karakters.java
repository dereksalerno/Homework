import java.io.*;
   public class Karakters{
      public static void main(String[] args) throws IOException{
      FileWriter in = new FileWriter("karakters.txt");
      PrintWriter outfile = new PrintWriter(in);
         char x = 'A';
      
         for(int i = 0; i < 300; i++){
            System.out.println((i + 1) + " " + (char)(x + i));
            outfile.println((char)(x + i));
         }
      outfile.close();
      }
   
   }