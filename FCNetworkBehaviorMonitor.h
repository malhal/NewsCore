//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCNetworkReachabilityObserving-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCKeyValueStore, NSArray, NSMutableArray, NSString;
@protocol FCOperationThrottler, OS_dispatch_queue;

@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_sessions;
    NSMutableArray *_events;
    FCKeyValueStore *_localStore;
    id <FCOperationThrottler> _saveThrottler;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)networkInterfaceDidChange:(id)arg1;
- (void)_visitEventGroupsFromDate:(id)arg1 toDate:(id)arg2 block:(CDUnknownBlockType)arg3;
- (int)_cacheStateFromEvent:(id)arg1;
- (id)_respondingPOPFromEvent:(id)arg1;
- (void)_sanitizeNetworkEvent:(id)arg1;
- (_Bool)_shouldFilterNetworkEvent:(id)arg1;
- (void)logNetworkEvent:(id)arg1;
@property(readonly, nonatomic) NSArray *sessions;
- (void)populateTelemetry:(id)arg1 withNetworkEventsFromDate:(id)arg2 toDate:(id)arg3;
- (id)initWithCacheDirectory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

