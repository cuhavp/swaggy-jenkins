#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
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


#import "SWGFreeStyleBuild.h"
#import "SWGFreeStyleProjectactions.h"
#import "SWGFreeStyleProjecthealthReport.h"
#import "SWGNullSCM.h"
@protocol SWGFreeStyleBuild;
@class SWGFreeStyleBuild;
@protocol SWGFreeStyleProjectactions;
@class SWGFreeStyleProjectactions;
@protocol SWGFreeStyleProjecthealthReport;
@class SWGFreeStyleProjecthealthReport;
@protocol SWGNullSCM;
@class SWGNullSCM;



@protocol SWGFreeStyleProject
@end

@interface SWGFreeStyleProject : SWGObject


@property(nonatomic) NSString* class;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* url;

@property(nonatomic) NSString* color;

@property(nonatomic) NSArray<SWGFreeStyleProjectactions>* actions;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSString* displayName;

@property(nonatomic) NSString* displayNameOrNull;

@property(nonatomic) NSString* fullDisplayName;

@property(nonatomic) NSString* fullName;

@property(nonatomic) NSNumber* buildable;

@property(nonatomic) NSArray<SWGFreeStyleBuild>* builds;

@property(nonatomic) SWGFreeStyleBuild* firstBuild;

@property(nonatomic) NSArray<SWGFreeStyleProjecthealthReport>* healthReport;

@property(nonatomic) NSNumber* inQueue;

@property(nonatomic) NSNumber* keepDependencies;

@property(nonatomic) SWGFreeStyleBuild* lastBuild;

@property(nonatomic) SWGFreeStyleBuild* lastCompletedBuild;

@property(nonatomic) NSString* lastFailedBuild;

@property(nonatomic) SWGFreeStyleBuild* lastStableBuild;

@property(nonatomic) SWGFreeStyleBuild* lastSuccessfulBuild;

@property(nonatomic) NSString* lastUnstableBuild;

@property(nonatomic) NSString* lastUnsuccessfulBuild;

@property(nonatomic) NSNumber* nextBuildNumber;

@property(nonatomic) NSString* queueItem;

@property(nonatomic) NSNumber* concurrentBuild;

@property(nonatomic) SWGNullSCM* scm;

@end