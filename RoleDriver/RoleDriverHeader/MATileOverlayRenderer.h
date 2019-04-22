//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAOverlayRenderer.h"

@class MATileOverlay, MATileOverlayDownloader, NSMutableArray;

@interface MATileOverlayRenderer : MAOverlayRenderer
{
    double _screenScale;
    NSMutableArray *_tileOverlayTilesToLoad;
    MATileOverlayDownloader *_tileOverlayDownloader;
    int _xMin;
    int _xMax;
    int _yMin;
    int _yMax;
    int _z;
    MATileOverlay *_tileOverlay;
}

@property(readonly, nonatomic) MATileOverlay *tileOverlay; // @synthesize tileOverlay=_tileOverlay;
- (void).cxx_destruct;
- (void)MATileOverlayRendererDeallocOperation;
- (void)dealloc;
- (id)initWithTileOverlay:(id)arg1;
- (void)reloadData;
- (id)tileOverlayTilesToLoad;
- (void)createLoadTileThread;
- (id)getCurrentTiles;
- (id)getCurrentBaseMapTiles;
- (void)glRender;
- (void)glRenderTiles:(id)arg1;
- (void)glRenderTile:(id)arg1 Transform:(struct CGAffineTransform)arg2;
- (void)loadTileWithTilePath:(struct MATileOverlayPath)arg1 Key:(id)arg2;
- (void)loadTextureID:(unsigned int *)arg1 WithKey:(id)arg2;
- (void)drawIconWithTexture:(unsigned int)arg1 TilePath:(struct MATileOverlayPath)arg2 transform:(struct CGAffineTransform)arg3;
- (id)parseTile:(id)arg1;
- (struct CGPoint *)glPointsForTileX:(long long)arg1 tileY:(long long)arg2 transform:(struct CGAffineTransform)arg3;

@end

