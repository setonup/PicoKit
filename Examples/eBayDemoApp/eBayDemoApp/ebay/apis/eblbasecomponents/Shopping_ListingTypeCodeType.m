// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Shopping_ListingTypeCodeType.h"

/**
 @file
 
 Specifies the selling format used for a listing.
 
*/

/**
 
 Unknown auction type. (This is not normally used.)
 
*/
NSString *const Shopping_ListingTypeCodeType_UNKNOWN = @"Unknown";

/**
 
 Single-quantity online auction format.
 A Chinese auction has a Quantity of 1. Buyers engage in competitive bidding,
 although Buy It Now may be offered as long as no bids have been placed.
 Online auctions are listed on eBay.com, and they are also listed in
 the seller's eBay Store if the seller is a Store owner.
 
*/
NSString *const Shopping_ListingTypeCodeType_CHINESE = @"Chinese";

/**
 
 This value is no longer applicable.
 
 
*/
NSString *const Shopping_ListingTypeCodeType_DUTCH = @"Dutch";

/**
 
 Live auction, on-site auction that can include non-eBay bidders. Live auctions
 are listed on the eBay Live Auctions site, in live auction categories. They can
 also appear on eBay if the seller lists the lot in a secondary, eBay category.
 
*/
NSString *const Shopping_ListingTypeCodeType_LIVE = @"Live";

/**
 
 Reserved for future use.
 
*/
NSString *const Shopping_ListingTypeCodeType_AUCTION = @"Auction";

/**
 
 Advertisement to solicit inquiries on listings such as real estate. Permits no
 bidding on that item, service, or property. To express interest, a buyer fills
 out a contact form that eBay forwards to the seller as a lead. This format
 does not enable buyers and sellers to transact online through eBay, and eBay
 Feedback is not available for ad format listings.
 
*/
NSString *const Shopping_ListingTypeCodeType_AD_TYPE = @"AdType";

/**
 
 This value is no longer applicable. 
 
 
*/
NSString *const Shopping_ListingTypeCodeType_STORES_FIXED_PRICE = @"StoresFixedPrice";

/**
 
 Second chance offer made to a non-winning bidder on an ended listing. A seller
 can make an offer to a non-winning bidder when either the winning bidder has
 failed to pay for an item or the seller has a duplicate of the item. Second-
 chance offer items are on eBay, but they do not appear when browsing or
 searching listings. You need to already know the item ID in order to retrieve a
 second-chance offer.
 
*/
NSString *const Shopping_ListingTypeCodeType_PERSONAL_OFFER = @"PersonalOffer";

/**
 
 A basic fixed-price listing with a Quantity of 1. Allows no auction-style
 bidding. Also known as Buy It Now Only on some sites, this should not to be
 confused with the BuyItNow option that is available for competitive-bid
 auctions. Fixed-price listings appear on eBay.com. They are also listed in a
 seller's eBay Store if the seller is a Store owner.
 
*/
NSString *const Shopping_ListingTypeCodeType_FIXED_PRICE_ITEM = @"FixedPriceItem";

/**
 
 Half.com listing (item is listed on Half.com, not on eBay).
 Reserved for future use.
 
*/
NSString *const Shopping_ListingTypeCodeType_HALF = @"Half";

/**
 
 Lead Generation format (advertisement-style listing to solicit
 inquiries or offers, no bidding or fixed price, listed on eBay).
 
*/
NSString *const Shopping_ListingTypeCodeType_LEAD_GENERATION = @"LeadGeneration";

/**
 
 This value is no longer applicable.
 
 
*/
NSString *const Shopping_ListingTypeCodeType_EXPRESS = @"Express";

/**
 
 Placeholder value. See
 <a href="http://developer.ebay.com/DevZone/shopping/docs/CallRef/types/simpleTypes.html#token">token</a>.
 
*/
NSString *const Shopping_ListingTypeCodeType_CUSTOM_CODE = @"CustomCode";
