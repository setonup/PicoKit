// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Price;
@class CartItem;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface CartItems : NSObject <PicoBindable> {

@private
    Price *_subTotal;
    NSMutableArray *_cartItem;

}


/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, strong) Price *subTotal;

/**
 (public property)
 
 entry type : class CartItem
*/

@property (nonatomic, strong) NSMutableArray *cartItem;


@end
