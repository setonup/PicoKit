// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Shopping_AmountType;

/**
 
 Type for the shipping-related details for an item or transaction.
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> This type and its fields do not provide reliable shipping cost information when returned by the FindPopularItems, FindProducts, GetMultipleItems and GetSingleItem calls. If a listing has shipping costs, use the GetShippingCosts call to get more details about the services and costs that the seller is offering.
 </span>
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_ShippingCostSummaryType : NSObject <PicoBindable> {

@private
    NSString *_shippingServiceName;
    Shopping_AmountType *_shippingServiceCost;
    Shopping_AmountType *_insuranceCost;
    NSString *_shippingType;
    NSNumber *_localPickup;
    NSString *_insuranceOption;
    Shopping_AmountType *_listedShippingServiceCost;
    Shopping_AmountType *_importCharge;
    NSString *_logisticPlanType;
    NSMutableArray *_any;

}


/**
 
 The name of a shipping service.
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> This field provides reliable shipping cost information only when returned by the GetShippingCosts call.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shippingServiceName;

/**
 
 The basic shipping cost of the item.
 This reflects the domestic shipping cost or the international shipping costs,
 depending on which applies (that is, whether the bidder/buyer is in the same
 country as the listing site of the item).
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> This field provides reliable shipping cost information only when returned by the GetShippingCosts call.
 </span>
 <i>Flat shipping:</i> single-item listing: this matches (in)ShippingServiceCost;
 multi-quantity listing: with a request version of 665 or greater,
 this is the total of (in)ShippingServiceCost plus
 ((in)ShippingServiceAdditionalCost times the number of items beyond the first
 item), and with a request version lower than 665, this is (in)ShippingServiceCost.
 <br><br/>
 <i>Promotional shipping:</i> For a request version lower than 665, promotional
 shipping has no effect on shipping costs. Otherwise: if the promotional
 shipping option is lower than other shipping services being offered, the
 savings is reflected in the returned shipping cost;
 the shipping service named Promotional Shipping Service (or whatever is
 the localized name for it) is included among the shipping services;
 if the promotional shipping cost is lower than the cost of other shipping
 services being offered, it is presented first in the list (the lowest shipping
 service cost is always presented first, regardless of whether there is
 promotional shipping).
 <br><br/>
 <i>Shipping surcharge:</i> With a request version of
 665 or greater, shipping cost includes any surcharge, and surcharge is not
 returned as an individual tag.  With a request version lower than 665,
 surcharge is not part of the total cost and is returned as its own tag.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *shippingServiceCost;

/**
 
 The cost of insurance. For flat rate shipping, this is the value set by the
 seller, if any. For calculated shipping, this is the value calculated by eBay
 with the shipping carrier for the particular item and can only be determined
 once the final item price is known when the listing ends. To determine whether
 a listing has ended, see EndTime or ListingStatus in GetSingleItem.
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> This field provides reliable shipping cost information only when returned by the GetShippingCosts call.
 </span>
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *insuranceCost;

/**
 
 How the seller stated that cost of shipping is to be determined, such as flat rate or
 calculated.
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> This field provides reliable shipping cost information only when returned by the GetShippingCosts call.
 </span>
 
 
 type: string constant in Shopping_ShippingTypeCodeType.h
*/
@property (nonatomic, retain) NSString *shippingType;

/**
 
 If ShippingCosts is specified for the IncludeSelector, and if the seller has specified local
 pickup for this item; the LocalPickup boolean is returned as true. This indicates that the
 seller does not ship this item. If local pickup
 was not specified for this item by the seller, the LocalPickup boolean is not returned.
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> This field provides reliable shipping cost information only when returned by the GetShippingCosts call.
 </span>
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *localPickup;

/**
 
 Whether the seller offers shipping insurance and, if
 so, whether the insurance is optional or required. Flat and
 calculated shipping.
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> This field provides reliable shipping cost information only when returned by the GetShippingCosts call.
 </span>
 
 
 type: string constant in Shopping_InsuranceOptionCodeType.h
*/
@property (nonatomic, retain) NSString *insuranceOption;

/**
 
 The listed shipping cost of the item. If multiple items were purchased, this
 includes the listed ShippingServiceAdditionalCost.
 <br>
 <br>
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> This field provides reliable shipping cost information only when returned by the GetShippingCosts call.
 </span>
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *listedShippingServiceCost;

/**
 
 The total cost of customs and taxes for the international leg of an order shipped using the Global Shipping Program. This amount is calculated and supplied for each item by the international shipping provider when a buyer views the item properties.
 <br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> This field provides reliable shipping cost information only when returned by the GetShippingCosts call.
 </span>
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *importCharge;

/**
 
 local logistic plan type for this service
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *logisticPlanType;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
