
package Final;
public class DataModel {
    private String name;
    private String categories;
    private String quantity;
    private String price;

    public DataModel() {
    }
        

    public DataModel(String name, String categories, String quantity, String price) {
        this.name = name;
        this.categories = categories;
        this.quantity = quantity;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getCategories() {
        return categories;
    }

    public void setCategories(String categories) {
        this.categories = categories;
    }

    public String getQuantity() {
        return quantity;
    }

    public void setQuantity(String quantity) {
        this.quantity = quantity;
    }

    public String getPrice() {
        return price;
    }

    public void setPrice(String price) {
        this.price = price;
    }

    @Override
    public String toString() {
        return  name +" / " + categories+ " / " + quantity +" / " + price;
    }
    
    
    
}
