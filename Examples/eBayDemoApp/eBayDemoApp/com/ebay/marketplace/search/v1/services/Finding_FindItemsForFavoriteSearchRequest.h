// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Finding_BaseServiceRequest.h"


@class Finding_PaginationInput;

/**
 
 Reserved for future use.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_FindItemsForFavoriteSearchRequest : Finding_BaseServiceRequest {

@private
    NSNumber *_searchId;
    NSString *_searchName;
    NSDate *_startTimeFrom;
    Finding_PaginationInput *_paginationInput;

}


/**
 
 Reserved for future use.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, strong) NSNumber *searchId;

/**
 
 Reserved for future use.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *searchName;

/**
 
 Reserved for future use.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, strong) NSDate *startTimeFrom;

/**
 (public property)
 
 type : class Finding_PaginationInput
*/
@property (nonatomic, strong) Finding_PaginationInput *paginationInput;


@end
