// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "BarCodeData.h"

@implementation BarCodeData

@synthesize height = _height;
@synthesize width = _width;
@synthesize angle = _angle;
@synthesize ratio = _ratio;
@synthesize module = _module;
@synthesize left = _left;
@synthesize top = _top;
@synthesize checkSum = _checkSum;
@synthesize fontName = _fontName;
@synthesize barColor = _barColor;
@synthesize bgColor = _bgColor;
@synthesize fontSize = _fontSize;
@synthesize barcodeOption = _barcodeOption;
@synthesize barcodeType = _barcodeType;
@synthesize checkSumMethod = _checkSumMethod;
@synthesize showTextPosition = _showTextPosition;
@synthesize barCodeImageFormat = _barCodeImageFormat;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Height" propertyName:@"height" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"height"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Width" propertyName:@"width" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"width"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Angle" propertyName:@"angle" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"angle"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Ratio" propertyName:@"ratio" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"ratio"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Module" propertyName:@"module" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"module"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Left" propertyName:@"left" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"left"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Top" propertyName:@"top" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"top"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CheckSum" propertyName:@"checkSum" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"checkSum"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FontName" propertyName:@"fontName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"fontName"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BarColor" propertyName:@"barColor" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"barColor"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BGColor" propertyName:@"bgColor" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"bgColor"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FontSize" propertyName:@"fontSize" type:PICO_TYPE_FLOAT clazz:nil];
    [map setObject:ps forKey:@"fontSize"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"barcodeOption" propertyName:@"barcodeOption" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"barcodeOption"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"barcodeType" propertyName:@"barcodeType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"barcodeType"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"checkSumMethod" propertyName:@"checkSumMethod" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"checkSumMethod"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"showTextPosition" propertyName:@"showTextPosition" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"showTextPosition"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BarCodeImageFormat" propertyName:@"barCodeImageFormat" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"barCodeImageFormat"];
    
    return map;
}



-(void)dealloc {
    self.height = nil;
    self.width = nil;
    self.angle = nil;
    self.ratio = nil;
    self.module = nil;
    self.left = nil;
    self.top = nil;
    self.checkSum = nil;
    self.fontName = nil;
    self.barColor = nil;
    self.bgColor = nil;
    self.fontSize = nil;
    self.barcodeOption = nil;
    self.barcodeType = nil;
    self.checkSumMethod = nil;
    self.showTextPosition = nil;
    self.barCodeImageFormat = nil;
}

@end
