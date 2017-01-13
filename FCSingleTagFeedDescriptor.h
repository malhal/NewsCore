//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCMultiTagFeedDescriptor.h>

#import <NewsCore/FCInboxStyleFeed-Protocol.h>

@class NSString;
@protocol FCTagProviding;

@interface FCSingleTagFeedDescriptor : FCMultiTagFeedDescriptor <FCInboxStyleFeed>
{
    id <FCTagProviding> _tag;
    id <FCTagProviding> _tagForSubscriptions;
}

@property(copy, nonatomic) id <FCTagProviding> tagForSubscriptions; // @synthesize tagForSubscriptions=_tagForSubscriptions;
@property(copy, nonatomic) id <FCTagProviding> tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (long long)inboxFilterOptions;
- (long long)inboxSortMethod;
- (_Bool)supportsTopStories;
- (unsigned long long)preferredFeedItemBatchSize;
- (void)fetchPinnedArticleIDsWithQualityOfService:(long long)arg1 networkPriority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCurrentFeedContextWithQualityOfService:(long long)arg1 networkPriority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)iAdSectionID;
- (id)iAdFeedID;
- (id)iAdPrimaryAudience;
- (long long)iAdContentProvider;
- (id)iAdCategories;
- (id)backingTopicID;
- (id)backingSectionID;
- (id)backingChannelID;
- (id)backingTag;
- (_Bool)isSubscribedTo;
- (void)unsubscribeTo;
- (_Bool)subscribeToWithError:(id *)arg1;
- (_Bool)isSubscribable;
- (id)theme;
- (id)name;
- (long long)feedType;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1 identifier:(id)arg2 tag:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
