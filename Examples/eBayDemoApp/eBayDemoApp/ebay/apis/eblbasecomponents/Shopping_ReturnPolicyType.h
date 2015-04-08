// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Type for the return policy details of an item.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_ReturnPolicyType : NSObject <PicoBindable> {

@private
    NSString *_refund;
    NSString *_returnsWithin;
    NSString *_returnsAccepted;
    NSString *_description;
    NSString *_warrantyOffered;
    NSString *_warrantyType;
    NSString *_warrantyDuration;
    NSString *_ean;
    NSString *_shippingCostPaidBy;
    NSString *_restockingFeeValue;
    NSString *_restockingFeeValueOption;
    NSMutableArray *_any;

}


/**
 
 This string value indicates whether the seller is only willing to provide a refund to the buyer ('MoneyBack') in the case of a return, or if the seller is allowing the buyer to choose between getting the refund or getting an item exchange ('MoneyBackOrExchange') or item replacement ('MoneyBackOrReplacement'). 
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *refund;

/**
 
 Specifies the length of time in which the item must be returned
 under the return policy.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *returnsWithin;

/**
 
 This string value indicates whether the seller accepts returns ('ReturnsAccepted') or does not accept returns ('ReturnsNotAccepted'). 
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *returnsAccepted;

/**
 
 A description of the return policy for the item.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *description;

/**
 
 Information about the warranty offered.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *warrantyOffered;

/**
 
 The type of warranty offered.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *warrantyType;

/**
 
 The length of the warranty offered.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *warrantyDuration;

/**
 
 The European Article Number (EAN) associated with the item, if any. This field is only returned if the seller has supplied this value as part of the return policy when the listing was created/revised.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *ean;

/**
 
 This string value indicates whether the buyer or the seller is responsible for return shipping costs. This field will only be returned if returns are accepted by the seller.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *shippingCostPaidBy;

/**
 
 Display string that indicates the restocking fee charged by the 
 seller for returned items. This value is directly related to the
 <b>RestockingFeeValueOption</b> value, with the difference
 being that applications can use <b>RestockingFeeValue</b>
 to present the <b>RestockingFeeValueOption</b> value
 buttons or drop-down lists.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *restockingFeeValue;

/**
 
 This enumeration value indicates the restocking fee charged by the
 seller for returned items. In order to charge the buyer a restocking
 fee when an item is returned, a US seller must input a restocking
 fee value as part of the return policy.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *restockingFeeValueOption;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, strong) NSMutableArray *any;


@end
