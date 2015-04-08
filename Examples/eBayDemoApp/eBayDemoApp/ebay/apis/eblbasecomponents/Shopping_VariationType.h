// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Shopping_AmountType;
@class Shopping_SellingStatusType;
@class Shopping_DiscountPriceInfoType;
@class Shopping_NameValueListArrayType;

/**
 
 This element hold the values that define the SKU, StartPrice, Quantity, VariationDetails, and VariationSpecifics.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_VariationType : NSObject <PicoBindable> {

@private
    NSString *_sku;
    Shopping_AmountType *_startPrice;
    NSNumber *_quantity;
    Shopping_NameValueListArrayType *_variationSpecifics;
    NSNumber *_quantitySold;
    Shopping_SellingStatusType *_sellingStatus;
    Shopping_DiscountPriceInfoType *_discountPriceInfo;
    NSMutableArray *_any;

}


/**
 
 An SKU (stock keeping unit) is an identifier defined by a seller.
 If you need to contact the seller to ask a question about a
 particular variation, you can mention the SKU (if present) to help
 the seller identify the variation you're interested in.
 Only returned if the seller chose to specify a SKU for the
 variation.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *sku;

/**
 
 The fixed price of all items identified by this variation.
 For example, a "Blue, Large" variation price could be USD 10.00,
 and a "Black, Medium" variation price could be USD 5.00.
 <br>
 <br>
 Each variation has its own price, and the prices can
 be different for each variation. This enables sellers to
 provide discounts on certain variations without affecting the price
 of others. Always returned) for multi-variation listings.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, strong) Shopping_AmountType *startPrice;

/**
 
 The number of items available for sale that are associated
 with this variation.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, strong) NSNumber *quantity;

/**
 
 A list of name/value pairs that uniquely identify the variation
 within the listing. All variations specify the same set of
 names, and each variation provides a unique combination of
 values for those names. For example, if the items vary by color and
 size, then every variation specifies Color and Size as names,
 and no two variations can specify the same combination of
 color and size values. Use this information to identify a
 variation of interest when you communicate with
 the seller.
 <br>
 <br>
 If your application supports PlaceOffer (in the Trading API),
 you use this information to uniquely identify the variation
 that you want to purchase.
 
 
 type : class Shopping_NameValueListArrayType
*/
@property (nonatomic, strong) Shopping_NameValueListArrayType *variationSpecifics;

/**
 
 Not used. See SellingStatus.QuantitySold instead.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, strong) NSNumber *quantitySold;

/**
 
 Contains the variation's current price and quantity sold.
 Always returned when variations are present.
 
 
 type : class Shopping_SellingStatusType
*/
@property (nonatomic, strong) Shopping_SellingStatusType *sellingStatus;

/**
 
 This container provides information for an item that has a Strikethrough Price
 (STP) or a Minimum Advertised Price (MAP) discount pricing treatment. STP and MAP apply only to fixed-price listings. STP is available on the US, eBay Motors, UK, Germany, Canada (English and French), France, Italy, and Spain sites, while MAP is available only on the US site.
 <br><br>
 Discount pricing is available to qualified sellers (and their associated developers) who
 participate in the Discount Pricing Program. Once qualified, sellers receive a
 "special account flag" (SAF) that allows them to apply Discount Pricing to both MSKU
 and Non-MSKU items.
 
 
 type : class Shopping_DiscountPriceInfoType
*/
@property (nonatomic, strong) Shopping_DiscountPriceInfoType *discountPriceInfo;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, strong) NSMutableArray *any;


@end
