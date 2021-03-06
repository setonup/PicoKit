// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Shopping_FindReviewsAndGuidesResponseType.h"
#import "Shopping_BuyingGuideDetailsType.h"
#import "Shopping_ProductIDType.h"
#import "Shopping_ReviewDetailsType.h"

@implementation Shopping_FindReviewsAndGuidesResponseType

@synthesize reviewCount = _reviewCount;
@synthesize buyingGuideCount = _buyingGuideCount;
@synthesize reviewerRank = _reviewerRank;
@synthesize totalHelpfulnessVotes = _totalHelpfulnessVotes;
@synthesize productID = _productID;
@synthesize reviewsAndGuidesURL = _reviewsAndGuidesURL;
@synthesize pageNumber = _pageNumber;
@synthesize totalPages = _totalPages;
@synthesize buyingGuideDetails = _buyingGuideDetails;
@synthesize reviewDetails = _reviewDetails;
@synthesize positiveHelpfulnessVotes = _positiveHelpfulnessVotes;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"FindReviewsAndGuidesResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ReviewCount" propertyName:@"reviewCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"reviewCount"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BuyingGuideCount" propertyName:@"buyingGuideCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"buyingGuideCount"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ReviewerRank" propertyName:@"reviewerRank" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"reviewerRank"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TotalHelpfulnessVotes" propertyName:@"totalHelpfulnessVotes" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"totalHelpfulnessVotes"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ProductID" propertyName:@"productID" type:PICO_TYPE_OBJECT clazz:[Shopping_ProductIDType class]];
    [map setObject:ps forKey:@"productID"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ReviewsAndGuidesURL" propertyName:@"reviewsAndGuidesURL" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"reviewsAndGuidesURL"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PageNumber" propertyName:@"pageNumber" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"pageNumber"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TotalPages" propertyName:@"totalPages" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"totalPages"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BuyingGuideDetails" propertyName:@"buyingGuideDetails" type:PICO_TYPE_OBJECT clazz:[Shopping_BuyingGuideDetailsType class]];
    [map setObject:ps forKey:@"buyingGuideDetails"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ReviewDetails" propertyName:@"reviewDetails" type:PICO_TYPE_OBJECT clazz:[Shopping_ReviewDetailsType class]];
    [map setObject:ps forKey:@"reviewDetails"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PositiveHelpfulnessVotes" propertyName:@"positiveHelpfulnessVotes" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"positiveHelpfulnessVotes"];
    
    return map;
}




@end
