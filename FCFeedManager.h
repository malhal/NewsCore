//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedInboxObserving-Protocol.h>

@class FCAsyncSerialQueue, FCCloudContext, FCKeyValueStore, NSMapTable, NSString;
@protocol FCFeedPersonalizing, FCFeedPrefetchCoordinating, OS_dispatch_queue;

@interface FCFeedManager : NSObject <FCFeedInboxObserving>
{
    id <FCFeedPrefetchCoordinating> _prefetchCoordinator;
    id <FCFeedPersonalizing> _feedPersonalizer;
    FCCloudContext *_context;
    NSMapTable *_feedDescriptorsByID;
    NSMapTable *_feedInboxesByFeedID;
    FCAsyncSerialQueue *_feedUpdateQueue;
    FCKeyValueStore *_store;
    NSObject<OS_dispatch_queue> *_storeQueue;
}

+ (id)feedDescriptorNameForReadingList;
+ (id)feedDescriptorNameForReadingHistory;
+ (id)feedDescriptorNameForForYou;
+ (id)_identifierForFeedName:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *storeQueue; // @synthesize storeQueue=_storeQueue;
@property(retain, nonatomic) FCKeyValueStore *store; // @synthesize store=_store;
@property(retain, nonatomic) FCAsyncSerialQueue *feedUpdateQueue; // @synthesize feedUpdateQueue=_feedUpdateQueue;
@property(retain, nonatomic) NSMapTable *feedInboxesByFeedID; // @synthesize feedInboxesByFeedID=_feedInboxesByFeedID;
@property(retain, nonatomic) NSMapTable *feedDescriptorsByID; // @synthesize feedDescriptorsByID=_feedDescriptorsByID;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property(retain, nonatomic) id <FCFeedPrefetchCoordinating> prefetchCoordinator; // @synthesize prefetchCoordinator=_prefetchCoordinator;
- (void).cxx_destruct;
- (void)_fetchSubscribedFeedDescriptorsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_checkFilterForPreferredLanguages;
- (void)prefetchFeedsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prewarmFeedsFromCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateFeedWithDescriptor:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCloudContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

