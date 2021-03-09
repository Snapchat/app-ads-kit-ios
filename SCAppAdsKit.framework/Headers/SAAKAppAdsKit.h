//
//  SAAKAppAdsKit.h
//  SAAKAppAdsKit
//
//  Copyright (c) 2020 Snap Inc. All rights reserved.
//

#import "SAAKEventMetadata.h"
#import "SAAKEventMetadataBuilder.h"
#import "SAAKEventType.h"
#import "SAAKInitializationConfiguration.h"
#import "SAAKInitializationConfigurationBuilder.h"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SAAKEventMetadata;
@class SAAKInitializationConfiguration;

typedef void (^SAAKInitializationCompletionHandler)(BOOL success, NSError *_Nullable error);
typedef void (^SAAKTrackCompletionHandler)(BOOL success, NSError *_Nullable error);

@interface SAAKAppAdsKit : NSObject

+ (SAAKAppAdsKit *)shared;

@property (nonatomic, assign, readonly, getter=isInitialized) BOOL initialized;
@property (nonatomic, readonly) NSString *sdkVersion;

- (void)initializeWithConfiguration:(SAAKInitializationConfiguration *)configuration
                         completion:(nullable SAAKInitializationCompletionHandler)completion;

- (void)trackEvent:(SAAKEventType)event
          metadata:(nullable SAAKEventMetadata *)metadata
        completion:(nullable SAAKTrackCompletionHandler)completion;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype) new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
