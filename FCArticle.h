//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCArticleContentManifest, FCFetchOperation, FCHeadline, NSError, NSString;
@protocol OS_dispatch_group;

@interface FCArticle : NSObject
{
    NSString *_articleID;
    FCHeadline *_headline;
    FCArticleContentManifest *_contentManifest;
    NSObject<OS_dispatch_group> *_fetchGroup;
    NSError *_fetchError;
    FCFetchOperation *_headlineFetchOperation;
}

@property(retain, nonatomic) FCFetchOperation *headlineFetchOperation; // @synthesize headlineFetchOperation=_headlineFetchOperation;
@property(retain, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property(retain, nonatomic) FCArticleContentManifest *contentManifest; // @synthesize contentManifest=_contentManifest;
@property(retain, nonatomic) FCHeadline *headline; // @synthesize headline=_headline;
@property(readonly, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void).cxx_destruct;
- (void)performBlockWhenContentManifestIsLoaded:(CDUnknownBlockType)arg1;
- (void)performBlockWhenFullyLoaded:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 articleID:(id)arg2 forceArticleUpdate:(_Bool)arg3 qualityOfService:(long long)arg4 networkPriority:(long long)arg5;
- (id)initWithContext:(id)arg1 headline:(id)arg2;

@end

