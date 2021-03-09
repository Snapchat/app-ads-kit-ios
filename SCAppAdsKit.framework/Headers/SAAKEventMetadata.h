//
//  SAAKEventMetadata.h
//  SAAKAppAdsKit
//
//  Copyright (c) 2020 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SAAKEventMetadata : NSObject <NSCopying>

/**
 * Item or category (ex. International Article Number (EAN) when applicable).
 */
@property (nonatomic, readonly, copy) NSString *itemCategory;
/**
 * International Article Number (EAN) when applicable, or other product or category identifier.
 */
@property (nonatomic, readonly, copy) NSArray<NSString *> *itemIds;
/**
 * UUID from deeplink click on Snapchat.
 */
@property (nonatomic, readonly, copy) NSString *eventId;
/**
 * A string description for additional information.
 */
@property (nonatomic, readonly, copy) NSString *eventDescription;
/**
 * Number of items.
 */
@property (nonatomic, readonly, copy) NSNumber *numberOfItems;
/**
 * Monetary value of the conversion event in float format. Valid delimiters are “|” “,” “;”. 
 * Please do not include currency symbols or commas as part of the value. (ex. single value: price=34.24, multiple values: price=99.43,45.34;34.2|23.22)
 */
@property (nonatomic, readonly, copy) NSString *price;
/**
 * Currency in standard ISO 4217 code (ex. EUR, USD, JPY). Required if price is included.
 */
@property (nonatomic, readonly, copy) NSString *currency;
/**
 * Denotes if payment information is available. Please pass @YES for yes, @NO for no.
 */
@property (nonatomic, readonly, copy) NSNumber *paymentInfoAvailable;
/**
 * Transaction ID.
 */
@property (nonatomic, readonly, copy) NSString *transactionId;
/**
 * The text string that was searched.
 */
@property (nonatomic, readonly, copy) NSString *searchString;
/**
 * Sign up method (ex. email, in-app, snapchat, twitter, etc.).
 */
@property (nonatomic, readonly, copy) NSString *signUpMethod;
/**
 * Denotes success. Please pass @YES for yes, @NO for no.
 */
@property (nonatomic, readonly, copy) NSNumber *success;
/**
 * Level in the game.
 */
@property (nonatomic, readonly, copy) NSString *level;
/**
 * Whether or not conversion is from a retargeting campaign. Please pass @YES for yes, @NO for no.
 */
@property (nonatomic, readonly, copy) NSNumber *isRetargeting;
/**
 * Email used for matching attribution event.
 */
@property (nonatomic, readonly, copy) NSString *email;
/**
 * Phone number used for matching attribution event.
 */
@property (nonatomic, readonly, copy) NSString *phoneNumber;
/**
 * Denotes if limit ad tracking is on.
 */
@property (nonatomic, readonly) BOOL limitAdTracking;

- (instancetype)initWithItemCategory:(NSString *)itemCategory itemIds:(NSArray<NSString *> *)itemIds eventId:(NSString *)eventId eventDescription:(NSString *)eventDescription numberOfItems:(NSNumber *)numberOfItems price:(NSString *)price currency:(NSString *)currency paymentInfoAvailable:(NSNumber *)paymentInfoAvailable transactionId:(NSString *)transactionId searchString:(NSString *)searchString signUpMethod:(NSString *)signUpMethod success:(NSNumber *)success level:(NSString *)level isRetargeting:(NSNumber *)isRetargeting email:(NSString *)email phoneNumber:(NSString *)phoneNumber limitAdTracking:(BOOL)limitAdTracking;

@end

