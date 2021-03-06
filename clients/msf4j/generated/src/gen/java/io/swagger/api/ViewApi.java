package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.ViewApiService;
import io.swagger.api.factories.ViewApiServiceFactory;

import io.swagger.annotations.ApiParam;
import io.swagger.jaxrs.*;

import io.swagger.model.ListView;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import org.wso2.msf4j.formparam.FormDataParam;
import org.wso2.msf4j.formparam.FileInfo;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;

@Path("/view")


@io.swagger.annotations.Api(description = "the view API")
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaMSF4JServerCodegen", date = "2017-08-03T23:35:16.576Z")
public class ViewApi  {
   private final ViewApiService delegate = ViewApiServiceFactory.getViewApi();

    @GET
    @Path("/{name}/api/json")
    
    @Produces({ "application/json" })
    @io.swagger.annotations.ApiOperation(value = "", notes = "Retrieve view details", response = ListView.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successfully retrieved view details", response = ListView.class),
        
        @io.swagger.annotations.ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password", response = ListView.class),
        
        @io.swagger.annotations.ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password", response = ListView.class),
        
        @io.swagger.annotations.ApiResponse(code = 404, message = "View cannot be found on Jenkins instance", response = ListView.class) })
    public Response getView(@ApiParam(value = "Name of the view",required=true) @PathParam("name") String name
)
    throws NotFoundException {
        return delegate.getView(name);
    }
    @GET
    @Path("/{name}/config.xml")
    
    @Produces({ "text/xml" })
    @io.swagger.annotations.ApiOperation(value = "", notes = "Retrieve view configuration", response = String.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successfully retrieved view configuration in config.xml format", response = String.class),
        
        @io.swagger.annotations.ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password", response = String.class),
        
        @io.swagger.annotations.ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password", response = String.class),
        
        @io.swagger.annotations.ApiResponse(code = 404, message = "View cannot be found on Jenkins instance", response = String.class) })
    public Response getViewConfig(@ApiParam(value = "Name of the view",required=true) @PathParam("name") String name
)
    throws NotFoundException {
        return delegate.getViewConfig(name);
    }
    @POST
    @Path("/{name}/config.xml")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "Update view configuration", response = void.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successfully updated view configuration", response = void.class),
        
        @io.swagger.annotations.ApiResponse(code = 400, message = "An error has occurred - error message is embedded inside the HTML response", response = void.class),
        
        @io.swagger.annotations.ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password", response = void.class),
        
        @io.swagger.annotations.ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password", response = void.class),
        
        @io.swagger.annotations.ApiResponse(code = 404, message = "View cannot be found on Jenkins instance", response = void.class) })
    public Response postViewConfig(@ApiParam(value = "Name of the view",required=true) @PathParam("name") String name
,@ApiParam(value = "View configuration in config.xml format" ,required=true) String body
,@ApiParam(value = "CSRF protection token" )@HeaderParam("Jenkins-Crumb") String jenkinsCrumb
)
    throws NotFoundException {
        return delegate.postViewConfig(name,body,jenkinsCrumb);
    }
}
