/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/**
 * SwagStringParameterValue
 */
public class SwagStringParameterValue implements Swagger.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get name
     * @return name
     */
    public String name { get; set; }

    /**
     * Get value
     * @return value
     */
    public String value { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagStringParameterValue getExample() {
        SwagStringParameterValue stringParameterValue = new SwagStringParameterValue();
        stringParameterValue.propertyClass = 'aeiou';
        stringParameterValue.name = 'aeiou';
        stringParameterValue.value = 'aeiou';
        return stringParameterValue;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagStringParameterValue) {
            SwagStringParameterValue stringParameterValue = (SwagStringParameterValue) obj;
            return this.propertyClass == stringParameterValue.propertyClass
                && this.name == stringParameterValue.name
                && this.value == stringParameterValue.value;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (name == null ? 0 : System.hashCode(name));
        hashCode = (17 * hashCode) + (value == null ? 0 : System.hashCode(value));
        return hashCode;
    }
}

