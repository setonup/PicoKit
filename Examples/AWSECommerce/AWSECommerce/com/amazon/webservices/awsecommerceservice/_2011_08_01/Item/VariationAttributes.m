// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "VariationAttributes.h"
#import "VariationAttribute.h"

@implementation VariationAttributes

@synthesize variationAttribute = _variationAttribute;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"VariationAttribute" propertyName:@"variationAttribute" type:PICO_TYPE_OBJECT clazz:[VariationAttribute class]];
    [map setObject:ps forKey:@"variationAttribute"];
    
    return map;
}




@end
