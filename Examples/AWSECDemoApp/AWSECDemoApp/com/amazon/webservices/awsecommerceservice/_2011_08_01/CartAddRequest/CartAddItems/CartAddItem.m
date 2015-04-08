// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "CartAddItem.h"

@implementation CartAddItem

@synthesize asin = _asin;
@synthesize offerListingId = _offerListingId;
@synthesize quantity = _quantity;
@synthesize associateTag = _associateTag;
@synthesize listItemId = _listItemId;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OfferListingId" propertyName:@"offerListingId" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"offerListingId"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Quantity" propertyName:@"quantity" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"quantity"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AssociateTag" propertyName:@"associateTag" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"associateTag"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ListItemId" propertyName:@"listItemId" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"listItemId"];
    
    return map;
}




@end
