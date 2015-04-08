// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Denotes whether the item is a storefront listing.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_Storefront : NSObject <PicoBindable> {

@private
    NSString *_storeName;
    NSString *_storeURL;
    NSString *_delimiter;
    NSMutableArray *_any;

}


/**
 
 The name of the seller's eBay Store.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *storeName;

/**
 
 The URL of the seller's eBay Store page.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *storeURL;

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
