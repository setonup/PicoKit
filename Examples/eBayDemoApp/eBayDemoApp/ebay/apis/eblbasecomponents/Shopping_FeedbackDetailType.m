// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Shopping_FeedbackDetailType.h"
#import "Shopping_AmountType.h"

@implementation Shopping_FeedbackDetailType

@synthesize commentingUser = _commentingUser;
@synthesize commentingUserScore = _commentingUserScore;
@synthesize commentText = _commentText;
@synthesize commentTime = _commentTime;
@synthesize commentType = _commentType;
@synthesize feedbackResponse = _feedbackResponse;
@synthesize followUp = _followUp;
@synthesize itemID = _itemID;
@synthesize role = _role;
@synthesize itemTitle = _itemTitle;
@synthesize itemPrice = _itemPrice;
@synthesize feedbackID = _feedbackID;
@synthesize transactionID = _transactionID;
@synthesize commentReplaced = _commentReplaced;
@synthesize responseReplaced = _responseReplaced;
@synthesize followUpReplaced = _followUpReplaced;
@synthesize countable = _countable;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentingUser" propertyName:@"commentingUser" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"commentingUser"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentingUserScore" propertyName:@"commentingUserScore" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"commentingUserScore"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentText" propertyName:@"commentText" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"commentText"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentTime" propertyName:@"commentTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"commentTime"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentType" propertyName:@"commentType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"commentType"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FeedbackResponse" propertyName:@"feedbackResponse" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"feedbackResponse"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FollowUp" propertyName:@"followUp" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"followUp"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemID" propertyName:@"itemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemID"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Role" propertyName:@"role" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"role"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemTitle" propertyName:@"itemTitle" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemTitle"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemPrice" propertyName:@"itemPrice" type:PICO_TYPE_OBJECT clazz:[Shopping_AmountType class]];
    [map setObject:ps forKey:@"itemPrice"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FeedbackID" propertyName:@"feedbackID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"feedbackID"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TransactionID" propertyName:@"transactionID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"transactionID"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentReplaced" propertyName:@"commentReplaced" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"commentReplaced"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ResponseReplaced" propertyName:@"responseReplaced" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"responseReplaced"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FollowUpReplaced" propertyName:@"followUpReplaced" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"followUpReplaced"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Countable" propertyName:@"countable" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"countable"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    
    return map;
}




@end
