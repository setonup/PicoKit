// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Finding_CategoryHistogramContainer.h"
#import "Finding_CategoryHistogram.h"

@implementation Finding_CategoryHistogramContainer

@synthesize categoryHistogram = _categoryHistogram;
@synthesize delimiter = _delimiter;
@synthesize any = _any;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"categoryHistogram" propertyName:@"categoryHistogram" type:PICO_TYPE_OBJECT clazz:[Finding_CategoryHistogram class]];
    [map setObject:ps forKey:@"categoryHistogram"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"delimiter" propertyName:@"delimiter" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"delimiter"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    
    return map;
}



-(void)dealloc {
    self.categoryHistogram = nil;
    self.delimiter = nil;
    self.any = nil;
}

@end
