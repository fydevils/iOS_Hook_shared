//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MAMapEngineCallbackObjC-Protocol.h"

@class AMFontModelCreator, AMapNetworkStackManager, EAGLContext, NSMutableArray, NSMutableDictionary, NSNumber, NSString;
@protocol MAMapEngineMapViewDelegate;

@interface MAMapEngine : NSObject <MAMapEngineCallbackObjC>
{
    AMFontModelCreator *_fontModelCreator;
    struct IMapController *_mapController;
    struct AMapEngine *_aMapEngine;
    int _deviceId;
    struct MAMapEngineCallBack *_engineCallback;
    struct MAMapVectorOverLay *_vectorOverlay;
    struct VectorCrossAttr _vectorCrossAttr;
    NSString *_tmcDiu;
    NSString *_activeIndoorPoiID;
    int _activeIndoorFloorIndex;
    NSMutableArray *_blockArrToRun;
    NSMutableDictionary *_runloopSourceDict;
    AMapNetworkStackManager *_netWorkStackManager;
    CDStruct_5ac093a5 _mapPointLenWithWin;
    NSMutableDictionary *_tmcMD5Dic;
    _Bool _renderMapContent;
    struct CGSize _drawAbleSize;
    double _scaleFactor;
    _Bool _isShowBuildings;
    _Bool _isShowLabels;
    _Bool _isShowTraffic;
    long long _dayType;
    long long _mapStyleType;
    double _mapZoomLevel;
    long long _countOfDownLoadOperation;
    double _mapAngle;
    double _mapHeaderAngle;
    double _trafficRatio;
    id <MAMapEngineMapViewDelegate> _mapViewDelegate;
    NSNumber *_buildingHeight;
    EAGLContext *_glContext;
    AMapNetworkStackManager *_netManager;
    struct MAMapPoint _mapPointCenter;
    struct CGPoint _screenAnchor;
}

@property(retain, nonatomic) AMapNetworkStackManager *netManager; // @synthesize netManager=_netManager;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
@property(nonatomic) struct CGPoint screenAnchor; // @synthesize screenAnchor=_screenAnchor;
@property(copy, nonatomic) NSNumber *buildingHeight; // @synthesize buildingHeight=_buildingHeight;
@property(nonatomic) __weak id <MAMapEngineMapViewDelegate> mapViewDelegate; // @synthesize mapViewDelegate=_mapViewDelegate;
@property(nonatomic) _Bool isShowTraffic; // @synthesize isShowTraffic=_isShowTraffic;
@property(nonatomic) _Bool isShowLabels; // @synthesize isShowLabels=_isShowLabels;
@property(nonatomic) _Bool isShowBuildings; // @synthesize isShowBuildings=_isShowBuildings;
@property(nonatomic) long long countOfDownLoadOperation; // @synthesize countOfDownLoadOperation=_countOfDownLoadOperation;
@property(nonatomic) long long mapStyleType; // @synthesize mapStyleType=_mapStyleType;
@property(nonatomic) long long dayType; // @synthesize dayType=_dayType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dispatchBlockOnceToPostRender:(CDUnknownBlockType)arg1;
- (_Bool)createTextureFromFile:(id)arg1 andReturnResId:(int *)arg2 resIdOffset:(int)arg3;
- (void)initVectorCrossAttributes;
- (void)onNetworkNofity:(id)arg1;
- (int)networkType:(long long)arg1;
- (struct IMapView *)getMapSrvView:(unsigned int)arg1;
- (void)createAppInstance;
- (id)initWithDrawableSize:(struct CGSize)arg1 andBuildingHeight:(id)arg2 andScaleFactor:(double)arg3;
- (id)inializeTmcDiu;
- (id)getMd5WithInputString:(id)arg1;
- (void)createMapEngineWithDrawableSize:(struct CGSize)arg1;
- (void)dealloc;
- (void)destroyMapEngine;
- (void)updateMapEngineSize:(struct CGSize)arg1;
- (void)postRender;
- (void)render;
- (void)deleteVectorOverlay;
- (void)doSetStyleWithMapStyleType:(long long)arg1 andDayType:(long long)arg2;
- (void)setRenderMapContent:(_Bool)arg1;
- (void)handleVectorOvelayResult:(CDUnknownBlockType)arg1;
- (void)clearVectorOverlay;
- (void)setVectorOverlayData:(id)arg1 rect:(struct CGRect)arg2 bitmap:(char *)arg3 bitmapSize:(struct CGSize)arg4 andCompleteBlock:(CDUnknownBlockType)arg5;
@property(nonatomic) double trafficRatio; // @synthesize trafficRatio=_trafficRatio;
- (float)getSkyPercentWithZoomLevel:(float)arg1 andCameraDegree:(float)arg2;
- (double)getAspectRatio;
- (double)getCameraFov;
- (void)getCameraFromWith:(double *)arg1;
- (void)setCustomTextureData:(id)arg1;
- (void)setCustomBkTileWithColor:(id)arg1;
- (id)getCustomBkTileDataWithColor:(id)arg1;
- (void)setStyleDataWith:(id)arg1;
- (void)flushTasksOfEngineThreadPool;
- (void)removeRunLoopSourceWithKey:(struct __CFRunLoopSource *)arg1;
- (void)addRunLoopSourceWithKey:(struct __CFRunLoopSource *)arg1 value:(id)arg2;
- (void)willDestroy;
- (void)enableBaseMapRenderFinishedNotificationOnce;
- (void)setMaxFPS:(unsigned long long)arg1;
- (void)setIndoorIsShow:(_Bool)arg1;
- (void)setEngineReadDataBase:(_Bool)arg1;
- (void)setIndoorInfo:(id)arg1;
- (void)setTrafficColors:(id)arg1;
- (void)setStyleType:(long long)arg1 andDayType:(long long)arg2;
- (struct MAMapPoint)convertMapPointFromGLPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertGLPointFromMapPoint:(struct MAMapPoint)arg1;
- (double)getMapMinZoomLevel;
- (double)getMapMaxZoomLevel;
- (id)getSelectMapPoisWithwinPoint:(struct CGPoint)arg1 andRadius:(double)arg2;
- (id)getCurrentTileIDs;
- (id)getCurrentTiles;
- (double)getMapPointsPerScreenPointAtZoomLevel:(double)arg1;
- (double)getGLPointLenWithWin:(double)arg1;
- (double)getMapPointLenWithWin:(double)arg1;
- (void)destoryEngineProjection:(void *)arg1;
- (void *)getEngineProjectionWith:(_Bool)arg1;
@property(nonatomic) double mapHeaderAngle; // @synthesize mapHeaderAngle=_mapHeaderAngle;
@property(nonatomic) double mapAngle; // @synthesize mapAngle=_mapAngle;
@property(nonatomic) double mapZoomLevel; // @synthesize mapZoomLevel=_mapZoomLevel;
@property(nonatomic) struct MAMapPoint mapPointCenter; // @synthesize mapPointCenter=_mapPointCenter;
- (void)setShowBuildingTexture:(_Bool)arg1;
- (struct IMapPosture *)projection;
- (float *)getProjectionMatrix;
- (float *)getViewMatrix;
- (id)getCSID;
- (id)CSIDStringFromUrl:(id)arg1;
- (id)mapDataRequestCommonParamString:(_Bool)arg1;
- (void)OnIndoorBuildingActivity:(unsigned int)arg1 activeIndoorBuildingInfo:(struct IndoorBuilding *)arg2;
- (id)getIndoorInfoWithAMIndoorBuilding:(struct IndoorBuilding *)arg1;
- (void)onMapFunctionActivity:(unsigned int)arg1 param:(const struct MapFuncActiveParam *)arg2;
- (void)onMapAnimationFinished:(unsigned int)arg1;
- (void)onMapOfflineError:(unsigned int)arg1 cityName:(char [64])arg2 status:(int)arg3;
- (void)onMapTransferParam:(unsigned int)arg1 paramBuffer:(const int *)arg2;
- (void)onMapOrthoRender:(unsigned int)arg1;
- (void)onMapRender:(unsigned int)arg1 renderState:(int)arg2;
- (void)requireMapRender:(unsigned int)arg1 needFrames:(int)arg2 adviseFPS:(int)arg3;
- (void)onSendBehaviorLog:(unsigned int)arg1 pageId:(const char *)arg2 buttonId:(const char *)arg3 params:(const char *)arg4;
- (void)onMapLogReporter:(unsigned int)arg1 type:(int)arg2 code:(int)arg3 value:(const char *)arg4;
- (const char *)requireMapResource:(unsigned int)arg1 param:(const struct MapResourceParam *)arg2 len:(int *)arg3;
- (void)requireCharsWidths:(unsigned int)arg1 charBuffer:(const unsigned short *)arg2 charSize:(int)arg3 fontSize:(int)arg4 results:(char *)arg5;
- (char *)requireCharBitmap:(unsigned int)arg1 ch:(unsigned short)arg2 fontSize:(int)arg3;
- (void)cancelRequireMapData:(void *)arg1;
- (void)requireMapData:(unsigned int)arg1 requestParam:(const struct DataRequestParam *)arg2;
- (void)reloadMapResource:(unsigned int)arg1 resourceName:(const char *)arg2 resType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

