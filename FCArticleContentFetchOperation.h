//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCArticleContentManifest, FCCloudContext, FCHeldRecords, FCInterestToken, NSArray, NSString, NTPBArticleRecord;

@interface FCArticleContentFetchOperation : FCMultiStepFetchOperation
{
    FCCloudContext *_context;
    NSString *_articleID;
    FCInterestToken *_webArchiveInterestToken;
    FCHeldRecords *_heldArticleRecords;
    NTPBArticleRecord *_articleRecord;
    FCArticleContentManifest *_contentManifest;
    NSArray *_flintResources;
}

@property(retain, nonatomic) NSArray *flintResources; // @synthesize flintResources=_flintResources;
@property(retain, nonatomic) FCArticleContentManifest *contentManifest; // @synthesize contentManifest=_contentManifest;
@property(retain, nonatomic) NTPBArticleRecord *articleRecord; // @synthesize articleRecord=_articleRecord;
@property(retain, nonatomic) FCHeldRecords *heldArticleRecords; // @synthesize heldArticleRecords=_heldArticleRecords;
@property(retain, nonatomic) FCInterestToken *webArchiveInterestToken; // @synthesize webArchiveInterestToken=_webArchiveInterestToken;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)completeFetchOperation;
- (id)fetchFlintResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchFlintDocumentWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchWebArchiveWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchWebExcerptWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchContentManifestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 articleID:(id)arg2;

@end

