// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Shopping_AbstractResponseType.h"


@class Shopping_DomainHistogramType;
@class Shopping_HalfProductsType;

/**
 
 Returns stock product information in Half.com catalogs, such as
 information about a particular DVD or book. Optionally,
 also returns items that match the product.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_FindHalfProductsResponseType : Shopping_AbstractResponseType {

@private
    Shopping_DomainHistogramType *_domainHistogram;
    NSNumber *_pageNumber;
    NSNumber *_approximatePages;
    NSNumber *_moreResults;
    NSNumber *_totalProducts;
    Shopping_HalfProductsType *_products;
    NSString *_productSearchURL;

}


/**
 
 A histogram that lists the number of matching products found
 and the domains in which they were found.
 A <i>domain</i> is essentially
 a set of categories that share certain common features
 (as determined by Half.com). Each domain has its own name and ID.
 
 
 type : class Shopping_DomainHistogramType
*/
@property (nonatomic, retain) Shopping_DomainHistogramType *domainHistogram;

/**
 
 The number of the page of data returned. If many products
 are found and multiple pages of results are available, use
 this in combination with ApproximatePages and HasMore to decide
 which page to retrieve next. As FindHalfProducts only returns
 up to 2000 products, the maximum possible value is theoretically
 2000 (if you were to set EntriesPerPage to 1 in the request).
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *pageNumber;

/**
 
 The total number of pages that can be returned, given the same
 query and filters in the request. As FindHalfProducts only returns
 up to 2000 products, the maximum possible value is theoretically
 2000 (if you were to set MaxEntries to 1 in the request).
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *approximatePages;

/**
 
 If true, more pages of results are available.
 That is, PageNumber is less than ApproximatePages.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *moreResults;

/**
 
 The total number of matching products found.
 (If more than 2000 products are found, the call fails
 with an error.)
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *totalProducts;

/**
 
 An set of Half.com catalog products. This contains stock information about a
 particular DVD, book, or other product.
 When you use QueryKeywords in the request, FindHalfProducts returns a
 maximum of 20 products per page.
 When you use ProductID in the request, FindHalfProducts usually only
 returns 1 product. ItemCount is only returned if you use ProductID with
 IncludeSelector set to Items or Details.
 Inthe rare case where more than one product matches the same ProductID,
 FindHalfProducts will return all of those products.
 
 
 type : class Shopping_HalfProductsType
*/
@property (nonatomic, retain) Shopping_HalfProductsType *products;

/**
 
 A URL for product search results that corresponds to your search request. This is similar to ItemSearchURL in FindItems and FindItemsAdvanced.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *productSearchURL;


@end
