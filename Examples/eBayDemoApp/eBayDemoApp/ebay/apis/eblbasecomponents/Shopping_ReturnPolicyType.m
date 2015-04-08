// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Shopping_ReturnPolicyType.h"

@implementation Shopping_ReturnPolicyType

@synthesize refund = _refund;
@synthesize returnsWithin = _returnsWithin;
@synthesize returnsAccepted = _returnsAccepted;
@synthesize description = _description;
@synthesize warrantyOffered = _warrantyOffered;
@synthesize warrantyType = _warrantyType;
@synthesize warrantyDuration = _warrantyDuration;
@synthesize ean = _ean;
@synthesize shippingCostPaidBy = _shippingCostPaidBy;
@synthesize restockingFeeValue = _restockingFeeValue;
@synthesize restockingFeeValueOption = _restockingFeeValueOption;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Refund" propertyName:@"refund" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"refund"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ReturnsWithin" propertyName:@"returnsWithin" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"returnsWithin"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ReturnsAccepted" propertyName:@"returnsAccepted" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"returnsAccepted"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Description" propertyName:@"description" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"description"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"WarrantyOffered" propertyName:@"warrantyOffered" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"warrantyOffered"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"WarrantyType" propertyName:@"warrantyType" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"warrantyType"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"WarrantyDuration" propertyName:@"warrantyDuration" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"warrantyDuration"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EAN" propertyName:@"ean" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"ean"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ShippingCostPaidBy" propertyName:@"shippingCostPaidBy" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"shippingCostPaidBy"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RestockingFeeValue" propertyName:@"restockingFeeValue" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"restockingFeeValue"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RestockingFeeValueOption" propertyName:@"restockingFeeValueOption" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"restockingFeeValueOption"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    
    return map;
}




@end
