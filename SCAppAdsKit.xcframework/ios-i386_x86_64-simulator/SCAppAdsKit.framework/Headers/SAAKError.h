//
//  SAAKError.h
//  SCAppAdsKit
//
//  Copyright (c) 2021 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const SAAKErrorDomain;

NS_ASSUME_NONNULL_END

typedef NS_ENUM(NSInteger, SAAKErrorCode) {
    /** SDK initialization failed. */
    SAAKErrorFailedToInitialize,
    /** SDK not initialized. */
    SAAKErrorNotInitialized,
    /** Track request failed. */
    SAAKErrorTrackRequestFailed,
};
