// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Finding_FindItemsForFavoriteSearchResponse.h"
#import "Finding_CategoryHistogramContainer.h"
#import "Finding_AspectHistogramContainer.h"
#import "Finding_ConditionHistogramContainer.h"

@implementation Finding_FindItemsForFavoriteSearchResponse

@synthesize categoryHistogramContainer = _categoryHistogramContainer;
@synthesize aspectHistogramContainer = _aspectHistogramContainer;
@synthesize conditionHistogramContainer = _conditionHistogramContainer;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"findItemsForFavoriteSearchResponse" nsUri:@"http://www.ebay.com/marketplace/search/v1/services"];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"categoryHistogramContainer" propertyName:@"categoryHistogramContainer" type:PICO_TYPE_OBJECT clazz:[Finding_CategoryHistogramContainer class]];
    [map setObject:ps forKey:@"categoryHistogramContainer"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"aspectHistogramContainer" propertyName:@"aspectHistogramContainer" type:PICO_TYPE_OBJECT clazz:[Finding_AspectHistogramContainer class]];
    [map setObject:ps forKey:@"aspectHistogramContainer"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"conditionHistogramContainer" propertyName:@"conditionHistogramContainer" type:PICO_TYPE_OBJECT clazz:[Finding_ConditionHistogramContainer class]];
    [map setObject:ps forKey:@"conditionHistogramContainer"];
    
    return map;
}



-(void)dealloc {
    self.categoryHistogramContainer = nil;
    self.aspectHistogramContainer = nil;
    self.conditionHistogramContainer = nil;
}

@end
