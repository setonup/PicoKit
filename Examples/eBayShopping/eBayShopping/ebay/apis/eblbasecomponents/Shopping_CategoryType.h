// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Contains details about a category.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_CategoryType : NSObject <PicoBindable> {

@private
    NSString *_categoryID;
    NSNumber *_categoryLevel;
    NSString *_categoryName;
    NSString *_categoryParentID;
    NSString *_categoryParentName;
    NSNumber *_itemCount;
    NSString *_categoryNamePath;
    NSString *_categoryIDPath;
    NSNumber *_leafCategory;
    NSMutableArray *_any;

}


/**
 
 The numeric ID of a category on eBay.
 <br>
 <br>
 Use an ID of -1 to retrieve the root category and the top-level (level 1) meta
 categories. You can determine other CategoryIDs from the response from this
 call, or from a specific item (retrieved from another call like
 GetSingleItem), or from the eBay website.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryID;

/**
 
 The level where the category fits in the site's category hierarchy.
 For example, if this field has a value of 2, then the category is 2
 levels below the root category.
 <br>
 <br>
 Note that the value of CategoryLevel will always be 1 level below the level
 of the requested category. To retrieve a category's children, pass its
 CategoryID back into the request.
 <br>
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *categoryLevel;

/**
 
 Display name of the category as it would appear on
 the eBay Web site.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryName;

/**
 
 Category ID identifying a category that is an ancestor of
 the category indicated in CategoryID.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryParentID;

/**
 
 Display name of the category indicated in CategoryParentID.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryParentName;

/**
 
 The total quantity of matching items in the category.
 In the FindItemsAdvanced response, matching categories at the same level
 (i.e., sibling categories) are sorted by ItemCount. That is, if the request
 specifies that fewer categories or subcategories should be returned,
 the ones with the most matching items are returned first.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *itemCount;

/**
 
 The fully qualified category display name as it would appear on the
 eBay site (e.g., Home & Garden:Kitchen:Tools & Gadgets).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryNamePath;

/**
 
 The fully qualified category ID (e.g., 11700:20625:20635 for Home &
 Garden:Kitchen:Tools & Gadgets).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryIDPath;

/**
 
 If true, indicates that the category indicated in CategoryID is a leaf
 category, in which items may be listed (if the category is not also
 expired or virtual).
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *leafCategory;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
