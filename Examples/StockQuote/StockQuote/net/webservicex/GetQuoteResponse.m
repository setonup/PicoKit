// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "GetQuoteResponse.h"

@implementation GetQuoteResponse

@synthesize getQuoteResult = _getQuoteResult;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetQuoteResponse" nsUri:@"http://www.webserviceX.NET/"];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"GetQuoteResult" propertyName:@"getQuoteResult" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"getQuoteResult"];
    
    return map;
}



-(void)dealloc {
    self.getQuoteResult = nil;
}

@end
