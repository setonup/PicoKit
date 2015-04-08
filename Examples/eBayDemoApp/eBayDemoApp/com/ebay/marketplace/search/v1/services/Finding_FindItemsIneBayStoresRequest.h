// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Finding_BaseFindingServiceRequest.h"


@class Finding_DomainFilter;
@class Finding_AspectFilter;
@class Finding_ItemFilter;

/**
 
 Returns items listed in eBay stores. Specify
 storeName in the request to retrieve all listings within a single store. You
 can combine storeName with keywords to find specific items, or use keywords
 without storeName to search for items in all eBay stores.
 <br><br>
 Search results can be filtered by item details or aspects and sorted by a
 variety of criteria.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_FindItemsIneBayStoresRequest : Finding_BaseFindingServiceRequest {

@private
    NSString *_keywords;
    NSString *_storeName;
    NSMutableArray *_itemFilter;
    NSMutableArray *_outputSelector;
    NSMutableArray *_aspectFilter;
    NSMutableArray *_domainFilter;
    NSMutableArray *_categoryId;

}


/**
 
 Specify one or more words to use in a search query for finding items
 on eBay. By default, queries search item titles only. When running
 queries, it is best to include complete keywords values--eBay checks
 words in context with each other. If you are using a URL request and
 your keyword query consists of multiple words, use "%20" to separate
 the words. For example, use "Harry%20Potter" to search for items
 containing those words in any order. Queries aren't case-sensitive,
 so it doesn't matter whether you use uppercase or lowercase letters.
 <br><br>
 You must specify keywords when you are searching across all eBay
 stores. That is, <b class="con">keywords</b> is required
 if <b class="con">storeName</b> is not specified in the
 request.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *keywords;

/**
 
 The name of the eBay store to search. Returns all items in the store,
 or can be used with keywords to search for specific items in an eBay
 store. If you do not specify keywords, you must specify storeName.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 Store names are case sensitive. Also, if the store name contains an
 ampersand (&), you must use the & character entity (&
 amp;) in its place.
 </span>
 If you do not specify <b class="con">storeName</b> in the
 request, the search is across all eBay stores. When searching across
 all stores, you must specify keywords.
 <br><br>
 The results can be filtered by item listing details or aspects.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *storeName;

/**
 
 Reduce the number of items returned by a find request using item
 filters. Use <b class="con">itemFilter</b> to specify
 name/value pairs. You can include multiple item filters in a single
 request.
 
 
 entry type : class Finding_ItemFilter
*/

@property (nonatomic, strong) NSMutableArray *itemFilter;

/**
 
 Defines what data to return, in addition to the default set of data,
 in a response.
 <br><br>
 If you don't specify this field, eBay returns a default set of item
 fields. Use outputSelector to include more information in the
 response. The additional data is grouped into discrete nodes. You can
 specify multiple nodes by including this field multiple times, as
 needed, in the request.
 <br><br>
 If you specify this field, the additional fields returned can affect
 the call's response time (performance), including in the case with
 feedback data.
 
 
 entry type : string constant in Finding_OutputSelectorType.h
*/

@property (nonatomic, strong) NSMutableArray *outputSelector;

/**
 
 Aspect filters refine (limit) the number of items returned by a find
 request. Obtain input values for aspectFilter fields from an
 aspectHistogramContainer returned in the response of a previous
 query.
 <br><br>
 By issuing a series of find queries, you can continually refine the
 items returned in your responses. Do this by repeating a query using
 the aspect values returned in one response as the input values to
 your next query.
 <br><br/>
 For example, the aspectHistogramContainer in a response on
 Men's Shoes could contain an aspect of Size, along with "aspect
 values" for the different sizes currently available in Men's Shoes.
 By populating aspectFilter fields with the values returned in an
 aspectHistogramContainer, you can refine the item results returned by
 your new query.
 
 
 entry type : class Finding_AspectFilter
*/

@property (nonatomic, strong) NSMutableArray *aspectFilter;

/**
 
 <b>As of October 2014, domains will be deprecated and "category" is used instead. </b>
 
 
 entry type : class Finding_DomainFilter
*/

@property (nonatomic, strong) NSMutableArray *domainFilter;

/**
 
 Specifies the category from which you want to retrieve item listings.
 This field can be repeated to include multiple categories.
 <br><br>
 If a specified category ID doesn't match an existing category for the
 site, eBay returns an invalid-category error message. To determine
 valid categories, use the Shopping API <b
 class="con">GetCategoryInfo</b> call.
 <br><br>
 Up to three (3) categories can be specified.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, strong) NSMutableArray *categoryId;


@end
