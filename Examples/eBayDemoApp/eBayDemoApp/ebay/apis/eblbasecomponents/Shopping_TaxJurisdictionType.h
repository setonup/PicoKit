// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Tax-related details for a region or jurisdiction.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_TaxJurisdictionType : NSObject <PicoBindable> {

@private
    NSString *_jurisdictionID;
    NSNumber *_salesTaxPercent;
    NSNumber *_shippingIncludedInTax;
    NSMutableArray *_any;

}


/**
 
 Representative identifier for the jurisdiction. Typically an
 abbreviation (e.g. CA for California).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *jurisdictionID;

/**
 
 The tax percent to apply for a listing shipped to this
 jurisdiction. The value passed in is stored with a precision of
 3 digits after the decimal point (##.###).
 GetTaxTable: this tag has no value if the user's tax table has not been set.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, strong) NSNumber *salesTaxPercent;

/**
 
 Whether shipping costs are to be part of the base amount that is taxed.
 GetTaxTable: This tag is empty if the user did not previously provide information.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, strong) NSNumber *shippingIncludedInTax;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, strong) NSMutableArray *any;


@end
