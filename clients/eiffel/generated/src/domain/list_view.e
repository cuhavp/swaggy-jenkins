note
 description:"[
		Swaggy Jenkins
 		Jenkins API clients generated from Swagger / Open API specification
  		OpenAPI spec version: 0.1.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by the swagger code generator program.

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel swagger codegen", "src=https://github.com/swagger-api/swagger-codegen.git", "protocol=uri"

class LIST_VIEW 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    var_class: detachable STRING_32 
      
    description: detachable STRING_32 
      
    jobs: detachable LIST [FREE_STYLE_PROJECT] 
      
    name: detachable STRING_32 
      
    url: detachable STRING_32 
      

feature -- Change Element  
 
    set_var_class (a_name: like var_class)
        -- Set 'var_class' with 'a_name'.
      do
        var_class := a_name
      ensure
        var_class_set: var_class = a_name		
      end

    set_description (a_name: like description)
        -- Set 'description' with 'a_name'.
      do
        description := a_name
      ensure
        description_set: description = a_name		
      end

    set_jobs (a_name: like jobs)
        -- Set 'jobs' with 'a_name'.
      do
        jobs := a_name
      ensure
        jobs_set: jobs = a_name		
      end

    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name		
      end

    set_url (a_name: like url)
        -- Set 'url' with 'a_name'.
      do
        url := a_name
      ensure
        url_set: url = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass LIST_VIEW%N")
        if attached var_class as l_var_class then
          Result.append ("%N")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
        if attached description as l_description then
          Result.append ("%N")
          Result.append (l_description.out)
          Result.append ("%N")    
        end  
        if attached jobs as l_jobs then
          across l_jobs as ic loop
            Result.append ("%N")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
        if attached name as l_name then
          Result.append ("%N")
          Result.append (l_name.out)
          Result.append ("%N")    
        end  
        if attached url as l_url then
          Result.append ("%N")
          Result.append (l_url.out)
          Result.append ("%N")    
        end  
      end
end