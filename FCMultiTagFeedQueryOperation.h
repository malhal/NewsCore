//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCMultiTagFeedQueryResult, NSArray, NSError;

@interface FCMultiTagFeedQueryOperation : FCOperation
{
    FCCloudContext *_context;
    unsigned long long _resultsLimit;
    NSArray *_tagFeedRequests;
    long long _sortingFunction;
    NSArray *_articleKeysMappingToTag;
    CDUnknownBlockType _queryCompletionHandler;
    FCMultiTagFeedQueryResult *_queryResult;
    NSError *_queryError;
}

@property(retain, nonatomic) NSError *queryError; // @synthesize queryError=_queryError;
@property(retain, nonatomic) FCMultiTagFeedQueryResult *queryResult; // @synthesize queryResult=_queryResult;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property(copy, nonatomic) NSArray *articleKeysMappingToTag; // @synthesize articleKeysMappingToTag=_articleKeysMappingToTag;
@property(nonatomic) long long sortingFunction; // @synthesize sortingFunction=_sortingFunction;
@property(retain, nonatomic) NSArray *tagFeedRequests; // @synthesize tagFeedRequests=_tagFeedRequests;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)_desiredKeys;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

