
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.Month;
import java.time.format.DateTimeFormatter;
import java.util.Calendar;
import java.util.Date;

// time date starting from January 1, 1970, 00:00:00 GMT
class LearnDateTimeCalender {
    public static void main(String[] args) throws ParseException {
        // Date
        Date d1 = new Date();
        System.out.println(d1);
        Date d2 = new Date(4393243);
        System.out.println(d2);
        Date d3 = new Date(2010, 1, 3);
        System.out.println(d3);
        System.out.println(d1.after(d2));
        System.out.println(d1.before(d2));
        System.out.println(d1.compareTo(d2));
        d1.setTime(323423);
        System.out.println(d1);

        // Calender
        Calendar c = Calendar.getInstance();
        System.out.println("Day of week : " + c.get(Calendar.DAY_OF_WEEK));
        System.out.println("Day of year : " + c.get(Calendar.DAY_OF_YEAR));
        System.out.println("Week in Month : " + c.get(Calendar.WEEK_OF_MONTH));
        System.out.println("Week in Year : " + c.get(Calendar.WEEK_OF_YEAR));
        System.out.println("Day of Week in Month : " + c.get(Calendar.DAY_OF_WEEK_IN_MONTH));
        System.out.println("Hour : " + c.get(Calendar.HOUR));
        System.out.println("Minute : " + c.get(Calendar.MINUTE));
        System.out.println("Second : " + c.get(Calendar.SECOND));
        System.out.println("AM or PM : " + c.get(Calendar.AM_PM));
        System.out.println("Hour (24-hour clock) : " + c.get(Calendar.HOUR_OF_DAY));
        SimpleDateFormat ft = new SimpleDateFormat("dd-MM-yyyy");
        String str = ft.format(new Date());
        System.out.println(str);
        str = "02/18/1995";
        ft = new SimpleDateFormat("MM/dd/yyyy");
        Date d = ft.parse(str);

        // new date and time
        LocalDate date = LocalDate.now();
        System.out.println("the current date is " + date);

        LocalTime time = LocalTime.now();
        System.out.println("the current time is " + time);

        LocalDateTime current = LocalDateTime.now();
        System.out.println("current date and time : " + current);

        DateTimeFormatter format = DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm:ss");
        String formatedDateTime = current.format(format);

        Month month = current.getMonth();
        int day = current.getDayOfMonth();
        int seconds = current.getSecond();
        System.out.println("Month : " + month + " day : " + day + " seconds : " + seconds);
    }
}
