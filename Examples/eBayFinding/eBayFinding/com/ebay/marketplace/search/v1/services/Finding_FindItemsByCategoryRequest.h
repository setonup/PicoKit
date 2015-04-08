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
 
 Returns items in one or more specified categories. Filters can be used to
 restrict the results.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_FindItemsByCategoryRequest : Finding_BaseFindingServiceRequest {

@private
    NSMutableArray *_categoryId;
    NSMutableArray *_itemFilter;
    NSMutableArray *_aspectFilter;
    NSMutableArray *_outputSelector;
    NSMutableArray *_domainFilter;

}


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

@property (nonatomic, retain) NSMutableArray *categoryId;

/**
 
 Reduce the number of items returned by a find request using item
 filters. Use <b class="con">itemFilter</b> to specify
 name/value pairs. You can include multiple item filters in a single
 request.
 
 
 entry type : class Finding_ItemFilter
*/

@property (nonatomic, retain) NSMutableArray *itemFilter;

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
 <br><br>
 For example, the aspectHistogramContainer in a response on Men's
 Shoes could contain an aspect of Size, along with "aspect values" for
 the different sizes currently available in Men's Shoes. By populating
 aspectFilter fields with the values returned in an
 aspectHistogramContainer, you can refine the item results returned by
 your new query.
 
 
 entry type : class Finding_AspectFilter
*/

@property (nonatomic, retain) NSMutableArray *aspectFilter;

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

@property (nonatomic, retain) NSMutableArray *outputSelector;

/**
 
 <b>As of October 2014, domains will be deprecated and "category" is used instead. </b>
 
 
 entry type : class Finding_DomainFilter
*/

@property (nonatomic, retain) NSMutableArray *domainFilter;


@end
