//
// Copyright (C) 2023  Autodesk, Inc. All Rights Reserved. 
// 
// SPDX-License-Identifier: Apache-2.0 
//
#if __VERSION__ >= 150
#version 150
out vec4 FragColor; 
#define FRAGCOLOR FragColor
#else
#define FRAGCOLOR gl_FragColor
#define in varying
#endif

#extension GL_ARB_texture_rectangle : require

uniform vec4 uniformColor;
uniform sampler2DRect texture0;
in vec2 TexCoord0; // paint stroke texcoord [-1, 1]
in vec2 TexCoord1; // paint stroke texcoord w.r.t. frame

void main() 
{ 
    vec2  m      = TexCoord0 - vec2(0.5, 0.5);
    float mag    = sqrt(m.x * m.x + m.y * m.y);
    float radius = 0.5;
    float bot    = 0.01831563888; /* exp(-4.0) */
    float ratio  = mag * 2.0 / radius;

    if (ratio <= 2.0) FRAGCOLOR.a = exp(-ratio*ratio)-bot*ratio*0.5;
    else FRAGCOLOR.a = 0.0;

    vec4  back         = texture2DRect(texture0, TexCoord1);
    FRAGCOLOR.rgb      = uniformColor.rgb * back.rgb;
}
