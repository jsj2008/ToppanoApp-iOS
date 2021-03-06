//
//  TASphereFragmentObject.h
//  ToppanoApp
//
//  Created by papayabird on 2015/10/21.
//  Copyright (c) 2015年 papayabird. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>
@interface TASphereFragmentObject : NSObject

@property (nonatomic) int textureTag;

@property (nonatomic) int textureMode;

@property (strong, nonatomic) GLKTextureInfo *textureInfo;

- (TASphereFragmentObject *)init:(float)radius widthSegments:(float)widthSegments heightSegments:(float)heightSegments phiStart:(float)phiStart phiLength:(float)phiLength thetaStart:(float)thetaStart thetaLength:(float)thetaLength;

-(void) draw:(GLint) posLocation uv:(GLint) uvLocation textureModeSlot:(GLint)_textureModeSlot tex:(GLint )uTex;

@end
