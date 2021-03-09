//
//  SAAKInitializationConfiguration.h
//  SAAKAppAdsKit
//
//  Copyright (c) 2020 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SAAKInitializationConfiguration : NSObject <NSCopying>

@property (nonatomic, readonly, copy) NSString *appId;
@property (nonatomic, readonly, copy) NSArray<NSUUID *> *snapAppIds;
@property (nonatomic, readonly, copy, nullable) NSUUID *idfa;

- (instancetype)initWithAppId:(NSString *)appId snapAppIds:(NSArray<NSUUID *> *)snapAppIds idfa:(nullable NSUUID *)idfa;

@end

NS_ASSUME_NONNULL_END

