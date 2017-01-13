//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCCloudContext, NSArray;

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation
{
    _Bool _shouldDownloadAssets;
    NSArray *_resourceIDs;
    FCCloudContext *_context;
    NSArray *_resources;
}

@property(retain, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSArray *resourceIDs; // @synthesize resourceIDs=_resourceIDs;
@property(nonatomic) _Bool shouldDownloadAssets; // @synthesize shouldDownloadAssets=_shouldDownloadAssets;
- (void).cxx_destruct;
- (unsigned long long)propertiesInheritedByChildOperations;
- (id)completeFetchOperation;
- (id)downloadAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchResourceRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 resourceURLs:(id)arg2;
- (id)initWithContext:(id)arg1 resourceIDs:(id)arg2;

@end
