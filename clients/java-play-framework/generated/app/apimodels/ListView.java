package apimodels;

import java.util.Objects;
import apimodels.FreeStyleProject;
import java.util.ArrayList;
import java.util.List;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import javax.validation.constraints.*;
/**
 * ListView
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaPlayFrameworkCodegen", date = "2017-08-03T23:33:33.060Z")

public class ListView   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("description")
  private String description = null;

  @JsonProperty("jobs")
  private List<FreeStyleProject> jobs = null;

  @JsonProperty("name")
  private String name = null;

  @JsonProperty("url")
  private String url = null;

  public ListView propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
    public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public ListView description(String description) {
    this.description = description;
    return this;
  }

   /**
   * Get description
   * @return description
  **/
    public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public ListView jobs(List<FreeStyleProject> jobs) {
    this.jobs = jobs;
    return this;
  }

  public ListView addJobsItem(FreeStyleProject jobsItem) {
    if (this.jobs == null) {
      this.jobs = new ArrayList<FreeStyleProject>();
    }
    this.jobs.add(jobsItem);
    return this;
  }

   /**
   * Get jobs
   * @return jobs
  **/
  @Valid
  public List<FreeStyleProject> getJobs() {
    return jobs;
  }

  public void setJobs(List<FreeStyleProject> jobs) {
    this.jobs = jobs;
  }

  public ListView name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
    public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public ListView url(String url) {
    this.url = url;
    return this;
  }

   /**
   * Get url
   * @return url
  **/
    public String getUrl() {
    return url;
  }

  public void setUrl(String url) {
    this.url = url;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ListView listView = (ListView) o;
    return Objects.equals(this.propertyClass, listView.propertyClass) &&
        Objects.equals(this.description, listView.description) &&
        Objects.equals(this.jobs, listView.jobs) &&
        Objects.equals(this.name, listView.name) &&
        Objects.equals(this.url, listView.url);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, description, jobs, name, url);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ListView {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    jobs: ").append(toIndentedString(jobs)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

  public void validate() {
    ValidatorFactory factory = Validation.buildDefaultValidatorFactory();
    Validator validator = factory.getValidator();
    Set<ConstraintViolation<ListView>> constraintViolations = validator.validate(this);
    if (constraintViolations.size() > 0) {
      StringBuilder errors = new StringBuilder();
      for (ConstraintViolation<ListView> contraintes : constraintViolations) {
        errors.append(String.format("%s.%s %s\n",
            contraintes.getRootBeanClass().getSimpleName(),
            contraintes.getPropertyPath(),
            contraintes.getMessage()));
      }
      throw new RuntimeException("Bean validation : " + errors);
    }
  }
}

