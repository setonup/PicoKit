// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Forecast;

/**
 (public class)
 
 @ingroup WeatherSoap
*/
@interface ArrayOfForecast : NSObject <PicoBindable> {

@private
    NSMutableArray *_forecast;

}


/**
 (public property)
 
 entry type : class Forecast
*/

@property (nonatomic, retain) NSMutableArray *forecast;


@end
