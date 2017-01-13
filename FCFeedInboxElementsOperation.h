//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSArray, NSError;

@interface FCFeedInboxElementsOperation : FCOperation
{
    _Bool _shouldDownloadAssets;
    _Bool _cachedOnly;
    _Bool _fallBackOnDeletedPlaceholders;
    _Bool _resultHadCacheMisses;
    FCCloudContext *_context;
    NSArray *_batches;
    NSArray *_elements;
    NSArray *_desiredArticleIDs;
    NSArray *_ignoreCacheForArticleIDs;
    unsigned long long _articleCachePolicy;
    double _articleMaxCachedAge;
    CDUnknownBlockType _elementsCompletionHandler;
    NSArray *_resultElements;
    NSArray *_resultHeadlines;
    NSError *_resultError;
}

@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(nonatomic) _Bool resultHadCacheMisses; // @synthesize resultHadCacheMisses=_resultHadCacheMisses;
@property(retain, nonatomic) NSArray *resultHeadlines; // @synthesize resultHeadlines=_resultHeadlines;
@property(retain, nonatomic) NSArray *resultElements; // @synthesize resultElements=_resultElements;
@property(copy, nonatomic) CDUnknownBlockType elementsCompletionHandler; // @synthesize elementsCompletionHandler=_elementsCompletionHandler;
@property(nonatomic) _Bool fallBackOnDeletedPlaceholders; // @synthesize fallBackOnDeletedPlaceholders=_fallBackOnDeletedPlaceholders;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) double articleMaxCachedAge; // @synthesize articleMaxCachedAge=_articleMaxCachedAge;
@property(nonatomic) unsigned long long articleCachePolicy; // @synthesize articleCachePolicy=_articleCachePolicy;
@property(nonatomic) _Bool shouldDownloadAssets; // @synthesize shouldDownloadAssets=_shouldDownloadAssets;
@property(retain, nonatomic) NSArray *ignoreCacheForArticleIDs; // @synthesize ignoreCacheForArticleIDs=_ignoreCacheForArticleIDs;
@property(retain, nonatomic) NSArray *desiredArticleIDs; // @synthesize desiredArticleIDs=_desiredArticleIDs;
@property(retain, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) NSArray *batches; // @synthesize batches=_batches;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end
