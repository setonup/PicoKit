// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "CollectionParent.h"

@implementation CollectionParent

@synthesize asin = _asin;
@synthesize title = _title;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ASIN" propertyName:@"asin" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"asin"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Title" propertyName:@"title" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"title"];
    
    return map;
}




@end
