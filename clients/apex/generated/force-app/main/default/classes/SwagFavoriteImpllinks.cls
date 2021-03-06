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
 * SwagFavoriteImpllinks
 */
public class SwagFavoriteImpllinks implements Swagger.MappedProperties {
    /**
     * Get self
     * @return self
     */
    public SwagLink self { get; set; }

    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagFavoriteImpllinks getExample() {
        SwagFavoriteImpllinks favoriteImpllinks = new SwagFavoriteImpllinks();
        favoriteImpllinks.self = SwagLink.getExample();
        favoriteImpllinks.propertyClass = 'aeiou';
        return favoriteImpllinks;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagFavoriteImpllinks) {
            SwagFavoriteImpllinks favoriteImpllinks = (SwagFavoriteImpllinks) obj;
            return this.self == favoriteImpllinks.self
                && this.propertyClass == favoriteImpllinks.propertyClass;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (self == null ? 0 : System.hashCode(self));
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        return hashCode;
    }
}

