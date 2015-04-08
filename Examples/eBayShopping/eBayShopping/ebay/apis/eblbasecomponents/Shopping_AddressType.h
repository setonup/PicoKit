// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Contains the data for one user address. This is the base type for a
 number of user addresses, including seller payment address, buyer
 shipping address and buyer and seller registration address.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_AddressType : NSObject <PicoBindable> {

@private
    NSString *_name;
    NSString *_street;
    NSString *_street1;
    NSString *_street2;
    NSString *_cityName;
    NSString *_county;
    NSString *_stateOrProvince;
    NSString *_countryName;
    NSString *_phone;
    NSString *_phoneCountryPrefix;
    NSString *_phoneAreaOrCityCode;
    NSString *_phoneLocalNumber;
    NSString *_phone2CountryPrefix;
    NSString *_phone2AreaOrCityCode;
    NSString *_phone2LocalNumber;
    NSString *_postalCode;
    NSString *_addressID;
    NSString *_externalAddressID;
    NSString *_internationalName;
    NSString *_internationalStateAndCity;
    NSString *_internationalStreet;
    NSString *_companyName;
    NSString *_firstName;
    NSString *_lastName;
    NSMutableArray *_any;

}


/**
 
 User's name for the address.
 Also applicable to Half.com (for GetOrders).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 A concatenation of Street1 and Street2, primarily for RegistrationAddress.
 Not applicable to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *street;

/**
 
 Line 1 of the user's street address.
 Also applicable to Half.com (for GetOrders).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *street1;

/**
 
 Line 2 of the user's address (such as an apartment number).
 Returned if the user specified a second street value for their address.
 Also applicable to Half.com (for GetOrders).<br>
 In case of Item.SellerContactDetails, Street2 can be used to provide City, Address, State, and Zip code (if applicable).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *street2;

/**
 
 The name of the user's city.
 Also applicable to Half.com (for GetOrders).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *cityName;

/**
 
 County information for the user.
 This field applies to Classified Ad format listings and to the UK only.
 Not applicable to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *county;

/**
 
 The region of the user's address.
 Also applicable to Half.com (for GetOrders).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *stateOrProvince;

/**
 
 The name of the user's country.
 Also applicable to Half.com (for GetOrders).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *countryName;

/**
 
 User's primary phone number. This may return a value of
 "Invalid Request" if you are not authorized to see the
 user's phone number.
 Also applicable to Half.com (for GetOrders).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *phone;

/**
 
 Country Prefix of the secondary phone number. This value is derived from
 inputs supplied for PhoneCountryCode.
 This field applies to Classified Ad format listings only.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *phoneCountryPrefix;

/**
 
 Area or City Code of a user's primary phone number.
 This field applies to Classified Ad format listings only.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *phoneAreaOrCityCode;

/**
 
 The local number portion of the user's primary phone number.
 This field applies to Classified Ad format listings only.
 <br>
 <b>Note:</b> The full primary phone number is constructed by
 combining PhoneLocalNumber with PhoneAreaOrCityCode and PhoneCountryPrefix.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *phoneLocalNumber;

/**
 
 Country prefix of a user's secondary phone number. This value is derived from
 inputs supplied for Phone2CountryCode.
 This field applies to Classified Ad format listings only.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *phone2CountryPrefix;

/**
 
 Area or City Code of a user's secondary phone number.
 This field applies to Classified Ad format listings only.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *phone2AreaOrCityCode;

/**
 
 The local number portion of the user's secondary phone number.
 This field applies to Classified Ad format listings only.
 <br>
 <b>Note:</b> The full secondary phone number is constructed by
 combining Phone2LocalNumber with Phone2AreaOrCityCode and Phone2CountryPrefix.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *phone2LocalNumber;

/**
 
 User's postal code.
 <br>
 <br>
 If not provided as input for GetCart or SetCart, eBay uses the country associated
 with the SiteID in effect when the call is made.
 <br>
 <br>
 Also applicable to Half.com (for GetOrders).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *postalCode;

/**
 
 ID assigned to the address in the eBay database.
 For GetOrders, applies only to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *addressID;

/**
 
 ID assigned to the address by the owner of the address (fitting
 only if the address is owned by PayPal; see AddressOwner).
 Also applicable to Half.com (for GetOrders).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *externalAddressID;

/**
 
 Seller's international name that is associated with the payment address.
 Only applicable to SellerPaymentAddress.
 Not applicable to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *internationalName;

/**
 
 International state and city for the seller's payment address.
 Only applicable to SellerPaymentAddress.
 Not applicable to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *internationalStateAndCity;

/**
 
 Seller's international street address that is associated with the payment address.
 Only applicable to SellerPaymentAddress.
 Not applicable to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *internationalStreet;

/**
 
 User's company name. Only returned if available.
 Not applicable to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *companyName;

/**
 
 Displays the first name of the seller (in a business
 card format) if the seller's SellerBusinessCodeType
 is set to 'Commercial'.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *firstName;

/**
 
 Displays the last name of the seller (in a business
 card format) if the seller's SellerBusinessCodeType
 is set to 'Commercial'.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *lastName;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
