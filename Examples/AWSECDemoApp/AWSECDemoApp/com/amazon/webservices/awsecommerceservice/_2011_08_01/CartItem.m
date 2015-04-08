// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "CartItem.h"
#import "Price.h"
#import "MetaData.h"

@implementation CartItem

@synthesize cartItemId = _cartItemId;
@synthesize asin = _asin;
@synthesize sellerNickname = _sellerNickname;
@synthesize quantity = _quantity;
@synthesize title = _title;
@synthesize productGroup = _productGroup;
@synthesize metaData = _metaData;
@synthesize price = _price;
@synthesize itemTotal = _itemTotal;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CartItemId" propertyName:@"cartItemId" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"cartItemId"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ASIN" propertyName:@"asin" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"asin"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellerNickname" propertyName:@"sellerNickname" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"sellerNickname"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Quantity" propertyName:@"quantity" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"quantity"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Title" propertyName:@"title" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"title"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ProductGroup" propertyName:@"productGroup" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"productGroup"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MetaData" propertyName:@"metaData" type:PICO_TYPE_OBJECT clazz:[MetaData class]];
    [map setObject:ps forKey:@"metaData"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Price" propertyName:@"price" type:PICO_TYPE_OBJECT clazz:[Price class]];
    [map setObject:ps forKey:@"price"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemTotal" propertyName:@"itemTotal" type:PICO_TYPE_OBJECT clazz:[Price class]];
    [map setObject:ps forKey:@"itemTotal"];
    
    return map;
}




@end
