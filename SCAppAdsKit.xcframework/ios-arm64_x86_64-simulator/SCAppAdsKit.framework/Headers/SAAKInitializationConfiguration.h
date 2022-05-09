//
//  SAAKInitializationConfiguration.h
//  SCAppAdsKit
//
//  Copyright (c) 2022 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SAAKInitializationConfiguration : NSObject <NSCopying>

@property (nonatomic, readonly, copy) NSString *appId;
@property (nonatomic, readonly, copy) NSArray<NSUUID *> *snapAppIds;
@property (nonatomic, readonly, copy, nullable) NSUUID *idfa;
/**
 * Whether App Ads Kit should manage SKAdNetwork
 */
@property (nonatomic, readonly) BOOL manageSKAdNetwork;

- (instancetype)initWithAppId:(NSString *)appId snapAppIds:(NSArray<NSUUID *> *)snapAppIds idfa:(nullable NSUUID *)idfa manageSKAdNetwork:(BOOL)manageSKAdNetwork;

@end

NS_ASSUME_NONNULL_END

