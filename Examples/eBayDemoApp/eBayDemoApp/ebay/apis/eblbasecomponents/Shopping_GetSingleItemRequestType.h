// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Shopping_AbstractRequestType.h"


@class Shopping_NameValueListArrayType;

/**
 
 Retrieves publicly available data for a single listing.
 Use this call to retrieve most of the information that is visible
 on a listing's View Item page on the eBay Web site,
 such as title, description, prices, basic seller and bidder information,
 and other details about the listing.Also returns basic
 shipping costs. For more shipping details, use GetShippingCosts.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_GetSingleItemRequestType : Shopping_AbstractRequestType {

@private
    NSString *_itemID;
    NSString *_variationSKU;
    Shopping_NameValueListArrayType *_variationSpecifics;
    NSString *_includeSelector;

}


/**
 
 The item ID that uniquely identifies the item listing
 for which to retrieve the data.<br>
 <br>
 You can determine an item's ID by calling findItemsAdvanced (<a
 href="http://www.developer.ebay.com/DevZone/finding/CallRef/index.html"
 >Finding API</a>) or from the  eBay Web site.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *itemID;

/**
 
 Variation-level SKU that uniquely identifies a variation within
 the listing identified by ItemID. Only applicable when the
 seller included variation-level SKU (Variation.SKU)
 values. Retrieves all the usual Item fields, but limits the
 Variations content to the specified variation.
 If not specified, the response includes all variations.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *variationSKU;

/**
 
 Name-value pairs that identify one or more variations within the
 listing identified by ItemID. Only applicable when the seller
 listed the item with variations. Retrieves all the usual Item
 fields, but limits the Variations content to the specified
 variation(s). If the specified pairs do not match any variation,
 eBay returns all variations.<br>
 <br>
 To retrieve only one variation, specify the full set of
 name/value pairs that match all the name-value pairs of one
 variation. <br>
 <br>
 To retrieve multiple variations (using a wildcard),
 specify one or more name/value pairs that partially match the
 desired variations. For example, if the listing contains
 variations for shirts in different colors and sizes, specify
 Color as Red (and no other name/value pairs) to retrieve
 all the red shirts in all sizes (but no other colors).
 
 
 type : class Shopping_NameValueListArrayType
*/
@property (nonatomic, strong) Shopping_NameValueListArrayType *variationSpecifics;

/**
 
 Defines standard subsets of fields to return within the
 response.<br>
 <br>
 If you don't specify this field, the call returns a default
 set of fields (see the "Detail Controls" link below). If you specify this field, the additional
 fields you retrieve can affect the call's response time
 (performance).<br>
 <br>
 <b>Applicable values</b>:
 <p class="ename">&bull;&nbsp;&nbsp; Details</p>
   <p class="edef">Include most available fields in the
   response (except fields that significantly affect the call's
   performance).</p>
 <p class="ename">&bull;&nbsp;&nbsp; Description</p>
   <p class="edef">Include the Description field in the response. (This can affect the call's performance.)</p>
 <p class="ename">&bull;&nbsp;&nbsp; TextDescription</p>
   <p class="edef">Include the text Description (no html tag) field in the response. (This can affect the call's performance.)</p>
 <p class="ename">&bull;&nbsp;&nbsp; ShippingCosts</p>
   <p class="edef">Include basic shipping costs in the
   response. (Use GetShippingCosts to retrieve more
   details.)</p>
 <p class="ename">&bull;&nbsp;&nbsp; ItemSpecifics</p>
 <p class="edef">Include ItemSpecifics in the response.</p>
 <p class="ename">&bull;&nbsp;&nbsp; Variations</p>
 <p class="edef">Include Variations in the response.</p>
 <p class="ename">&bull;&nbsp;&nbsp; Compatibility</p>
 <p class="edef">Include Compatibility in the response.</p>
 <br>
 <br>
 Use a comma to specify multiple values. (In this case,
 the results are cumulative.) See "GetSingleItem Samples"
 for an example of how to use this field.<br>
 <br>
 See "Detail Controls" for a complete list of
 fields that can be returned for each selector.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *includeSelector;


@end
