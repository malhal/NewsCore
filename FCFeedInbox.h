//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAsyncSerialQueue, FCFeedDescriptor, NSArray, NSHashTable, NSMutableSet, NSString;
@protocol FCInboxStyleFeed, OS_dispatch_queue, OS_dispatch_semaphore;

@interface FCFeedInbox : NSObject
{
    FCFeedDescriptor *_feedDescriptor;
    NSString *_prewarmingTargetArticleID;
    id <FCInboxStyleFeed> _inboxStyleFeed;
    FCAsyncSerialQueue *_fetchQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSArray *_batches;
    NSArray *_elements;
    NSMutableSet *_articleIDsAlreadyUpdated;
    NSHashTable *_observers;
    NSArray *_prewarmingArticleIDs;
    NSObject<OS_dispatch_semaphore> *_refreshBarrierSemaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *refreshBarrierSemaphore; // @synthesize refreshBarrierSemaphore=_refreshBarrierSemaphore;
@property(retain, nonatomic) NSArray *prewarmingArticleIDs; // @synthesize prewarmingArticleIDs=_prewarmingArticleIDs;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableSet *articleIDsAlreadyUpdated; // @synthesize articleIDsAlreadyUpdated=_articleIDsAlreadyUpdated;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) NSArray *batches; // @synthesize batches=_batches;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) id <FCInboxStyleFeed> inboxStyleFeed; // @synthesize inboxStyleFeed=_inboxStyleFeed;
@property(copy, nonatomic) NSString *prewarmingTargetArticleID; // @synthesize prewarmingTargetArticleID=_prewarmingTargetArticleID;
@property(readonly, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
- (void).cxx_destruct;
- (void)fetchElementsBelowElementWithID:(id)arg1 minimumCount:(unsigned long long)arg2 qualityOfService:(long long)arg3 cachedOnly:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchMoreElementsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 cachedOnly:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_setBatches:(id)arg1 elements:(id)arg2;
- (_Bool)loadFromState:(id)arg1;
- (void)generatePersistableStateOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)enqueueRefreshBarrierWithBlock:(CDUnknownBlockType)arg1;
- (void)prewarmHeadlinesFromCacheWithQualityOfService:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetHeadlineUpdates;
- (void)checkForUpdatesForHeadline:(id)arg1 maxAge:(double)arg2 qualityOfService:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)checkForHeadlineUpdatesOnceWithMaxAge:(double)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)expandGapElement:(id)arg1 desiredHeadlineCount:(unsigned long long)arg2 qualityOfService:(long long)arg3 cachedOnly:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_refreshWithDesiredHeadlineCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 networkPriority:(long long)arg3 cachedOnly:(_Bool)arg4 waitOnRefreshBarrier:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)refreshWithDesiredHeadlineCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 networkPriority:(long long)arg3 cachedOnly:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) _Bool hasNotBeenPopulated;
@property(readonly, nonatomic) _Bool hasMoreElements;
@property(readonly, copy, nonatomic) NSArray *allElements;
- (id)t_allHeadlines;
- (id)headlines;
- (id)initWithFeedDescriptor:(id)arg1;
- (id)init;

@end
