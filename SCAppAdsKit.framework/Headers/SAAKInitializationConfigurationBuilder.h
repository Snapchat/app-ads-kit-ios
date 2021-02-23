#import <Foundation/Foundation.h>

@class SAAKInitializationConfiguration;

NS_ASSUME_NONNULL_BEGIN

@interface SAAKInitializationConfigurationBuilder : NSObject

+ (instancetype)initializationConfiguration;

+ (instancetype)initializationConfigurationFromExistingInitializationConfiguration:(SAAKInitializationConfiguration *)existingInitializationConfiguration;

- (SAAKInitializationConfiguration *)build;

- (instancetype)withAppId:(NSString *)appId;

- (instancetype)withSnapAppIds:(NSArray<NSUUID *> *)snapAppIds;

- (instancetype)withIdfa:(nullable NSUUID *)idfa;

@end

NS_ASSUME_NONNULL_END

