// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Shopping_FindPopularSearchesResponseType.h"
#import "Shopping_PopularSearchesType.h"

@implementation Shopping_FindPopularSearchesResponseType

@synthesize popularSearchResult = _popularSearchResult;
@synthesize pageNumber = _pageNumber;
@synthesize totalPages = _totalPages;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"FindPopularSearchesResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"PopularSearchResult" propertyName:@"popularSearchResult" type:PICO_TYPE_OBJECT clazz:[Shopping_PopularSearchesType class]];
    [map setObject:ps forKey:@"popularSearchResult"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PageNumber" propertyName:@"pageNumber" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"pageNumber"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TotalPages" propertyName:@"totalPages" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"totalPages"];
    
    return map;
}




@end
