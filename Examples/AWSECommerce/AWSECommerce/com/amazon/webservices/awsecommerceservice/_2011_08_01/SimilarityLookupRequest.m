// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "SimilarityLookupRequest.h"

@implementation SimilarityLookupRequest

@synthesize condition = _condition;
@synthesize itemId = _itemId;
@synthesize merchantId = _merchantId;
@synthesize responseGroup = _responseGroup;
@synthesize similarityType = _similarityType;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Condition" propertyName:@"condition" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"condition"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ItemId" propertyName:@"itemId" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemId"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MerchantId" propertyName:@"merchantId" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"merchantId"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ResponseGroup" propertyName:@"responseGroup" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"responseGroup"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SimilarityType" propertyName:@"similarityType" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"similarityType"];
    
    return map;
}




@end
