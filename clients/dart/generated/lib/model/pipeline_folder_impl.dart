part of swagger.api;


@Entity()
class PipelineFolderImpl {
  
  @Property(name: '_class')
  String _class = null;
  

  @Property(name: 'displayName')
  String displayName = null;
  

  @Property(name: 'fullName')
  String fullName = null;
  

  @Property(name: 'name')
  String name = null;
  

  @Property(name: 'organization')
  String organization = null;
  

  @Property(name: 'numberOfFolders')
  int numberOfFolders = null;
  

  @Property(name: 'numberOfPipelines')
  int numberOfPipelines = null;
  
  PipelineFolderImpl();

  @override
  String toString()  {
    return 'PipelineFolderImpl[_class=$_class, displayName=$displayName, fullName=$fullName, name=$name, organization=$organization, numberOfFolders=$numberOfFolders, numberOfPipelines=$numberOfPipelines, ]';
  }

}

