// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Finding_FindItemsByProductRequest.h"
#import "Finding_ProductId.h"
#import "Finding_ItemFilter.h"

@implementation Finding_FindItemsByProductRequest

@synthesize productId = _productId;
@synthesize itemFilter = _itemFilter;
@synthesize outputSelector = _outputSelector;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"findItemsByProductRequest" nsUri:@"http://www.ebay.com/marketplace/search/v1/services"];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"productId" propertyName:@"productId" type:PICO_TYPE_OBJECT clazz:[Finding_ProductId class]];
    [map setObject:ps forKey:@"productId"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"itemFilter" propertyName:@"itemFilter" type:PICO_TYPE_OBJECT clazz:[Finding_ItemFilter class]];
    [map setObject:ps forKey:@"itemFilter"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"outputSelector" propertyName:@"outputSelector" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"outputSelector"];
    
    return map;
}



-(void)dealloc {
    self.productId = nil;
    self.itemFilter = nil;
    self.outputSelector = nil;
}

@end
