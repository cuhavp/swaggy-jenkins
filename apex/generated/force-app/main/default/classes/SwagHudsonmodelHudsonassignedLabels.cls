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
 * SwagHudsonmodelHudsonassignedLabels
 */
public class SwagHudsonmodelHudsonassignedLabels implements Swagger.MappedProperties {
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

    public static SwagHudsonmodelHudsonassignedLabels getExample() {
        SwagHudsonmodelHudsonassignedLabels hudsonmodelHudsonassignedLabels = new SwagHudsonmodelHudsonassignedLabels();
        hudsonmodelHudsonassignedLabels.propertyClass = 'aeiou';
        return hudsonmodelHudsonassignedLabels;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagHudsonmodelHudsonassignedLabels) {
            SwagHudsonmodelHudsonassignedLabels hudsonmodelHudsonassignedLabels = (SwagHudsonmodelHudsonassignedLabels) obj;
            return this.propertyClass == hudsonmodelHudsonassignedLabels.propertyClass;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        return hashCode;
    }
}
