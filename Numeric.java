import java.io.*;
import java.net.*;
public class Numeric
{
public static void main(String[] args)
{
String s="12345.15";
boolean numeric = true;
try
{
Double num=Double.parseDoble(string);
}
catch(NumberFormatException e)
{
numeric=false;
}
if(numeric)
System.out.println(s+"is a number");
else
System.out.println(s+"is a not number");
}
}
