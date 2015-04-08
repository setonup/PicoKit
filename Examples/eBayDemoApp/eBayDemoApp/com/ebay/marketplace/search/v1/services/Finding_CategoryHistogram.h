// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Finding_Category.h"


@class Finding_CategoryHistogram;

/**
 
 Statistical (histogram) information about categories that contain items that
 match the query, if any. For categories associated with specific items, see
 items returned in each search result. Shows the distribution of items across
 each category. Not returned if there is no match.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_CategoryHistogram : Finding_Category {

@private
    NSNumber *_count;
    NSMutableArray *_childCategoryHistogram;
    NSString *_delimiter;
    NSMutableArray *_any;

}


/**
 
 The total number of items in the associated category that match the
 search criteria.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, strong) NSNumber *count;

/**
 
 Container for histogram information pertaining to a child of the
 category specified in the request. Histograms return data on up to
 10 children. Histograms are only a single level deep. That is, a
 given category histogram contains only immediate children.
 
 
 entry type : class Finding_CategoryHistogram
*/

@property (nonatomic, strong) NSMutableArray *childCategoryHistogram;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *delimiter;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, strong) NSMutableArray *any;


@end
