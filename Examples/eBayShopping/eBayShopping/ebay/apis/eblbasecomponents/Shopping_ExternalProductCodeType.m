// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Shopping_ExternalProductCodeType.h"

/**
 @file
 
 Indicates the type of external product ID being used to identify a
 stock product.
 
*/

/**
 
 ExternalProductID.Value contains an ISBN value.
 Required when you pass an ISBN as the external product ID.
 (This value is also applicable to Half.com listings.)
 
*/
NSString *const Shopping_ExternalProductCodeType_ISBN = @"ISBN";

/**
 
 ExternalProductID.Value contains a UPC value.
 Required when you pass a UPC as the external product ID.
 (This value is also applicable to Half.com listings.)
 
*/
NSString *const Shopping_ExternalProductCodeType_UPC = @"UPC";

/**
 
 ExternalProductID.Value contains an eBay catalog product ID.
 Required when you pass an eBay product ID
 as the external product ID.
 Not applicable with FindItemsAdvanced or FindProducts.
 
*/
NSString *const Shopping_ExternalProductCodeType_PRODUCT_ID = @"ProductID";

/**
 
 ExternalProductID.Value contains an EAN value.
 Required when you pass an EAN as the external product ID.
 
*/
NSString *const Shopping_ExternalProductCodeType_EAN = @"EAN";

/**
 
 ExternalProductID.Value contains a set of keywords that uniquely identify the product.
 Only applicable when listing event ticket.
 See the eBay Features Guide for information about valid
 ticket keywords for an external product ID.
 Required when you pass a set of keywords as the external product ID.
 Not applicable with FindItemsAdvanced or FindProducts. 
 With FindItemsAdvanced, use TicketFinder instead.
 
*/
NSString *const Shopping_ExternalProductCodeType_KEYWORDS = @"Keywords";

/**
 
 Reserved for future use.
 
*/
NSString *const Shopping_ExternalProductCodeType_MPN = @"MPN";

/**
 
 Reserved for internal or future use
 
*/
NSString *const Shopping_ExternalProductCodeType_CUSTOM_CODE = @"CustomCode";
