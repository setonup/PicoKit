// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Shopping_ShippingDetailsType.h"
#import "Shopping_AmountType.h"
#import "Shopping_InternationalShippingServiceOptionType.h"
#import "Shopping_ShippingServiceOptionType.h"
#import "Shopping_SalesTaxType.h"
#import "Shopping_TaxTableType.h"

@implementation Shopping_ShippingDetailsType

@synthesize getItFast = _getItFast;
@synthesize insuranceCost = _insuranceCost;
@synthesize insuranceOption = _insuranceOption;
@synthesize internationalShippingServiceOption = _internationalShippingServiceOption;
@synthesize salesTax = _salesTax;
@synthesize shippingRateErrorMessage = _shippingRateErrorMessage;
@synthesize shippingServiceOption = _shippingServiceOption;
@synthesize taxTable = _taxTable;
@synthesize internationalInsuranceCost = _internationalInsuranceCost;
@synthesize internationalInsuranceOption = _internationalInsuranceOption;
@synthesize codCost = _codCost;
@synthesize excludeShipToLocation = _excludeShipToLocation;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"GetItFast" propertyName:@"getItFast" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"getItFast"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"InsuranceCost" propertyName:@"insuranceCost" type:PICO_TYPE_OBJECT clazz:[Shopping_AmountType class]];
    [map setObject:ps forKey:@"insuranceCost"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"InsuranceOption" propertyName:@"insuranceOption" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"insuranceOption"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"InternationalShippingServiceOption" propertyName:@"internationalShippingServiceOption" type:PICO_TYPE_OBJECT clazz:[Shopping_InternationalShippingServiceOptionType class]];
    [map setObject:ps forKey:@"internationalShippingServiceOption"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SalesTax" propertyName:@"salesTax" type:PICO_TYPE_OBJECT clazz:[Shopping_SalesTaxType class]];
    [map setObject:ps forKey:@"salesTax"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ShippingRateErrorMessage" propertyName:@"shippingRateErrorMessage" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"shippingRateErrorMessage"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ShippingServiceOption" propertyName:@"shippingServiceOption" type:PICO_TYPE_OBJECT clazz:[Shopping_ShippingServiceOptionType class]];
    [map setObject:ps forKey:@"shippingServiceOption"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TaxTable" propertyName:@"taxTable" type:PICO_TYPE_OBJECT clazz:[Shopping_TaxTableType class]];
    [map setObject:ps forKey:@"taxTable"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"InternationalInsuranceCost" propertyName:@"internationalInsuranceCost" type:PICO_TYPE_OBJECT clazz:[Shopping_AmountType class]];
    [map setObject:ps forKey:@"internationalInsuranceCost"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"InternationalInsuranceOption" propertyName:@"internationalInsuranceOption" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"internationalInsuranceOption"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CODCost" propertyName:@"codCost" type:PICO_TYPE_OBJECT clazz:[Shopping_AmountType class]];
    [map setObject:ps forKey:@"codCost"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ExcludeShipToLocation" propertyName:@"excludeShipToLocation" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"excludeShipToLocation"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    
    return map;
}



-(void)dealloc {
    self.getItFast = nil;
    self.insuranceCost = nil;
    self.insuranceOption = nil;
    self.internationalShippingServiceOption = nil;
    self.salesTax = nil;
    self.shippingRateErrorMessage = nil;
    self.shippingServiceOption = nil;
    self.taxTable = nil;
    self.internationalInsuranceCost = nil;
    self.internationalInsuranceOption = nil;
    self.codCost = nil;
    self.excludeShipToLocation = nil;
    self.any = nil;
}

@end
