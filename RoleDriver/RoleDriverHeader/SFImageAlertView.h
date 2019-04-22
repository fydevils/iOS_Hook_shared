//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;
@protocol SFImageAlertViewDelegate;

@interface SFImageAlertView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    id <SFImageAlertViewDelegate> _delegate;
    CDUnknownBlockType _onBlock;
}

@property(copy, nonatomic) CDUnknownBlockType onBlock; // @synthesize onBlock=_onBlock;
@property(nonatomic) __weak id <SFImageAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)close;
- (id)appRootViewController;
- (void)show;
- (void)rightClick:(id)arg1;
- (void)closeBtnAction:(id)arg1;
- (void)buttonClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithTitle:(id)arg1 titleAlignment:(long long)arg2 titleColor:(id)arg3 titleImageName:(id)arg4 leftMessage:(id)arg5 leftMessageColor:(id)arg6 rightMessage:(id)arg7 rightMessageColor:(id)arg8 messageArr:(id)arg9 leftButtonTitle:(id)arg10 leftBtnBgColor:(id)arg11 leftBtnTitleColor:(id)arg12 leftBtnLayerColor:(id)arg13 rightButtonTitle:(id)arg14 rightBtnBgColor:(id)arg15 rightBtnTitleColor:(id)arg16 rightBtnLayerColor:(id)arg17 titleFontSize:(double)arg18 andBlock:(CDUnknownBlockType)arg19;
- (id)initWithTitle:(id)arg1 bottomBtnAttributedStr:(id)arg2 titleAlignment:(long long)arg3 titleAttributedStr:(id)arg4 titleColor:(id)arg5 titleImageName:(id)arg6 message:(id)arg7 messageScaleX:(double)arg8 messageAlignment:(long long)arg9 messageAttributedStr:(id)arg10 messageColor:(id)arg11 leftButtonTitle:(id)arg12 leftBtnBgColor:(id)arg13 leftBtnTitleColor:(id)arg14 leftBtnLayerColor:(id)arg15 rightButtonTitle:(id)arg16 rightBtnBgColor:(id)arg17 rightBtnTitleColor:(id)arg18 rightBtnLayerColor:(id)arg19 titleFontSize:(double)arg20 messageFontSize:(double)arg21 topCancel:(id)arg22 bottomCancel:(id)arg23 andBlock:(CDUnknownBlockType)arg24;
- (id)initWithTitle:(id)arg1 titleAlignment:(long long)arg2 titleAttributedStr:(id)arg3 titleColor:(id)arg4 titleImageName:(id)arg5 message:(id)arg6 messageAlignment:(long long)arg7 messageAttributedStr:(id)arg8 messageColor:(id)arg9 leftButtonTitle:(id)arg10 leftBtnBgColor:(id)arg11 leftBtnTitleColor:(id)arg12 leftBtnLayerColor:(id)arg13 rightButtonTitle:(id)arg14 rightBtnBgColor:(id)arg15 rightBtnTitleColor:(id)arg16 rightBtnLayerColor:(id)arg17 titleFontSize:(double)arg18 messageFontSize:(double)arg19 promptMessage:(id)arg20 promptFontSize:(double)arg21 promptColor:(id)arg22 topCancel:(id)arg23 bottomCancel:(id)arg24 andBlock:(CDUnknownBlockType)arg25;
- (id)initWithTitle:(id)arg1 titleAlignment:(long long)arg2 titleAttributedStr:(id)arg3 titleColor:(id)arg4 titleImageName:(id)arg5 message:(id)arg6 messageAlignment:(long long)arg7 messageAttributedStr:(id)arg8 messageColor:(id)arg9 leftButtonTitle:(id)arg10 leftBtnBgColor:(id)arg11 leftBtnTitleColor:(id)arg12 leftBtnLayerColor:(id)arg13 rightButtonTitle:(id)arg14 rightBtnBgColor:(id)arg15 rightBtnTitleColor:(id)arg16 rightBtnLayerColor:(id)arg17 titleFontSize:(double)arg18 messageFontSize:(double)arg19 topCancel:(id)arg20 bottomCancel:(id)arg21 andBlock:(CDUnknownBlockType)arg22;
- (id)initWithTitle:(id)arg1 titleColor:(id)arg2 subtitle:(id)arg3 subtitleColor:(id)arg4 message:(id)arg5 messageColor:(id)arg6 titleImageName:(id)arg7 leftButtonTitle:(id)arg8 leftBtnBgColor:(id)arg9 leftBtnTitleColor:(id)arg10 leftBtnLayerColor:(id)arg11 rightButtonTitle:(id)arg12 rightBtnBgColor:(id)arg13 rightBtnTitleColor:(id)arg14 rightBtnLayerColor:(id)arg15 andBlock:(CDUnknownBlockType)arg16;
- (id)initWithTitle:(id)arg1 imageArr:(id)arg2 btnTtitle:(id)arg3 andBlock:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 messageImageName:(id)arg2 andBlock:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 messageArray:(id)arg2 confirmButTitle:(id)arg3 endBlock:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 messageAlignment:(id)arg3 openCloseBut:(_Bool)arg4 actionButTitle:(id)arg5 endBlock:(CDUnknownBlockType)arg6;
- (id)initWithTitle:(id)arg1 messageArray:(id)arg2 andBlock:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 titleImageName:(id)arg2 leftButtonTitle:(id)arg3 rightButtonTitle:(id)arg4 titleColor:(id)arg5 leftBtnBgColor:(id)arg6 leftBtnTitleColor:(id)arg7 leftBtnLayerColor:(id)arg8 rightBtnBgColor:(id)arg9 rightBtnTitleColor:(id)arg10 rightBtnLayerColor:(id)arg11 titleFontSize:(long long)arg12 andBlock:(CDUnknownBlockType)arg13;
- (id)initWithTitle:(id)arg1 titleColor:(id)arg2 titleImageName:(id)arg3 message:(id)arg4 btnImge:(id)arg5 messageColor:(id)arg6 leftButtonTitle:(id)arg7 leftBtnBgColor:(id)arg8 leftBtnTitleColor:(id)arg9 leftBtnLayerColor:(id)arg10 rightButtonTitle:(id)arg11 rightBtnBgColor:(id)arg12 rightBtnTitleColor:(id)arg13 rightBtnLayerColor:(id)arg14 andBlock:(CDUnknownBlockType)arg15;
- (id)initWithTitle:(id)arg1 titleImageName:(id)arg2 leftButtonTitle:(id)arg3 rightButtonTitle:(id)arg4 andBlock:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 headerTitle:(id)arg2 footTitle:(id)arg3 dataSource:(id)arg4 titleImageName:(id)arg5 leftButtonTitle:(id)arg6 rightButtonTitle:(id)arg7 andBlock:(CDUnknownBlockType)arg8;
- (id)initWithTitle:(id)arg1 dataSource:(id)arg2 titleImageName:(id)arg3 leftButtonTitle:(id)arg4 rightButtonTitle:(id)arg5 locationAddress:(id)arg6 andBlock:(CDUnknownBlockType)arg7;
- (id)initWithTitle:(id)arg1 barCodeTitle:(id)arg2 barCode:(id)arg3 titleImageName:(id)arg4 isGPSLocation:(_Bool)arg5 locationAddress:(id)arg6 leftButtonTitle:(id)arg7 rightButtonTitle:(id)arg8 andBlock:(CDUnknownBlockType)arg9;
- (id)initWithTitle:(id)arg1 dataSource:(id)arg2 titleImageName:(id)arg3 leftButtonTitle:(id)arg4 rightButtonTitle:(id)arg5 isGPSLocation:(_Bool)arg6 locationAddress:(id)arg7 andBlock:(CDUnknownBlockType)arg8;
- (id)initWithMessage:(id)arg1 titleImageName:(id)arg2 leftButtonTitle:(id)arg3 rightButtonTitle:(id)arg4 andBlock:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 titleImageName:(id)arg3 leftButtonTitle:(id)arg4 rightButtonTitle:(id)arg5 andBlock:(CDUnknownBlockType)arg6;
- (id)initWithReimbursementAndTitle:(id)arg1 messageAttributedStr:(id)arg2 Block:(CDUnknownBlockType)arg3;
- (id)initWithCheckExecutingTaskAndTitle:(id)arg1 message:(id)arg2 Block:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
