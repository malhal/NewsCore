//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFeedDescriptor.h>

#import <NewsCore/FCInboxStyleFeed-Protocol.h>

@class NSString;

@interface FCMultiTagFeedDescriptor : FCFeedDescriptor <FCInboxStyleFeed>
{
}

- (id)_articleKeysMappingToTag;
- (id)_tagFeedRequestForTagID:(id)arg1 feedContext:(id)arg2;
- (id)personalizationSessionFromCursor:(id)arg1 toCursor:(id)arg2;
- (long long)inboxFilterOptions;
- (long long)inboxSortMethod;
- (void)_fetchPinnedFeedItemsWithQualityOfService:(long long)arg1 networkPriority:(long long)arg2 testBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_feedRequestsWithFeedContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 minCount:(unsigned long long)arg4 personalizer:(id)arg5 resultsLimit:(unsigned long long *)arg6 queryType:(long long *)arg7;
- (id)cursorByMergingBottomCursor:(id)arg1 withBottomCursor:(id)arg2;
- (id)cursorByMergingTopCursor:(id)arg1 withTopCursor:(id)arg2;
- (void)fetchBatchOfFeedItemsFromCursor:(id)arg1 toCursor:(id)arg2 minCount:(unsigned long long)arg3 articleTestBlock:(CDUnknownBlockType)arg4 personalizer:(id)arg5 qualityOfService:(long long)arg6 networkPriority:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)customizeBottomCursor:(id)arg1 forQueryResult:(id)arg2 feedContext:(id)arg3 fromCursor:(id)arg4 dateRange:(id)arg5 personalizer:(id)arg6;
- (void)customizeFeedRequests:(id)arg1 feedContext:(id)arg2 fromCursor:(id)arg3 dateRange:(id)arg4 minResultsLimit:(unsigned long long)arg5 personalizer:(id)arg6 resultsLimit:(unsigned long long *)arg7 queryType:(long long *)arg8;
- (_Bool)supportsTopStories;
- (unsigned long long)preferredFeedItemBatchSizeWhenCatchingUp;
- (unsigned long long)preferredFeedItemBatchSize;
- (void)fetchPinnedArticleIDsWithQualityOfService:(long long)arg1 networkPriority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCurrentFeedContextWithQualityOfService:(long long)arg1 networkPriority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isInboxStyleFeed;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

