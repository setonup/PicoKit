// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Finding_GalleryInfoContainer.h"
#import "Finding_GalleryURL.h"

@implementation Finding_GalleryInfoContainer

@synthesize galleryURL = _galleryURL;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"galleryURL" propertyName:@"galleryURL" type:PICO_TYPE_OBJECT clazz:[Finding_GalleryURL class]];
    [map setObject:ps forKey:@"galleryURL"];
    
    return map;
}




@end
