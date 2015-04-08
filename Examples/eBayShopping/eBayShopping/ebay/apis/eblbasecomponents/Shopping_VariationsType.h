// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Shopping_VariationType;
@class Shopping_PicturesType;
@class Shopping_NameValueListArrayType;

/**
 
 Variations are multiple similar (but not identical) items in a 
 single fixed-price listing. 
 For example, a single listing could contain multiple items of the 
 same brand and model that vary by color and size (like "Blue, Large" and "Black, Medium"). Each variation can have its own quantity and 
 price. For example, a listing could include 10 "Blue, Large" 
 variations and 20 "Black, Medium" variations. 
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_VariationsType : NSObject <PicoBindable> {

@private
    NSMutableArray *_variation;
    NSMutableArray *_pictures;
    Shopping_NameValueListArrayType *_variationSpecificsSet;
    NSMutableArray *_any;

}


/**
 
 Contains data that distinguishes one variation from another.
 For example, if the items vary by color and size, each Variation
 node specifies a combination of one of those colors and 
 sizes.
 
 
 entry type : class Shopping_VariationType
*/

@property (nonatomic, retain) NSMutableArray *variation;

/**
 
 Contains a set of pictures that correspond to one of the
 variation specifics, such as Color. For example, if a listing
 has blue and black color variations, a listing could specify the
 name Color as an organizing mechanism for all the pictures, 
 and then include a set of pictures for the blue variations and 
 another set of pictures for the black variations.<br>
 <br>
 <span class="tablenote"><b>Note:</b> 
 Only one Pictures node is currently returned for a listing.
 However, the node has been defined as unbounded (repeatable) in 
 the schema to allow for different use cases for some calls or sites 
 in the future.</span>
 
 
 entry type : class Shopping_PicturesType
*/

@property (nonatomic, retain) NSMutableArray *pictures;

/**
 
 A list of all variation names and values that are defined on 
 the item. This could include values that were previously
 defined (but no longer for sale).<br>
 <br>
 eBay uses this list to configure variation selection widgets 
 that appear on eBay's View Item page. 
 For example, if Color and Size are names in the list, then
 eBay's View Item page displays Color and Size drop-down lists 
 to help a buyer choose a variation of interest.<br>
 <br>
 The order in which the names and values are returned
 matches the order in which the selection widgets appear on
 the View Item page.
 For example, if the names "Color", then "Size", and then 
 "Sleeve Style" are returned, the View Item page shows drop-down 
 lists with those labels in that order. For "Size", if the values
 returned are "S", "M", and then "L", the View Item page 
 shows the values in that order in the Size drop-down list.
 
 
 type : class Shopping_NameValueListArrayType
*/
@property (nonatomic, retain) Shopping_NameValueListArrayType *variationSpecificsSet;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
