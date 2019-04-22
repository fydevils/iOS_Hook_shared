//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MATileOverlay.h"

@class MADiskCache, NSString;

@interface MAENInlandMapTileOverlay : MATileOverlay
{
    MADiskCache *_diskCache;
    NSString *_language;
}

@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) MADiskCache *diskCache; // @synthesize diskCache=_diskCache;
- (void).cxx_destruct;
- (void)loadTileAtPath:(struct MATileOverlayPath)arg1 result:(CDUnknownBlockType)arg2;
- (_Bool)shouleLoadTileForTilePath:(struct MATileOverlayPath)arg1;
- (void)clearCache;
- (id)init;

@end

