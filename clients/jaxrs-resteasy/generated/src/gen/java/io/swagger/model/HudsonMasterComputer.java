package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.HudsonMasterComputerexecutors;
import io.swagger.model.HudsonMasterComputermonitorData;
import io.swagger.model.Label1;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaResteasyServerCodegen", date = "2017-08-03T23:34:55.006Z")
public class HudsonMasterComputer   {
  
  private String propertyClass = null;
  private String displayName = null;
  private List<HudsonMasterComputerexecutors> executors = new ArrayList<HudsonMasterComputerexecutors>();
  private String icon = null;
  private String iconClassName = null;
  private Boolean idle = null;
  private Boolean jnlpAgent = null;
  private Boolean launchSupported = null;
  private Label1 loadStatistics = null;
  private Boolean manualLaunchAllowed = null;
  private HudsonMasterComputermonitorData monitorData = null;
  private Integer numExecutors = null;
  private Boolean offline = null;
  private String offlineCause = null;
  private String offlineCauseReason = null;
  private Boolean temporarilyOffline = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("_class")
  public String getPropertyClass() {
    return propertyClass;
  }
  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("displayName")
  public String getDisplayName() {
    return displayName;
  }
  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("executors")
  public List<HudsonMasterComputerexecutors> getExecutors() {
    return executors;
  }
  public void setExecutors(List<HudsonMasterComputerexecutors> executors) {
    this.executors = executors;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("iconClassName")
  public String getIconClassName() {
    return iconClassName;
  }
  public void setIconClassName(String iconClassName) {
    this.iconClassName = iconClassName;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("idle")
  public Boolean isIdle() {
    return idle;
  }
  public void setIdle(Boolean idle) {
    this.idle = idle;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("jnlpAgent")
  public Boolean isJnlpAgent() {
    return jnlpAgent;
  }
  public void setJnlpAgent(Boolean jnlpAgent) {
    this.jnlpAgent = jnlpAgent;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("launchSupported")
  public Boolean isLaunchSupported() {
    return launchSupported;
  }
  public void setLaunchSupported(Boolean launchSupported) {
    this.launchSupported = launchSupported;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("loadStatistics")
  public Label1 getLoadStatistics() {
    return loadStatistics;
  }
  public void setLoadStatistics(Label1 loadStatistics) {
    this.loadStatistics = loadStatistics;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("manualLaunchAllowed")
  public Boolean isManualLaunchAllowed() {
    return manualLaunchAllowed;
  }
  public void setManualLaunchAllowed(Boolean manualLaunchAllowed) {
    this.manualLaunchAllowed = manualLaunchAllowed;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("monitorData")
  public HudsonMasterComputermonitorData getMonitorData() {
    return monitorData;
  }
  public void setMonitorData(HudsonMasterComputermonitorData monitorData) {
    this.monitorData = monitorData;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("numExecutors")
  public Integer getNumExecutors() {
    return numExecutors;
  }
  public void setNumExecutors(Integer numExecutors) {
    this.numExecutors = numExecutors;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("offline")
  public Boolean isOffline() {
    return offline;
  }
  public void setOffline(Boolean offline) {
    this.offline = offline;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("offlineCause")
  public String getOfflineCause() {
    return offlineCause;
  }
  public void setOfflineCause(String offlineCause) {
    this.offlineCause = offlineCause;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("offlineCauseReason")
  public String getOfflineCauseReason() {
    return offlineCauseReason;
  }
  public void setOfflineCauseReason(String offlineCauseReason) {
    this.offlineCauseReason = offlineCauseReason;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("temporarilyOffline")
  public Boolean isTemporarilyOffline() {
    return temporarilyOffline;
  }
  public void setTemporarilyOffline(Boolean temporarilyOffline) {
    this.temporarilyOffline = temporarilyOffline;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonMasterComputer hudsonMasterComputer = (HudsonMasterComputer) o;
    return Objects.equals(propertyClass, hudsonMasterComputer.propertyClass) &&
        Objects.equals(displayName, hudsonMasterComputer.displayName) &&
        Objects.equals(executors, hudsonMasterComputer.executors) &&
        Objects.equals(icon, hudsonMasterComputer.icon) &&
        Objects.equals(iconClassName, hudsonMasterComputer.iconClassName) &&
        Objects.equals(idle, hudsonMasterComputer.idle) &&
        Objects.equals(jnlpAgent, hudsonMasterComputer.jnlpAgent) &&
        Objects.equals(launchSupported, hudsonMasterComputer.launchSupported) &&
        Objects.equals(loadStatistics, hudsonMasterComputer.loadStatistics) &&
        Objects.equals(manualLaunchAllowed, hudsonMasterComputer.manualLaunchAllowed) &&
        Objects.equals(monitorData, hudsonMasterComputer.monitorData) &&
        Objects.equals(numExecutors, hudsonMasterComputer.numExecutors) &&
        Objects.equals(offline, hudsonMasterComputer.offline) &&
        Objects.equals(offlineCause, hudsonMasterComputer.offlineCause) &&
        Objects.equals(offlineCauseReason, hudsonMasterComputer.offlineCauseReason) &&
        Objects.equals(temporarilyOffline, hudsonMasterComputer.temporarilyOffline);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, displayName, executors, icon, iconClassName, idle, jnlpAgent, launchSupported, loadStatistics, manualLaunchAllowed, monitorData, numExecutors, offline, offlineCause, offlineCauseReason, temporarilyOffline);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonMasterComputer {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    executors: ").append(toIndentedString(executors)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconClassName: ").append(toIndentedString(iconClassName)).append("\n");
    sb.append("    idle: ").append(toIndentedString(idle)).append("\n");
    sb.append("    jnlpAgent: ").append(toIndentedString(jnlpAgent)).append("\n");
    sb.append("    launchSupported: ").append(toIndentedString(launchSupported)).append("\n");
    sb.append("    loadStatistics: ").append(toIndentedString(loadStatistics)).append("\n");
    sb.append("    manualLaunchAllowed: ").append(toIndentedString(manualLaunchAllowed)).append("\n");
    sb.append("    monitorData: ").append(toIndentedString(monitorData)).append("\n");
    sb.append("    numExecutors: ").append(toIndentedString(numExecutors)).append("\n");
    sb.append("    offline: ").append(toIndentedString(offline)).append("\n");
    sb.append("    offlineCause: ").append(toIndentedString(offlineCause)).append("\n");
    sb.append("    offlineCauseReason: ").append(toIndentedString(offlineCauseReason)).append("\n");
    sb.append("    temporarilyOffline: ").append(toIndentedString(temporarilyOffline)).append("\n");
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
}

