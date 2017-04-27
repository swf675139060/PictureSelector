//
//  MSSBrowseActionSheet.h
//  MSSBrowse
//
//  Created by 申文峰 on 16/2/14.
//  Copyright © 2016年 申文峰. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^MSSBrowseActionSheetDidSelectedAtIndexBlock)(NSInteger index);

@interface MSSBrowseActionSheet : UIView

- (instancetype)initWithTitleArray:(NSArray *)titleArray cancelButtonTitle:(NSString *)cancelTitle didSelectedBlock:(MSSBrowseActionSheetDidSelectedAtIndexBlock)selectedBlock;
- (void)showInView:(UIView *)view;
// transform时更新frame
- (void)updateFrame;

@end
