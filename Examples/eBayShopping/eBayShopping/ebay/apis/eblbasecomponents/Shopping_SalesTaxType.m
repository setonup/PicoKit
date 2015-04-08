// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Shopping_SalesTaxType.h"
#import "Shopping_AmountType.h"

@implementation Shopping_SalesTaxType

@synthesize salesTaxPercent = _salesTaxPercent;
@synthesize salesTaxState = _salesTaxState;
@synthesize shippingIncludedInTax = _shippingIncludedInTax;
@synthesize salesTaxAmount = _salesTaxAmount;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SalesTaxPercent" propertyName:@"salesTaxPercent" type:PICO_TYPE_FLOAT clazz:nil];
    [map setObject:ps forKey:@"salesTaxPercent"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SalesTaxState" propertyName:@"salesTaxState" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"salesTaxState"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ShippingIncludedInTax" propertyName:@"shippingIncludedInTax" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"shippingIncludedInTax"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SalesTaxAmount" propertyName:@"salesTaxAmount" type:PICO_TYPE_OBJECT clazz:[Shopping_AmountType class]];
    [map setObject:ps forKey:@"salesTaxAmount"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    
    return map;
}



-(void)dealloc {
    self.salesTaxPercent = nil;
    self.salesTaxState = nil;
    self.shippingIncludedInTax = nil;
    self.salesTaxAmount = nil;
    self.any = nil;
}

@end
