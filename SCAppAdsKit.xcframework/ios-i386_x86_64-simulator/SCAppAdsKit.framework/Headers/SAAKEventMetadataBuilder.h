//
//  SAAKEventMetadataBuilder.h
//  SCAppAdsKit
//
//  Copyright (c) 2021 Snap Inc. All rights reserved.
//
#import <Foundation/Foundation.h>

@class SAAKEventMetadata;

@interface SAAKEventMetadataBuilder : NSObject

+ (instancetype)eventMetadata;

+ (instancetype)eventMetadataFromExistingEventMetadata:(SAAKEventMetadata *)existingEventMetadata;

- (SAAKEventMetadata *)build;

- (instancetype)withItemCategory:(NSString *)itemCategory;

- (instancetype)withItemIds:(NSArray<NSString *> *)itemIds;

- (instancetype)withEventId:(NSString *)eventId;

- (instancetype)withEventDescription:(NSString *)eventDescription;

- (instancetype)withNumberOfItems:(NSNumber *)numberOfItems;

- (instancetype)withPrice:(NSDecimalNumber *)price;

- (instancetype)withCurrency:(NSString *)currency;

- (instancetype)withPaymentInfoAvailable:(NSNumber *)paymentInfoAvailable;

- (instancetype)withTransactionId:(NSString *)transactionId;

- (instancetype)withSearchString:(NSString *)searchString;

- (instancetype)withSignUpMethod:(NSString *)signUpMethod;

- (instancetype)withSuccess:(NSNumber *)success;

- (instancetype)withLevel:(NSString *)level;

- (instancetype)withIsRetargeting:(NSNumber *)isRetargeting;

- (instancetype)withEmail:(NSString *)email;

- (instancetype)withPhoneNumber:(NSString *)phoneNumber;

- (instancetype)withLimitAdTracking:(BOOL)limitAdTracking;

@end

