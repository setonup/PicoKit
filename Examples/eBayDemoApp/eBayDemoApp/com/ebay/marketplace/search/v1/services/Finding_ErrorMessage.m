// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Finding_ErrorMessage.h"
#import "Finding_ErrorData.h"

@implementation Finding_ErrorMessage

@synthesize error = _error;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"error" propertyName:@"error" type:PICO_TYPE_OBJECT clazz:[Finding_ErrorData class]];
    [map setObject:ps forKey:@"error"];
    
    return map;
}




@end
