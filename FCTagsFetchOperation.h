//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCHeldRecords, FCTagRecordSource, NSArray;
@protocol FCTagsFetchOperationDelegate;

@interface FCTagsFetchOperation : FCMultiStepFetchOperation
{
    NSArray *_tagIDs;
    FCHeldRecords *_heldTagRecords;
    FCTagRecordSource *_tagRecordSource;
    id <FCTagsFetchOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <FCTagsFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FCTagRecordSource *tagRecordSource; // @synthesize tagRecordSource=_tagRecordSource;
@property(retain, nonatomic) FCHeldRecords *heldTagRecords; // @synthesize heldTagRecords=_heldTagRecords;
@property(copy, nonatomic) NSArray *tagIDs; // @synthesize tagIDs=_tagIDs;
- (void).cxx_destruct;
- (id)completeFetchOperation;
- (id)fetchTagRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTagIDs:(id)arg1 tagRecordSource:(id)arg2 delegate:(id)arg3;

@end

