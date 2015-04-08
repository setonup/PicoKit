// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"

// abstract class

@class Shopping_ErrorType;

/**
 
 Base type definition of a response payload that can carry any
 type of payload content with following optional elements:<br>
 - timestamp of response message<br>
 - application-level acknowledgement<br>
 - application-level (business-level) errors and warnings
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_AbstractResponseType : NSObject <PicoBindable> {

@private
    NSDate *_timestamp;
    NSString *_ack;
    NSMutableArray *_errors;
    NSString *_build;
    NSString *_version;
    NSString *_correlationID;
    NSMutableArray *_any;

}


/**
 
 This value represents the date and time when eBay processed the
 request. The time zone of this value is <a href="http://developer.ebay.com/DevZone/shopping/docs/CallRef/types/simpleTypes.html#dateTime">GMT</a>
 and the format is the
 ISO 8601 date and time format (YYYY-MM-DDTHH:MM:SS.SSSZ).
 See the "dateTime" type for information about this
 time format and converting to and from the GMT time zone.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *timestamp;

/**
 
 Indicates whether the call was successfully processed by eBay.
 
 
 type: string constant in Shopping_AckCodeType.h
*/
@property (nonatomic, retain) NSString *ack;

/**
 
 A list of application-level errors or warnings (if any) that were raised
 when eBay processed the request. <br>
 <br>
 Application-level errors occur due to
 problems with business-level data on the client side or on the eBay
 server side. For example, an error would occur if the request contains
 an invalid combination of fields, or it is missing a required field,
 or the value of the field is not recognized. An error could also occur
 if eBay encountered a problem in our internal business logic while
 processing the request.<br>
 <br>
 Only returned if there were warnings or errors.
 
 
 entry type : class Shopping_ErrorType
*/

@property (nonatomic, retain) NSMutableArray *errors;

/**
 
 This refers to the particular software build that eBay used when
 processing the request and generating the response. This includes the
 version number plus additional information. eBay Developer Support may
 request the build information when helping you resolve technical issues.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *build;

/**
 
 The release version that eBay used to process the request.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 This is usually the latest release version, as specified in the
 release notes. (eBay releases the API to international sites
 about a week after we release it to the US site.) </span><br>
 <br>
 If a field in the response returns the token "CustomCode", it usually
 means that the field is a code type (a token or enumeration),
 and that in your request URL (or HTTP header) you specified a
 version that is older than the version in which the token was added
 to the call.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *version;

/**
 
 If you pass a value in MessageID in a request, we will return the same
 value in CorrelationID in the response. You can use this for tracking
 that a response is returned for every request and to match particular
 responses to particular requests. Only returned if MessageID was used.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *correlationID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
