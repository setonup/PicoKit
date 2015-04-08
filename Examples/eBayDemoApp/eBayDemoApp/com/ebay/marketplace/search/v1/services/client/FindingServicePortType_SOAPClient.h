// Generated by wsdl compiler for ios/objective-c
// DO NOT CHANGE!


#import <Foundation/Foundation.h>
#import "PicoSOAPClient.h"
#import "Finding_GetSearchKeywordsRecommendationRequest.h"
#import "Finding_FindItemsIneBayStoresRequest.h"
#import "Finding_GetVersionRequest.h"
#import "Finding_GetVersionResponse.h"
#import "Finding_GetSearchKeywordsRecommendationResponse.h"
#import "Finding_FindItemsAdvancedRequest.h"
#import "Finding_GetHistogramsResponse.h"
#import "Finding_FindItemsByKeywordsResponse.h"
#import "Finding_FindItemsByProductRequest.h"
#import "Finding_FindItemsByCategoryRequest.h"
#import "Finding_FindItemsIneBayStoresResponse.h"
#import "Finding_FindItemsByImageRequest.h"
#import "Finding_FindItemsByProductResponse.h"
#import "Finding_FindItemsByCategoryResponse.h"
#import "Finding_GetHistogramsRequest.h"
#import "Finding_FindCompletedItemsRequest.h"
#import "Finding_FindItemsAdvancedResponse.h"
#import "Finding_FindCompletedItemsResponse.h"
#import "Finding_FindItemsForFavoriteSearchResponse.h"
#import "Finding_FindItemsByKeywordsRequest.h"
#import "Finding_FindItemsForFavoriteSearchRequest.h"
#import "Finding_FindItemsByImageResponse.h"


/**
 This class is the SOAP client to the FindingServicePortType Web Service.
*/ 
@interface FindingServicePortType_SOAPClient : PicoSOAPClient {

}

/**
 public method
*/
-(void)getSearchKeywordsRecommendation:(Finding_GetSearchKeywordsRecommendationRequest *) requestObject 
      success:(void (^)(Finding_GetSearchKeywordsRecommendationResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;

/**
 public method
*/
-(void)findItemsByKeywords:(Finding_FindItemsByKeywordsRequest *) requestObject 
      success:(void (^)(Finding_FindItemsByKeywordsResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;

/**
 public method
*/
-(void)findItemsByCategory:(Finding_FindItemsByCategoryRequest *) requestObject 
      success:(void (^)(Finding_FindItemsByCategoryResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;

/**
 public method
*/
-(void)findItemsAdvanced:(Finding_FindItemsAdvancedRequest *) requestObject 
      success:(void (^)(Finding_FindItemsAdvancedResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;

/**
 public method
*/
-(void)findItemsByProduct:(Finding_FindItemsByProductRequest *) requestObject 
      success:(void (^)(Finding_FindItemsByProductResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;

/**
 public method
*/
-(void)findItemsIneBayStores:(Finding_FindItemsIneBayStoresRequest *) requestObject 
      success:(void (^)(Finding_FindItemsIneBayStoresResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;

/**
 public method
*/
-(void)findItemsByImage:(Finding_FindItemsByImageRequest *) requestObject 
      success:(void (^)(Finding_FindItemsByImageResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;

/**
 public method
*/
-(void)getHistograms:(Finding_GetHistogramsRequest *) requestObject 
      success:(void (^)(Finding_GetHistogramsResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;

/**
 public method
*/
-(void)findCompletedItems:(Finding_FindCompletedItemsRequest *) requestObject 
      success:(void (^)(Finding_FindCompletedItemsResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;

/**
 public method
*/
-(void)getVersion:(Finding_GetVersionRequest *) requestObject 
      success:(void (^)(Finding_GetVersionResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;

/**
 public method
*/
-(void)findItemsForFavoriteSearch:(Finding_FindItemsForFavoriteSearchRequest *) requestObject 
      success:(void (^)(Finding_FindItemsForFavoriteSearchResponse *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure;


@end