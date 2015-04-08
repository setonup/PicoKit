// Generated by wsdl compiler for ios/objective-c
// DO NOT CHANGE!


#import "CurrencyConvertorSoap_XMLClient.h"

@implementation CurrencyConvertorSoap_XMLClient

-(void)conversionRate:(ConversionRate *) requestObject 
      success:(void (^)(ConversionRateResponse *responseObject))success
      failure:(void (^)(NSError *error))failure {
 
 
     [super invoke:requestObject responseClass:[ConversionRateResponse class]
     success:^(PicoXMLRequestOperation *operation, id<PicoBindable> responseObject) {
         if (success) {
             success(responseObject);
         }
     } failure:^(PicoXMLRequestOperation *operation, NSError *error) {
         if (failure) {
             failure(error);
         }
     }];
}


@end