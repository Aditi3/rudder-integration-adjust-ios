//
//  RudderAdjustIntegration.h
//  FBSnapshotTestCase
//
//  Created by Arnab Pal on 29/10/19.
//

#import <Foundation/Foundation.h>
#import <RudderSDKCore/RudderIntegration.h>
#import <RudderSDKCore/RudderClient.h>
#import <Adjust/Adjust.h>

NS_ASSUME_NONNULL_BEGIN

@interface RudderAdjustIntegration : NSObject<RudderIntegration, AdjustDelegate>

@property (nonatomic, strong) NSDictionary *config;
@property (nonatomic, strong) RudderClient *client;
@property (nonatomic, strong) NSMutableDictionary<NSString*, NSString*>* eventMap;

- (instancetype)initWithConfig:(NSDictionary *)config withAnalytics:(RudderClient *)client;

@end

NS_ASSUME_NONNULL_END