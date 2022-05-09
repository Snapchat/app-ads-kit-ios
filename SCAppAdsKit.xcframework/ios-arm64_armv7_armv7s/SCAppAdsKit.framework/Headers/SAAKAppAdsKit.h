//
//  SAAKAppAdsKit.h
//  SCAppAdsKit
//
//  Copyright (c) 2022 Snap Inc. All rights reserved.
//

#import "SAAKEventMetadata.h"
#import "SAAKEventMetadataBuilder.h"
#import "SAAKInitializationConfiguration.h"
#import "SAAKInitializationConfigurationBuilder.h"

#import "SAAKEventType.h"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SAAKEventMetadata;
@class SAAKInitializationConfiguration;

typedef void (^SAAKInitializationCompletionHandler)(BOOL success, NSError *_Nullable error);
typedef void (^SAAKTrackCompletionHandler)(BOOL success, NSError *_Nullable error);

NS_SWIFT_NAME(AppAdsKitProtocol)
@protocol SAAKAppAdsKitProtocol <NSObject>

@property (nonatomic, assign, readonly, getter=isInitialized) BOOL initialized;
@property (nonatomic, assign, getter=isAutoLoggingAppEventsEnabled) BOOL enableAutoLoggingAppEvents;
@property (nonatomic, readonly) NSString *sdkVersion;
@property (nonatomic, assign) BOOL debug;

- (void)initializeWithConfiguration:(SAAKInitializationConfiguration *)configuration
                         completion:(nullable SAAKInitializationCompletionHandler)completion;

- (void)trackEvent:(SAAKEventType)event
          metadata:(nullable SAAKEventMetadata *)metadata
        completion:(nullable SAAKTrackCompletionHandler)completion;

@end

NS_SWIFT_NAME(AppAdsKit)
@interface SAAKAppAdsKit : NSObject <SAAKAppAdsKitProtocol>

+ (SAAKAppAdsKit *)shared;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
