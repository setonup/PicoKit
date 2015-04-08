// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Shopping_ReviewType;

/**
 
 Contains product reviews written by eBay members.
  
 
 @ingroup ShoppingInterface
*/
@interface Shopping_ReviewDetailsType : NSObject <PicoBindable> {

@private
    NSNumber *_averageRating;
    NSMutableArray *_review;
    NSMutableArray *_any;

}


/**
 
 The product's average rating (out of 5) based on all reviews.
 For example, a value like 4.5 would mean the average rating
 is 4.5 out of 5. (See ReviewCount for the total number of reviews.)
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, strong) NSNumber *averageRating;

/**
 
 An eBay member's review of the product.
 
 
 entry type : class Shopping_ReviewType
*/

@property (nonatomic, strong) NSMutableArray *review;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, strong) NSMutableArray *any;


@end
