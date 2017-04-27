//
//  UIImage+MSSScale.h
//  MSSBrowse
//
//  Created by 申文峰 on 15/12/6.
//  Copyright © 2015年 申文峰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MSSScale)

// 得到图像显示完整后的frame
- (CGRect)mss_getBigImageRectSizeWithScreenWidth:(CGFloat)screenWidth screenHeight:(CGFloat)screenHeight;
@end
