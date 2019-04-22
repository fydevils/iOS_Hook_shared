//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton;

@interface SFEnterSecurityCodeController : UIViewController <UITextFieldDelegate>
{
    int _type;
    NSString *_telStr;
    NSString *_identification;
    UIButton *_timeBtn;
    UIButton *_nextBtn;
    NSMutableArray *_securityCodeArr;
}

@property(retain, nonatomic) NSMutableArray *securityCodeArr; // @synthesize securityCodeArr=_securityCodeArr;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UIButton *timeBtn; // @synthesize timeBtn=_timeBtn;
@property(copy, nonatomic) NSString *identification; // @synthesize identification=_identification;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *telStr; // @synthesize telStr=_telStr;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tefiledDidChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)sendChangeUserInfoToServer;
- (void)pushNextPage;
- (void)nextButtonClick:(id)arg1;
- (void)getSecurityCodeFromServer;
- (void)openCountdown:(double)arg1;
- (void)createUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
