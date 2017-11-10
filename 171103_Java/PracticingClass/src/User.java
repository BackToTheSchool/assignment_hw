import java.util.ArrayList;
import java.util.List;

public class User {
    String name, sex;
    int yearOfBirth;
    List<Account> accList = new ArrayList<>();

    public User(String name, String sex, int yearOfBirth){
        this.name = name;
        this.sex = sex;
        this.yearOfBirth = yearOfBirth;
    }

    public int getYearOfBirth() {
        return yearOfBirth;
    }

    public List<Account> getAccList() {
        return accList;
    }

    public String getName() {
        return name;
    }

    public String getSex() {
        return sex;
    }

    public void addAccount(Account newAcc){
        accList.add(newAcc);
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

    public void setYearOfBirth(int yearOfBirth) {
        this.yearOfBirth = yearOfBirth;
    }
}
