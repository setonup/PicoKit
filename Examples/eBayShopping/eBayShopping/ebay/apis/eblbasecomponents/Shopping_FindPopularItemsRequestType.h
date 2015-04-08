// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Shopping_AbstractRequestType.h"



/**
 
 Find popular items
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_FindPopularItemsRequestType : Shopping_AbstractRequestType {

@private
    NSMutableArray *_categoryID;
    NSString *_queryKeywords;
    NSMutableArray *_categoryIDExclude;
    NSNumber *_maxEntries;

}


/**
 
 Specify CategoryID to restrict your query to a specific category.
 Up to 10 categories may be specified.
 If you are using a URL, and you want to specify
 more than one CategoryID, separate the values with a comma.
 For example, to specify Fiction Books and 
 Children's Books, specify CategoryID=377,279.
 <br>
 <br>
 If the specified category ID doesn't match an existing category
 for the site, an invalid-category error message is returned.
 To determine valid categories:<br>
 Use <b>findItemsAdvanced</b> from the <a href="http://www.developer.ebay.com/DevZone/finding/CallRef/index.html">Finding API</a> with CategoryHistogram value in the OutputSelector field 
 to retrieve matching categories. Then make another
 <b>findItemsAdvanced</b> call with the ID of a matching category.
 <br>
 <br>
 CategoryID can be used in combination with QueryKeywords and CategoryIDExclude.
 To retrieve the most popular items across all categories, do not submit a CategoryID.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *categoryID;

/**
 
 A query that specifies a string for searching titles of items on eBay.
 If you are using a URL, then to search for multiple words,
 use "%20". For example, use Harry%20Potter to search for items
 containing those words in any order.
 You can incorporate wildcards into a multi-word search, as in the following: ap*%20ip*.
 The words "and" and "or" are treated like any other word. Only use "and",
 "or", or "the" if you are searching for listings containing these words.
 QueryKeywords can be used in combination with CategoryID and CategoryIDExclude.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *queryKeywords;

/**
 
 Specify this value if you want search results to be filtered so that the popular 
 items returned do not include items that belong to a specific category. 
 <br>
 <br>
 CategoryIDExclude is an unbounded field.
 If you are using a URL, you can separate multiple values with a comma.
 For example, if you want to specify 
 Records and SuperAudio CDs, specify 
 CategoryIDExclude=306,46354.  
 <br>
 <br>
 If you use CategoryIDExclude, it must be used in with QueryKeywords or CategoryID.
 The CategoryIDExclude input field need not be used if you specified the 
 CategoryID input field.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *categoryIDExclude;

/**
  
   Specifies the maximum number of entries to return in a single call.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maxEntries;


@end
