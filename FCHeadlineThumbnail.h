//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetHandle;

@interface FCHeadlineThumbnail : NSObject
{
    FCAssetHandle *_thumbnailAssetHandle;
    struct CGSize _thumbnailSize;
}

+ (id)headlineThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(struct CGSize)arg2;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) FCAssetHandle *thumbnailAssetHandle; // @synthesize thumbnailAssetHandle=_thumbnailAssetHandle;
- (void).cxx_destruct;

@end

