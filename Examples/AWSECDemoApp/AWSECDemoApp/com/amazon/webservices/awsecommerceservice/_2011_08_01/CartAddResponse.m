// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "CartAddResponse.h"
#import "OperationRequest.h"
#import "Cart.h"

@implementation CartAddResponse

@synthesize operationRequest = _operationRequest;
@synthesize cart = _cart;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"CartAddResponse" nsUri:@"http://webservices.amazon.com/AWSECommerceService/2011-08-01"];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OperationRequest" propertyName:@"operationRequest" type:PICO_TYPE_OBJECT clazz:[OperationRequest class]];
    [map setObject:ps forKey:@"operationRequest"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"Cart" propertyName:@"cart" type:PICO_TYPE_OBJECT clazz:[Cart class]];
    [map setObject:ps forKey:@"cart"];
    
    return map;
}




@end
