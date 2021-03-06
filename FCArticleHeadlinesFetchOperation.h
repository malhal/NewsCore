//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCCloudContext, FCHeldRecords, NSArray;

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation
{
    _Bool _shouldDownloadAssets;
    _Bool _overrideArticleCachePolicy;
    _Bool _overrideTagCachePolicy;
    unsigned long long _articleCachePolicy;
    double _articleMaximumCachedAge;
    unsigned long long _tagCachePolicy;
    double _tagMaximumCachedAge;
    FCCloudContext *_context;
    NSArray *_articleIDs;
    NSArray *_ignoreCacheForArticleIDs;
    FCHeldRecords *_heldArticleRecords;
    NSArray *_headlines;
}

@property(retain, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
@property(retain, nonatomic) FCHeldRecords *heldArticleRecords; // @synthesize heldArticleRecords=_heldArticleRecords;
@property(retain, nonatomic) NSArray *ignoreCacheForArticleIDs; // @synthesize ignoreCacheForArticleIDs=_ignoreCacheForArticleIDs;
@property(retain, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property double tagMaximumCachedAge; // @synthesize tagMaximumCachedAge=_tagMaximumCachedAge;
@property unsigned long long tagCachePolicy; // @synthesize tagCachePolicy=_tagCachePolicy;
@property _Bool overrideTagCachePolicy; // @synthesize overrideTagCachePolicy=_overrideTagCachePolicy;
@property double articleMaximumCachedAge; // @synthesize articleMaximumCachedAge=_articleMaximumCachedAge;
@property unsigned long long articleCachePolicy; // @synthesize articleCachePolicy=_articleCachePolicy;
@property _Bool overrideArticleCachePolicy; // @synthesize overrideArticleCachePolicy=_overrideArticleCachePolicy;
@property _Bool shouldDownloadAssets; // @synthesize shouldDownloadAssets=_shouldDownloadAssets;
- (void).cxx_destruct;
- (id)completeFetchOperation;
- (id)downloadAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchTagRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchArticleRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3;

@end

